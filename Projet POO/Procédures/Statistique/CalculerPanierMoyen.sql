ALTER PROCEDURE CalculerPanierMoyen
AS
BEGIN
	SELECT ISNULL(AVG(montant_commande), 0) AS panierMoyen
    FROM Commandes;
END;