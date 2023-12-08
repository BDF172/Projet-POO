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
        UPDATE AdressesC SET id_client = 1 WHERE id_client = @IdClient;
        COMMIT;
		SELECT 0;
    END TRY
    BEGIN CATCH
        -- En cas d'erreur, annuler la transaction
        ROLLBACK;
		SELECT 1;
    END CATCH;

END;