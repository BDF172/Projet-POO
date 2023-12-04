USE POO;
GO

CREATE PROCEDURE InsererNouveauClientAvecAdresse
    @Nom varchar(50),
    @Prenom varchar(50),
    @DateNaissance datetime,
	@Adresse varchar(100)
AS
BEGIN
    -- Déclarez une variable pour stocker l'ID du nouveau client
    DECLARE @NouveauClientID INT;

    -- Début de la transaction avec l'option SERIALIZABLE
    SET TRANSACTION ISOLATION LEVEL SERIALIZABLE;
    BEGIN TRANSACTION;

    BEGIN TRY
        -- Insérez le nouveau client dans la table Clients
        INSERT INTO POO.dbo.Clients (nom, prenom, date_naissance)
        VALUES (@Nom, @Prenom, @DateNaissance);
		
		-- Récupérez l'ID du nouveau client après la validation de la transaction
        SET @NouveauClientID = SCOPE_IDENTITY();

		INSERT INTO POO.dbo.AdressesC (adresse,	clientID, f_ou_l, villeID)
		VALUES(@Adresse, @NouveauClientID, 0, 1);

        -- Valider la transaction
        COMMIT;

		-- Sélectionnez le nouvel ID du client
		SELECT @NouveauClientID AS 'ID du nouveau client';        
    END TRY
    BEGIN CATCH
        -- En cas d'erreur, annuler la transaction
        ROLLBACK;
        -- Vous pouvez gérer l'erreur ici selon vos besoins
    END CATCH;

    -- Rétablir le niveau d'isolation par défaut
    SET TRANSACTION ISOLATION LEVEL READ COMMITTED;
END;