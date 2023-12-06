USE POO;
GO

CREATE PROCEDURE AjouterAdresseClient
	@IdClient INT,
    @NumeroAdresse INT,
	@NomRue varchar(50),
	@IdVille INT,
	@F_ou_L BIT


AS
BEGIN

    -- Début de la transaction
    BEGIN TRANSACTION;

    BEGIN TRY
        -- Insérez le nouveau client dans la table Clients
		INSERT INTO AdressesC(numero_adresse_C, nom_rue_C, f_ou_l, id_ville, id_client) 
		VALUES (@NumeroAdresse, @NomRue, @F_ou_L, @IdVille, @IdClient);
        -- Valider la transaction
        COMMIT;
		SELECT 0;
    END TRY
    BEGIN CATCH
        -- En cas d'erreur, annuler la transaction
        ROLLBACK;
        -- Vous pouvez gérer l'erreur ici selon vos besoins
    END CATCH;

END;
GO