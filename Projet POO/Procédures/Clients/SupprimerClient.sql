USE POO;
GO

CREATE PROCEDURE SupprimerClient
	@IdClient int
AS
BEGIN

    -- Début de la transaction
    BEGIN TRANSACTION;

    BEGIN TRY
        -- Insérez le nouveau client dans la table Clients
		IF EXISTS(SELECT 1 FROM Clients WHERE id_client = @IdClient)
		BEGIN
        UPDATE AdressesC SET id_client = 1 WHERE id_client = @IdClient;
		UPDATE Commandes SET id_client = 1 WHERE id_client = @IdClient;
		DELETE FROM Clients WHERE id_client = @IdClient;
        COMMIT;
		SELECT 0;
		END
		ELSE
		BEGIN
		SELECT 1;
		END
    END TRY
    BEGIN CATCH
        -- En cas d'erreur, annuler la transaction
        ROLLBACK;
		SELECT 1;
    END CATCH;

END;