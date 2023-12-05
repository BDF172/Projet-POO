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
        DELETE FROM AdressesC WHERE clientID = @IdClient;
        COMMIT;
    END TRY
    BEGIN CATCH
        -- En cas d'erreur, annuler la transaction
        ROLLBACK;
		SELECT -1;
    END CATCH;

END;