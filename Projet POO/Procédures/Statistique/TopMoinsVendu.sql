USE POO;
GO

CREATE PROCEDURE TopMoinsVendu
AS
BEGIN
	SELECT 0;
    SELECT TOP(10) id_article FROM Articles
    ORDER BY quantite_vendue ASC
END;