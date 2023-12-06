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
    -- D�clarez une variable pour stocker l'ID du nouveau client
    DECLARE @NouveauClientID INT;

    -- D�but de la transaction avec l'option SERIALIZABLE
    SET TRANSACTION ISOLATION LEVEL SERIALIZABLE;
    BEGIN TRANSACTION;

    BEGIN TRY
        -- Ins�rez le nouveau client dans la table Clients
        INSERT INTO Clients (nom_client, prenom_client, date_naissance)
        VALUES (@Nom, @Prenom, @DateNaissance);
		
		-- R�cup�rez l'ID du nouveau client apr�s la validation de la transaction
        SET @NouveauClientID = SCOPE_IDENTITY();

		INSERT INTO AdressesC (numero_adresse_C, nom_rue_C, f_ou_l, id_ville, id_client)
		VALUES(@NumeroAdresse, @NomRue, @F_ou_L, @IdVille, @NouveauClientID);

        -- Valider la transaction
        COMMIT;

		-- S�lectionnez le nouvel ID du client
		SELECT 0;
		SELECT @NouveauClientID AS 'ID du nouveau client';        
    END TRY
    BEGIN CATCH
        -- En cas d'erreur, annuler la transaction
        ROLLBACK;
        SELECT 1;
    END CATCH;

    -- R�tablir le niveau d'isolation par d�faut
    SET TRANSACTION ISOLATION LEVEL READ COMMITTED;
END;