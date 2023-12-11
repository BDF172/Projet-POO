USE POO;
GO

ALTER PROCEDURE TopMoinsVendu
AS
BEGIN
	SELECT 0;
    SELECT TOP(10) id_article FROM Articles
	WHERE id_article != 1
    ORDER BY quantite_vendue ASC
END