USE POO;
GO

CREATE PROCEDURE RechercherArticle
	@NomArticle VARCHAR(100)

AS 
BEGIN
	SELECT 0;
	SELECT Articles.id_article, nom_articles, prix * prctTVA AS prix, quantite_stock 
	FROM Articles 
	LEFT JOIN Prix ON Articles.id_article = prix.id_article
	LEFT JOIN TVA ON Prix.id_TVA = TVA.id_TVA
	LEFT JOIN Stock ON Articles.id_article = Stock.id_article
	WHERE Articles.nom_articles LIKE '%' + @NomArticle + '%';
END