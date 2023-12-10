USE POO;
GO

CREATE PROCEDURE ObtenirFacture
@Reference VARCHAR(20)
AS
BEGIN
    DECLARE @DateCommande DATETIME;
    SET @DateCommande = (SELECT date_emission_commande FROM Commandes WHERE reference_commande = @Reference);
	IF EXISTS (SELECT 1 FROM Commandes WHERE reference_commande = @Reference)
	BEGIN
		SELECT 0;
		WITH CTE AS (
			SELECT
				reference_commande, 
				date_emission_commande, 
				dateAjout,
				date_livraison, 
				montant_commande, 
				ISNULL(est_envoyee, 0) AS est_envoyee, 
				nom_articles, 
				quantite, 
				prixHT, 
				prixHT * quantite AS 'Prix total HT',  
				prixHT * quantite * prctTVA AS 'Prix Total',
				prctTVA,
				ROW_NUMBER() OVER (PARTITION BY Articles.id_article ORDER BY dateAjout DESC) AS RowNum
			FROM fait_reference
			LEFT JOIN Commandes ON Commandes.id_commandes = fait_reference.id_commandes
			LEFT JOIN Articles ON fait_reference.id_article = Articles.id_article
			LEFT JOIN Prix ON Articles.id_article = prix.id_article
			LEFT JOIN TVA ON prix.id_TVA = TVA.id_TVA
			WHERE reference_commande = @Reference AND dateAjout <= @DateCommande
		)
		SELECT
			montant_commande, 
			nom_articles, 
			quantite, 
			prixHT, 
			'Prix total HT' = prixHT * quantite,
			'Prix Total' = prixHT * quantite * prctTVA
		FROM CTE
		WHERE RowNum = 1
		ORDER BY dateAjout DESC;
	END
	ELSE
	BEGIN
		SELECT 1;
	END;
END
