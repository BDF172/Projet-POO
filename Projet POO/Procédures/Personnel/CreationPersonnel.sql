USE POO;
GO

CREATE PROCEDURE InsererNouveauPersonnel
    @Nom varchar(50),
    @Prenom varchar(50),
    @IdSuperieur int,
	@DateEmbauche varchar(50),
	@NumeroRue INT,
	@NomRue VARCHAR(100),
	@IdVille INT
AS
BEGIN
    -- Déclarez une variable pour stocker l'ID du nouveau client
    DECLARE @NouveauPersonnelID INT;

    -- Début de la transaction avec l'option SERIALIZABLE
    SET TRANSACTION ISOLATION LEVEL SERIALIZABLE;
    BEGIN TRANSACTION;

    BEGIN TRY
        -- Insérez le nouveau client dans la table Clients
        INSERT INTO Personnel(nom_personnel, prenom_personnel, date_embauche,id_superieur)
        VALUES (@Nom, @Prenom, @DateEmbauche, @IdSuperieur);
		
		-- Récupérez l'ID du nouveau client après la validation de la transaction
        SET @NouveauPersonnelID = SCOPE_IDENTITY();

		INSERT INTO AdressesP(numero_adresse_P, nom_rue_P, id_ville, id_personnel)
		VALUES(@NumeroRue, @NomRue, @IdVille, @NouveauPersonnelID);

        -- Valider la transaction
        COMMIT;

		-- Sélectionnez le nouvel ID du client
		SELECT 0;
		SELECT @NouveauPersonnelID AS 'ID du nouveau personnel';        
    END TRY
    BEGIN CATCH
        -- En cas d'erreur, annuler la transaction
		SELECT 1;
        ROLLBACK;
    END CATCH;

    -- Rétablir le niveau d'isolation par défaut
    SET TRANSACTION ISOLATION LEVEL READ COMMITTED;
END;