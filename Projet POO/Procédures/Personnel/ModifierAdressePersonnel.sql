USE POO;
GO

ALTER PROCEDURE ModifierAdressePersonnel
	@IdPersonnel int,
    @Adresse varchar(50)
AS
BEGIN

    -- Début de la transaction
    BEGIN TRANSACTION;

    BEGIN TRY
        -- Insérez le nouveau client dans la table Clients
		IF EXISTS (SELECT 1 FROM AdressesP WHERE Personnelid_personnel = @IdPersonnel)
		BEGIN
        UPDATE AdressesP SET adresse = @Adresse 
		WHERE Personnelid_personnel = @IdPersonnel;
		END
		ELSE
		BEGIN
		INSERT INTO AdressesP (adresse, Villeid_ville, Personnelid_personnel)
		VALUES (@Adresse, 1, @IdPersonnel);
		END
		SELECT 0;
		COMMIT;
    END TRY
    BEGIN CATCH
        -- En cas d'erreur, annuler la transaction
        ROLLBACK;
		SELECT 1;
    END CATCH;
END