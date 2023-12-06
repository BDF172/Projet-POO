USE POO;
GO

CREATE PROCEDURE ModifierAdresse
	@IdClient INT,
	@IdAdresse INT,
    @NomRue VARCHAR(100), 
	@F_ou_L bit,
	@NumeroRue INT, 
	@IdVille INT
AS
BEGIN

    -- Début de la transaction
    BEGIN TRANSACTION;

    BEGIN TRY
        -- Insérez le nouveau client dans la table Clients
        UPDATE POO.dbo.AdressesC 
		SET nom_rue_C = @NomRue, numero_adresse_C = @NumeroRue, f_ou_l = @F_ou_L, id_ville = @IdVille
		WHERE id_client = @IdClient AND id_adresseC = @IdAdresse;
        COMMIT;
		SELECT 0;
    END TRY
    BEGIN CATCH
        -- En cas d'erreur, annuler la transaction
        ROLLBACK;
		SELECT 1;
END CATCH;

END;