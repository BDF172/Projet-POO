USE POO;
GO

CREATE PROCEDURE SupprimerAdresseClient
	@IdClient int,
	@IdAdresse int
AS
BEGIN

    -- Début de la transaction
    BEGIN TRANSACTION;

    BEGIN TRY
        -- Insérez le nouveau client dans la table Clients
        DELETE FROM AdressesC WHERE clientID = @IdClient AND id_adresse = @IdAdresse;
        COMMIT;
    END TRY
    BEGIN CATCH
        -- En cas d'erreur, annuler la transaction
        ROLLBACK;
    END CATCH;

END;