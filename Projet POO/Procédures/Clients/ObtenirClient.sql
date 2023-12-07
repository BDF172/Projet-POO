USE POO;
GO

CREATE PROCEDURE ObtenirClient
	@IdClient INT
AS
BEGIN
	IF NOT EXISTS(SELECT 1 FROM Clients WHERE id_client = @IdClient)
		BEGIN
			SELECT 1;
		END
	ELSE
		BEGIN
			SELECT 0;

			SELECT nom_client, prenom_client, date_naissance 
			FROM Clients
			WHERE id_client = @IdClient;

			SELECT f_ou_l, numero_adresse_C, nom_rue_C, nom_ville, nom_pays
			FROM AdressesC
			LEFT JOIN Ville ON AdressesC.id_ville = Ville.id_ville
			LEFT JOIN Pays ON Ville.id_pays = Pays.id_pays
			WHERE id_client = @IdClient;
		END
END