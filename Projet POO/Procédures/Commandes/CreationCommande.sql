USE POO;
GO

CREATE PROCEDURE CreerCommande
    @IdClientToDeliver int,
	@IdAdresseL int
AS
BEGIN
    -- D�clarez une variable pour stocker l'ID de la nouvelle commande
    DECLARE @NouvelleCommande INT;

    -- D�but de la transaction avec l'option SERIALIZABLE
    SET TRANSACTION ISOLATION LEVEL SERIALIZABLE;
    BEGIN TRANSACTION;

    --BEGIN TRY
        -- Ins�rez le nouveau client dans la table Clients
        INSERT INTO Commandes(reference, date_emission_commande, date_livraison, Adressesid_adresse, Clientsid_client)
        VALUES ('', GETDATE(), DATEADD(DAY, 7, GETDATE()), @IdAdresseL, @IdClientToDeliver);
		
		-- R�cup�rez l'ID du nouveau client apr�s la validation de la transaction
        SET @NouvelleCommande = SCOPE_IDENTITY();

		DECLARE @Reference VARCHAR(20);
		EXEC GenererReferenceCommande @CodeConcatene = @Reference OUTPUT, @IdClient = @IdClientToDeliver, @Increment = @NouvelleCommande;

		UPDATE Commandes SET reference = @Reference WHERE id_commande = @NouvelleCommande;

        -- Valider la transaction
        COMMIT;

		-- S�lectionnez le nouvel ID du client
		SELECT 0;
		SELECT @NouvelleCommande AS 'ID de la nouvelle commande';        
    --END TRY
    --BEGIN CATCH
    --    -- En cas d'erreur, annuler la transaction
	--	SELECT 1;
    --    ROLLBACK;
    --END CATCH;

    -- R�tablir le niveau d'isolation par d�faut
    SET TRANSACTION ISOLATION LEVEL READ COMMITTED;
END;