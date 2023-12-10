USE POO;
GO 

CREATE PROCEDURE ObtenirMontantRestant
@Reference VARCHAR(20)
AS
BEGIN
	
	IF NOT EXISTS (SELECT 1 FROM Commandes WHERE reference_commande = @Reference)
	BEGIN
		SELECT 1;
	END
	ELSE
	BEGIN
		DECLARE @IdCommande INT;
		SET @IdCommande = (SELECT id_commandes FROM Commandes WHERE reference_commande = @Reference);
		SELECT 0;
		SELECT (Commandes.montant_commande - (SELECT ISNULL(SUM(Paiements.montant), 0)
			FROM Paiements
			WHERE Paiements.id_commandes = @IdCommande)
		)
		FROM Commandes
		WHERE id_commandes = @IdCommande;
	END
END