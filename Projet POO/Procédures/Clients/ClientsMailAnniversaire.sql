USE POO;
GO

CREATE PROCEDURE ClientsMailAnniversaire
AS
BEGIN
	SELECT id_client FROM Clients WHERE date_naissance = CAST(DATEADD(DAY, 14, GETDATE()) AS DATE);
END