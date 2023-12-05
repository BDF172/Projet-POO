USE POO;
GO

CREATE PROCEDURE CreerCommande
    @IdClientToDeliver int,
	@IdAdresseL int
AS
BEGIN
    -- Déclarez une variable pour stocker l'ID de la nouvelle commande
    DECLARE @NouvelleCommande INT;

    -- Début de la transaction avec l'option SERIALIZABLE
    SET TRANSACTION ISOLATION LEVEL SERIALIZABLE;
    BEGIN TRANSACTION;

    --BEGIN TRY
        -- Insérez le nouveau client dans la table Clients
        INSERT INTO Commandes(reference, date_emission_commande, date_livraison, Adressesid_adresse, Clientsid_client)
        VALUES ('', GETDATE(), DATEADD(DAY, 7, GETDATE()), @IdAdresseL, @IdClientToDeliver);
		
		-- Récupérez l'ID du nouveau client après la validation de la transaction
        SET @NouvelleCommande = SCOPE_IDENTITY();

		DECLARE @Reference VARCHAR(20);
		EXEC GenererReferenceCommande @CodeConcatene = @Reference OUTPUT, @IdClient = @IdClientToDeliver, @Increment = @NouvelleCommande;

		UPDATE Commandes SET reference = @Reference WHERE id_commande = @NouvelleCommande;

        -- Valider la transaction
        COMMIT;

		-- Sélectionnez le nouvel ID du client
		SELECT 0;
		SELECT @NouvelleCommande AS 'ID de la nouvelle commande';        
    --END TRY
    --BEGIN CATCH
    --    -- En cas d'erreur, annuler la transaction
	--	SELECT 1;
    --    ROLLBACK;
    --END CATCH;

    -- Rétablir le niveau d'isolation par défaut
    SET TRANSACTION ISOLATION LEVEL READ COMMITTED;
END;