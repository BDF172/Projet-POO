USE POO;
GO

ALTER PROCEDURE supprimerPersonnel
	@IdPersonnel int
AS
BEGIN

    -- Début de la transaction
    BEGIN TRANSACTION;

    BEGIN TRY
        -- Insérez le nouveau client dans la table Clients
        DELETE FROM AdressesP WHERE Personnelid_personnel = @IdPersonnel;
		DELETE FROM Personnel WHERE id_personnel = @IdPersonnel;
        COMMIT;
		SELECT 0;
    END TRY
    BEGIN CATCH
        -- En cas d'erreur, annuler la transaction
        ROLLBACK;
		SELECT 1;
    END CATCH;

END;