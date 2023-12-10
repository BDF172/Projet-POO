CREATE PROCEDURE CalculerPanierMoyen
AS
BEGIN
	SELECT 0;
	SELECT ISNULL(AVG(montant_commande), 0) AS panierMoyen
    FROM Commandes;
END;