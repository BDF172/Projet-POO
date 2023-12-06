USE POO;
GO

CREATE PROCEDURE InsererNouveauClientAvecAdresse
    @Nom varchar(50),
    @Prenom varchar(50),
    @DateNaissance date,
	@NumeroAdresse varchar(5),
	@NomRue varchar(100),
	@F_ou_L bit,
	@IdVille int
AS
BEGIN
    -- Déclarez une variable pour stocker l'ID du nouveau client
    DECLARE @NouveauClientID INT;

    -- Début de la transaction avec l'option SERIALIZABLE
    SET TRANSACTION ISOLATION LEVEL SERIALIZABLE;
    BEGIN TRANSACTION;

    BEGIN TRY
        -- Insérez le nouveau client dans la table Clients
        INSERT INTO Clients (nom_client, prenom_client, date_naissance)
        VALUES (@Nom, @Prenom, @DateNaissance);
		
		-- Récupérez l'ID du nouveau client après la validation de la transaction
        SET @NouveauClientID = SCOPE_IDENTITY();

		INSERT INTO AdressesC (numero_adresse_C, nom_rue_C, f_ou_l, id_ville, id_client)
		VALUES(@NumeroAdresse, @NomRue, @F_ou_L, @IdVille, @NouveauClientID);

        -- Valider la transaction
        COMMIT;

		-- Sélectionnez le nouvel ID du client
		SELECT 0;
		SELECT @NouveauClientID AS 'ID du nouveau client';        
    END TRY
    BEGIN CATCH
        -- En cas d'erreur, annuler la transaction
        ROLLBACK;
        SELECT 1;
    END CATCH;

    -- Rétablir le niveau d'isolation par défaut
    SET TRANSACTION ISOLATION LEVEL READ COMMITTED;
END;