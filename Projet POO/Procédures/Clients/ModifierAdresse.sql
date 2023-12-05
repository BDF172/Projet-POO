USE POO;
GO

ALTER PROCEDURE ModifierAdresse
	@IdClient int,
	@IdAdresse int,
    @Adresse varchar(50)
AS
BEGIN

    -- D�but de la transaction
    BEGIN TRANSACTION;

    BEGIN TRY
        -- Ins�rez le nouveau client dans la table Clients
        UPDATE POO.dbo.AdressesC SET adresse = @Adresse WHERE clientID = @IdClient AND clientID = @IdAdresse;
        COMMIT;
    END TRY
    BEGIN CATCH
        -- En cas d'erreur, annuler la transaction
        ROLLBACK;
        -- Vous pouvez g�rer l'erreur ici selon vos besoins
    END CATCH;

END;