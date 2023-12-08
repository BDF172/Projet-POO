USE POO;
GO 

CREATE PROCEDURE ObtenirMontantRestant
@IdCommande INT
AS
BEGIN
	IF NOT EXISTS (SELECT 1 FROM Commandes WHERE id_commandes = @IdCommande)
	BEGIN
		SELECT 1;
	END
	ELSE
	BEGIN
		SELECT 0;
		SELECT (Commandes.montant_commande - (SELECT ISNULL(SUM(Paiements.montant), 0)
			FROM Paiements
			WHERE Paiements.id_commandes = @IdCommande)
		)
		FROM Commandes
		WHERE id_commandes = @IdCommande;
	END
END