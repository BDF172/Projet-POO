CREATE PROCEDURE PayerCommande
@IdCommande INT,
@Montant MONEY,
@IdMoyen INT

AS
BEGIN
	-- Début de la transaction avec l'option SERIALIZABLE
    SET TRANSACTION ISOLATION LEVEL SERIALIZABLE;
    BEGIN TRANSACTION;
	BEGIN TRY
		IF NOT EXISTS (
			SELECT 1
			FROM Commandes
			LEFT JOIN Paiements ON Commandes.id_commandes = Paiements.id_commandes
			WHERE Commandes.id_commandes = @IdCommande 
			AND (
				SELECT ISNULL(SUM(Paiements.montant), 0) + @Montant
				FROM Paiements
				WHERE Paiements.id_commandes = @IdCommande
			) <= Commandes.montant_commande
		)
		BEGIN
			SELECT 1;
		END
		ELSE 
		BEGIN
			INSERT INTO Paiements (montant, Id_Moyens_paiement, id_commandes)
			VALUES (@Montant, @IdMoyen, @IdCommande);
			EXEC VerifierPaiementCommande @IdCommandeToVerify = @IdCommande;
		END
		COMMIT;
		SET TRANSACTION ISOLATION LEVEL READ COMMITTED;
	END TRY
	BEGIN CATCH
		SELECT 1;
		ROLLBACK
	END CATCH
END