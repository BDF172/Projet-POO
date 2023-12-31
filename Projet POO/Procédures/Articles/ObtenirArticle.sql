USE POO;
GO

CREATE PROCEDURE ObtenirArticle
	@IdArticle INT

AS 
BEGIN
	IF EXISTS(SELECT 1 FROM Articles WHERE id_article = @IdArticle AND @IdArticle != 1)
	BEGIN
		SELECT 0;
		SELECT TOP(1) Articles.id_article, nom_articles, ISNULL((prix * prctTVA) , 0) AS prix
		FROM Articles
		LEFT JOIN Prix ON Articles.id_article = Prix.id_article
		LEFT JOIN TVA ON Prix.id_TVA = TVA.id_TVA
		WHERE Articles.id_article = @IdArticle
		ORDER BY dateAjout DESC;
	END
	ELSE
	BEGIN
		SELECT 1;
	END
END