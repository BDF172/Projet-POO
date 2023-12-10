USE POO;
GO

CREATE PROCEDURE moinsVendue
AS
BEGIN
    SELECT TOP(10) * FROM Articles
    ORDER BY quantiteVendue ASC
END;