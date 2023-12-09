USE POO;
GO

CREATE PROCEDURE ModifierArticle
    @IdArticle INT,
	@NomArticle VARCHAR(255),
	@PrixArticle INT, 
	@IdTva INT,
	@SeuilReappro INT, 
	@Cout FLOAT,
	@Stock INT

AS
BEGIN

    -- Début de la transaction avec l'option SERIALIZABLE
    SET TRANSACTION ISOLATION LEVEL SERIALIZABLE;
    BEGIN TRANSACTION;

    BEGIN TRY
        IF NOT EXISTS 
		(SELECT 1 FROM Articles WHERE id_article = @IdArticle)
			BEGIN
				SELECT 1;
			END;
		ELSE
			BEGIN
				INSERT INTO prix (prix, dateAjout, prixHT, cout, id_article, id_TVA)
					VALUES (@PrixArticle, GETDATE(), @PrixArticle, @Cout, @IdArticle, @IdTva);

				UPDATE Stock SET seuil_reappro = @SeuilReappro, quantite_stock = @Stock WHERE id_article = @IdArticle;
				UPDATE Articles SET nom_articles = @NomArticle WHERE id_article = @IdArticle;
				SELECT 0;
			END;
		COMMIT;
    END TRY
    BEGIN CATCH
	--En cas d'erreur, annuler la transaction
			SELECT 1;
			ROLLBACK;
    END CATCH;

    -- Rétablir le niveau d'isolation par défaut
    SET TRANSACTION ISOLATION LEVEL READ COMMITTED;
END;