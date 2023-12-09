USE POO;
GO

CREATE PROCEDURE ObtenirArticle
	@IdArticle INT

AS 
BEGIN
	IF EXISTS(SELECT 1 FROM Articles WHERE id_article = @IdArticle)
	BEGIN
		SELECT 0;
		SELECT TOP(1) Articles.id_article, nom_articles, (prix * prctTVA) AS prix FROM Articles
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