USE POO;
GO

CREATE PROCEDURE CreerCommande
    @IdClientToDeliver int,
	@IdAdresseL int,
	@IdAdresseF INT
AS
BEGIN
    -- Déclarez une variable pour stocker l'ID de la nouvelle commande
    DECLARE @NouvelleCommande INT;

    -- Début de la transaction avec l'option SERIALIZABLE
    SET TRANSACTION ISOLATION LEVEL SERIALIZABLE;
    BEGIN TRANSACTION;

    BEGIN TRY
	IF NOT EXISTS (SELECT 1 FROM AdressesC WHERE id_adresseC = @IdAdresseF AND f_ou_l = 0)
	BEGIN
		SELECT 1;
	END
	ELSE IF NOT EXISTS (SELECT 1 FROM AdressesC WHERE id_adresseC = @IdAdresseL AND f_ou_l = 1)
	BEGIN
		SELECT 1;
	END
	ELSE 
	BEGIN
        -- Insérez la nouvelle commande
        INSERT INTO Commandes(reference_commande, date_emission_commande, date_livraison, id_adresseL, id_adresseF, id_client)
        VALUES ('', GETDATE(), DATEADD(DAY, 7, GETDATE()), @IdAdresseL, @IdAdresseF, @IdClientToDeliver);
		
		-- Récupérez l'ID du nouveau client après la validation de la transaction
        SET @NouvelleCommande = SCOPE_IDENTITY();

		DECLARE @Reference VARCHAR(20);
		EXEC GenererReferenceCommande @CodeConcatene = @Reference OUTPUT, @IdClient = @IdClientToDeliver, @Increment = @NouvelleCommande;

		UPDATE Commandes SET reference_commande = @Reference WHERE id_commandes = @NouvelleCommande;

		-- Sélectionnez le nouvel ID du client
		SELECT 0;
		SELECT @NouvelleCommande AS 'ID de la nouvelle commande';
	END

	-- Valider la transaction
    COMMIT;

    END TRY
    BEGIN CATCH
        -- En cas d'erreur, annuler la transaction
		SELECT 1;
        ROLLBACK;
    END CATCH;

    -- Rétablir le niveau d'isolation par défaut
    SET TRANSACTION ISOLATION LEVEL READ COMMITTED;
END;