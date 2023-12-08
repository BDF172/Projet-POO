USE POO;
GO

CREATE PROCEDURE ObtenirVilles
	@IdPays INT

AS 
BEGIN
	SELECT 0;
	SELECT id_ville, nom_ville FROM Ville WHERE id_pays = @IdPays;
END