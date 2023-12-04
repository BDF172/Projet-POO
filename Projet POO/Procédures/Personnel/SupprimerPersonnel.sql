USE POO;
GO

CREATE PROCEDURE supprimerPersonnel
	@IdPersonnel int
AS
BEGIN

    -- Début de la transaction
    BEGIN TRANSACTION;

    BEGIN TRY
        -- Insérez le nouveau client dans la table Clients
        DELETE FROM AdressesP WHERE id_adresse = (SELECT id_adresse FROM Personnel WHERE id_personnel = @IdPersonnel);
		DELETE FROM Personnel WHERE id_personnel = @IdPersonnel;
        COMMIT;
    END TRY
    BEGIN CATCH
        -- En cas d'erreur, annuler la transaction
        ROLLBACK;
    END CATCH;

END;