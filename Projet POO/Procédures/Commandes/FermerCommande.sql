CREATE PROCEDURE FermerCommande
	@IdCommande INT

AS 
BEGIN
	SET TRANSACTION ISOLATION LEVEL SERIALIZABLE;
    BEGIN TRANSACTION;

		BEGIN TRY
			DECLARE @IdClient INT;
			SET @IdClient = (SELECT id_client FROM Commandes WHERE id_commandes = @IdCommande);
			IF NOT EXISTS (
				SELECT 1 FROM Commandes
				WHERE id_commandes = @IdCommande AND ISNULL(est_complete, 0) = 0
			)
			BEGIN
				SELECT 1;
			END
			ELSE
			BEGIN
				UPDATE Commandes SET est_complete = 1
				WHERE id_commandes = @IdCommande;
				IF EXISTS(SELECT 1 FROM Clients WHERE DATEADD(DAY, 14, CAST(GETDATE() AS DATE)) = date_naissance AND id_client = @IdClient)
					BEGIN
						UPDATE Commandes SET montant_commande = 0.85*montant_commande WHERE id_commandes = @IdCommande;
					END
				SELECT 0;
				SELECT reference_commande FROM Commandes WHERE id_commandes = @IdCommande;
			END;
			COMMIT;
		END TRY
		BEGIN CATCH
			SELECT 1;
			ROLLBACK;
		END CATCH

    SET TRANSACTION ISOLATION LEVEL READ COMMITTED;
END