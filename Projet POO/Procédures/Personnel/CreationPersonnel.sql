USE POO;
GO

CREATE PROCEDURE InsererNouveauPersonnel
    @Nom varchar(50),
    @Prenom varchar(50),
    @IdSuperieur int,
	@DateEmbauche varchar(50),
	@Adresse varchar(100)
AS
BEGIN
    -- D�clarez une variable pour stocker l'ID du nouveau client
    DECLARE @NouveauPersonnelID INT;

    -- D�but de la transaction avec l'option SERIALIZABLE
    SET TRANSACTION ISOLATION LEVEL SERIALIZABLE;
    BEGIN TRANSACTION;

    BEGIN TRY
        -- Ins�rez le nouveau client dans la table Clients
        INSERT INTO Personnel(nom, prenom, date_embauche,superieur)
        VALUES (@Nom, @Prenom, @DateEmbauche, @IdSuperieur);
		
		-- R�cup�rez l'ID du nouveau client apr�s la validation de la transaction
        SET @NouveauPersonnelID = SCOPE_IDENTITY();

		INSERT INTO AdressesP(adresse, Villeid_ville, Personnelid_personnel)
		VALUES(@Adresse, 1, @NouveauPersonnelID);

        -- Valider la transaction
        COMMIT;

		-- S�lectionnez le nouvel ID du client
		SELECT 0;
		SELECT @NouveauPersonnelID AS 'ID du nouveau personnel';        
    END TRY
    BEGIN CATCH
        -- En cas d'erreur, annuler la transaction
		SELECT 1;
        ROLLBACK;
    END CATCH;

    -- R�tablir le niveau d'isolation par d�faut
    SET TRANSACTION ISOLATION LEVEL READ COMMITTED;
END;