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
    -- D�clarez une variable pour stocker l'ID de la nouvelle commande
    DECLARE @NouvelArticle INT;

    -- D�but de la transaction avec l'option SERIALIZABLE
    SET TRANSACTION ISOLATION LEVEL SERIALIZABLE;
    BEGIN TRANSACTION;

    BEGIN TRY
        -- Ins�rez le nouveau client dans la table Clients
        INSERT INTO Articles(nom_articles)
        VALUES (@NomArticle);
		
		-- R�cup�rez l'ID du nouvel article
        SET @NouvelArticle = SCOPE_IDENTITY();

		INSERT INTO prix (prix, dateAjout, prixHT, cout, id_article, id_TVA)
		VALUES (@PrixArticle, GETDATE(), @PrixArticle, @Cout, @NouvelArticle, @IdTva);

		INSERT INTO stock (seuil_reappro, quantiteVendue, Id_Entrepot, id_article, quantite_stock)
		VALUES (@SeuilReappro, 0, 1, @NouvelArticle, 0);

        -- Valider la transaction
        COMMIT;

		-- S�lectionnez le nouvel ID de l'article
		SELECT 0;
		SELECT @NouvelArticle AS 'ID du nouvel article';        
    END TRY
    BEGIN CATCH
        -- En cas d'erreur, annuler la transaction
		SELECT 1;
        ROLLBACK;
    END CATCH;

    -- R�tablir le niveau d'isolation par d�faut
    SET TRANSACTION ISOLATION LEVEL READ COMMITTED;
END;
GO

EXEC CreerArticle
@NomArticle = 'Article 1',
	@PrixArticle = 10, 
	@IdTva = 1,
	@SeuilReappro = 100, 
	@Cout = 10;

EXEC CreerArticle
@NomArticle = 'Article 2',
	@PrixArticle = 20, 
	@IdTva = 2,
	@SeuilReappro = 100, 
	@Cout = 5;