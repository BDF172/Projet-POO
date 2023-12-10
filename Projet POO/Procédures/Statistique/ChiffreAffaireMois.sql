CREATE PROCEDURE chiffreAffaireMois @date DATE
AS
BEGIN
    SELECT 0;
	SELECT SUM(montant_commande) AS chiffreAffaireMois
    FROM commandes
    WHERE MONTH(date_emission_commande) = MONTH(@date) AND YEAR(date_emission_commande) = YEAR(@date);
END;