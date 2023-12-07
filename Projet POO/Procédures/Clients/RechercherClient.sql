USE POO;
GO

CREATE PROCEDURE RechercherClient
	@Nom VARCHAR(100),
	@Prenom VARCHAR(100)
AS
BEGIN
	SELECT 0;

	SELECT nom_client, prenom_client, date_naissance 
	FROM Clients
	WHERE nom_client LIKE '%' + @Nom + '%' AND prenom_client LIKE '%' + @Prenom + '%';
END