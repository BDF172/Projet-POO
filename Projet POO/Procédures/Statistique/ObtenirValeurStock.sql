USE POO;
GO

CREATE PROCEDURE ObtenirValeurStock
AS
BEGIN
	SELECT 0;
    SELECT 
        SUM(p.prix)
    FROM 
        Articles a
    LEFT JOIN 
        (SELECT 
             id_article,
             prix,
             dateAjout,
             ROW_NUMBER() OVER (PARTITION BY id_article ORDER BY dateAjout DESC) AS rn
         FROM 
             prix) p ON a.id_article = p.id_article AND p.rn = 1;
END;