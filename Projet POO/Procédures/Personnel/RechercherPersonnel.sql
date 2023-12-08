USE POO;
GO

CREATE PROCEDURE RecherchePersonnel
	@Nom VARCHAR(100),
	@Prenom VARCHAR(100)

AS 
BEGIN
	SELECT 0;
	SELECT id_personnel FROM Personnel
	WHERE nom_personnel LIKE '%' + @Nom + '%' 
	AND prenom_personnel LIKE '%' + @Prenom + '%';
END