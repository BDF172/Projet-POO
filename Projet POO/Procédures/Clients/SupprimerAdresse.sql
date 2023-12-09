USE POO;
GO

CREATE PROCEDURE SupprimerAdresseClient
	@IdAdresse int
AS
BEGIN

    -- Début de la transaction
    BEGIN TRANSACTION;

    BEGIN TRY
        -- Insérez le nouveau client dans la table Clients
		IF NOT EXISTS (SELECT 1 FROM AdressesC WHERE id_adresseC = @IdAdresse)
		BEGIN
			SELECT 1;
		END
		ELSE 
		BEGIN
			UPDATE AdressesC SET is_listed = 0 WHERE id_adresseC = @IdAdresse;
			SELECT 0;
		END
        COMMIT;
    END TRY
    BEGIN CATCH
        -- En cas d'erreur, annuler la transaction
		SELECT 1;
        ROLLBACK;
    END CATCH;

END;