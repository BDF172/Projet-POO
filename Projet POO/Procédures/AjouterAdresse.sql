ALTER PROCEDURE AjouterAdresse
	@IdClient int,
    @Adresse varchar(50),
	@Facturation bit

AS
BEGIN

    -- Début de la transaction
    BEGIN TRANSACTION;

    BEGIN TRY
        -- Insérez le nouveau client dans la table Clients
		INSERT INTO POO.dbo.AdressesC(f_ou_l, villeID, adresse, clientID) VALUES (@Facturation, 1, @Adresse, @IdClient);
        -- Valider la transaction
        COMMIT;
    END TRY
    BEGIN CATCH
        -- En cas d'erreur, annuler la transaction
        ROLLBACK;
        -- Vous pouvez gérer l'erreur ici selon vos besoins
    END CATCH;

END;