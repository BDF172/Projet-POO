USE POO;
GO

ALTER PROCEDURE ModifierPersonnel
	@IdPersonnel int,
    @Nom varchar(50),
    @Prenom varchar(50),
    @IdSuperieur int
AS
BEGIN
    -- D�clarez une variable pour stocker l'ID du nouveau client
    DECLARE @NouveauClientID INT;

    -- D�but de la transaction
    BEGIN TRANSACTION;

    BEGIN TRY
        -- Ins�rez le nouveau client dans la table Clients
        IF @Nom != ''
		BEGIN
		UPDATE Personnel
        SET nom = @Nom WHERE id_personnel = @IdPersonnel;
		END
		
		IF @Prenom != ''
		BEGIN
		UPDATE Personnel 
        SET prenom = @Prenom WHERE id_personnel = @IdPersonnel;
		END
		
		IF @IdSuperieur != ''
		BEGIN
		UPDATE Personnel
        SET superieur = @IdSuperieur WHERE id_personnel = @IdPersonnel;
		END
        -- Valider la transaction
        COMMIT;
		SELECT 0;
    END TRY
    BEGIN CATCH
        -- En cas d'erreur, annuler la transaction
        ROLLBACK;
		SELECT 1;
        -- Vous pouvez g�rer l'erreur ici selon vos besoins
    END CATCH;

END;