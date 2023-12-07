USE POO;
GO

CREATE PROCEDURE ObtenirPersonnel
	@IdPersonnel INT
AS
BEGIN
	IF NOT EXISTS(SELECT 1 FROM Personnel WHERE id_personnel = @IdPersonnel)
	BEGIN
		SELECT 1;
	END
	ELSE
	BEGIN
		SELECT 0;
		SELECT nom_personnel, prenom_personnel, date_embauche, id_superieur, statut, numero_adresse_P, nom_rue_P, nom_ville, nom_pays
		FROM Personnel
		LEFT JOIN AdressesP ON Personnel.id_personnel = AdressesP.id_personnel
		LEFT JOIN Ville ON AdressesP.id_ville = Ville.id_ville
		LEFT JOIN Pays ON Ville.id_pays = Pays.id_pays
		WHERE Personnel.id_personnel = @IdPersonnel;
	END
END