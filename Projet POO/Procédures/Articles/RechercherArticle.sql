USE POO;
GO

ALTER PROCEDURE RechercherArticle
    @NomArticle VARCHAR(100)
AS 
BEGIN
	SELECT 0;
    WITH CTE AS (
        SELECT
            Articles.id_article,
            nom_articles,
            prix * prctTVA AS prix,
            quantite_stock,
            ROW_NUMBER() OVER (PARTITION BY Articles.id_article ORDER BY dateAjout DESC) AS RowNum
        FROM Articles 
        LEFT JOIN Prix ON Articles.id_article = Prix.id_article
        LEFT JOIN TVA ON Prix.id_TVA = TVA.id_TVA
        LEFT JOIN Stock ON Articles.id_article = Stock.id_article
        WHERE Articles.nom_articles LIKE '%' + @NomArticle + '%'
		AND Articles.id_article != 1
    )
    SELECT 
        id_article,
        nom_articles,
        prix,
        quantite_stock
    FROM CTE
    WHERE RowNum = 1;
END
