USE POO;
GO

CREATE PROCEDURE CreerArticle
    @NomArticle VARCHAR(255),
	@PrixArticle INT, 
	@PrctTVA FLOAT, 
	@SeuilReappro INT, 
	@Cout FLOAT

AS
BEGIN
    -- Déclarez une variable pour stocker l'ID de la nouvelle commande
    DECLARE @NouvelArticle INT;

    -- Début de la transaction avec l'option SERIALIZABLE
    SET TRANSACTION ISOLATION LEVEL SERIALIZABLE;
    BEGIN TRANSACTION;

    BEGIN TRY
        -- Insérez le nouveau client dans la table Clients
        INSERT INTO Articles(reference, nom, stock, prixHT, prctTVA, montantTTC, seuil_reappro, cout, nb_vendus)
        VALUES (0, @NomArticle, 0, @PrixArticle, @PrctTVA, @PrixArticle * @PrctTVA, @SeuilReappro, @Cout, 0);
		
		-- Récupérez l'ID du nouveau client après la validation de la transaction
        SET @NouvelArticle = SCOPE_IDENTITY();

        -- Valider la transaction
        COMMIT;

		-- Sélectionnez le nouvel ID du client
		SELECT 0;
		SELECT @NouvelArticle AS 'ID de la nouvelle commande';        
    END TRY
    BEGIN CATCH
        -- En cas d'erreur, annuler la transaction
		SELECT 1;
        ROLLBACK;
    END CATCH;

    -- Rétablir le niveau d'isolation par défaut
    SET TRANSACTION ISOLATION LEVEL READ COMMITTED;
END;