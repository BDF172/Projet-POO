USE POO;
GO

CREATE PROCEDURE SousSeuilReappro
AS
BEGIN
	SELECT 0;
    SELECT Articles.id_article FROM Articles LEFT JOIN stock ON Articles.id_article = stock.id_article
    WHERE quantite_stock <= seuil_reappro AND Articles.id_article != 1;
END;