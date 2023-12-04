CREATE PROCEDURE InsereNouveauClient
    @Nom varchar(50),
    @Prenom varchar(50),
    @DateNaissance datetime
AS
BEGIN
    -- D�clarez une variable pour stocker l'ID du nouveau client
    DECLARE @NouveauClientID INT;

    -- D�but de la transaction avec l'option SERIALIZABLE
    SET TRANSACTION ISOLATION LEVEL SERIALIZABLE;
    BEGIN TRANSACTION;

    BEGIN TRY
        -- Ins�rez le nouveau client dans la table Clients
        INSERT INTO POO.dbo.Clients (nom, prenom, date_naissance)
        VALUES (@Nom, @Prenom, @DateNaissance);

        -- Valider la transaction
        COMMIT;

        -- R�cup�rez l'ID du nouveau client apr�s la validation de la transaction
        SET @NouveauClientID = SCOPE_IDENTITY();
    END TRY
    BEGIN CATCH
        -- En cas d'erreur, annuler la transaction
        ROLLBACK;
        -- Vous pouvez g�rer l'erreur ici selon vos besoins
    END CATCH;

    -- R�tablir le niveau d'isolation par d�faut
    SET TRANSACTION ISOLATION LEVEL READ COMMITTED;

    -- S�lectionnez le nouvel ID du client
    SELECT @NouveauClientID AS 'ID du nouveau client';
END;

