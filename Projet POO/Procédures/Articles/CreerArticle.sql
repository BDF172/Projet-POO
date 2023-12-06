USE POO;
GO

CREATE PROCEDURE CreerArticle
    @NomArticle VARCHAR(255),
	@PrixArticle INT, 
	@IdTva INT,
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
		DECLARE @PrctTVA FLOAT;
		SET @PrctTVA = (SELECT prctTVA FROM id_TVA WHERE id_TVA = @IdTva);

        INSERT INTO Articles(nom_articles)
        VALUES (@NomArticle);
		
		-- Récupérez l'ID du nouvel article
        SET @NouvelArticle = SCOPE_IDENTITY();

		INSERT INTO prix (prix, dateAjout, prixHT, cout, id_article, id_TVA)
		VALUES (@PrixArticle, GETDATE(), @PrixArticle, @Cout, @NouvelArticle, @IdTva);

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