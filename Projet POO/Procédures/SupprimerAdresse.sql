CREATE PROCEDURE SupprimerAdresse
	@IdClient int,
	@IdAdresse int
AS
BEGIN

    -- D�but de la transaction
    BEGIN TRANSACTION;

    BEGIN TRY
        -- Ins�rez le nouveau client dans la table Clients
        DELETE FROM POO.dbo.AdressesC WHERE clientID = @IdClient AND id_adresse = @IdAdresse;
        COMMIT;
    END TRY
    BEGIN CATCH
        -- En cas d'erreur, annuler la transaction
        ROLLBACK;
        -- Vous pouvez g�rer l'erreur ici selon vos besoins
    END CATCH;

END;