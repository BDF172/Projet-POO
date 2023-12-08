USE POO;
GO

CREATE PROCEDURE ModifierAdressePersonnel
	@IdPersonnel int,
    @NumeroRue INT,
	@NomRue varchar(50),
	@IdVille INT
AS
BEGIN

    -- Début de la transaction
    BEGIN TRANSACTION;

    BEGIN TRY
        -- Insérez le nouveau client dans la table Clients
		IF EXISTS (SELECT 1 FROM AdressesP WHERE id_personnel = @IdPersonnel)
		BEGIN
        UPDATE AdressesP 
		SET numero_adresse_P = @NumeroRue,
		nom_rue_P = @NomRue,
		id_ville = @IdVille
		WHERE id_personnel = @IdPersonnel;
		END
		ELSE
		BEGIN
		INSERT INTO AdressesP (numero_adresse_P, nom_rue_P, id_ville, id_personnel)
		VALUES (@NumeroRue, @NomRue, @IdVille, @IdPersonnel);
		END
		SELECT 0;
		COMMIT;
    END TRY
    BEGIN CATCH
        -- En cas d'erreur, annuler la transaction
        ROLLBACK;
		SELECT 1;
    END CATCH;
END