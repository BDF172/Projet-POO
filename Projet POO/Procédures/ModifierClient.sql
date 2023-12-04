ALTER PROCEDURE ModifierClient
	@IdClient int,
    @Nom varchar(50),
    @Prenom varchar(50),
    @DateNaissance datetime
AS
BEGIN
    -- Déclarez une variable pour stocker l'ID du nouveau client
    DECLARE @NouveauClientID INT;

    -- Début de la transaction
    BEGIN TRANSACTION;

    BEGIN TRY
        -- Insérez le nouveau client dans la table Clients
        IF @Nom != ''
		BEGIN
		UPDATE POO.dbo.Clients
        SET nom = @Nom WHERE id_client = @IdClient;;
		END
		
		IF @Prenom != ''
		BEGIN
		UPDATE POO.dbo.Clients 
        SET prenom = @Prenom WHERE id_client = @IdClient;
		END
		
		IF @DateNaissance != ''
		BEGIN
		UPDATE POO.dbo.Clients 
        SET date_naissance = @DateNaissance WHERE id_client = @IdClient;
		END
        -- Valider la transaction
        COMMIT;
    END TRY
    BEGIN CATCH
        -- En cas d'erreur, annuler la transaction
        ROLLBACK;
        -- Vous pouvez gérer l'erreur ici selon vos besoins
    END CATCH;

END;