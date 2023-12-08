USE POO;
GO

CREATE PROCEDURE VerifierPaiementCommande
@IdCommandeToVerify INT
AS
BEGIN
	SET TRANSACTION ISOLATION LEVEL SERIALIZABLE;
    BEGIN TRANSACTION;
	IF (SELECT Commandes.montant_commande - (
		SELECT ISNULL(SUM(Paiements.montant), 0) 
		FROM Paiements 
		WHERE Paiements.id_commandes = @IdCommandeToVerify
	) FROM Commandes WHERE id_commandes = @IdCommandeToVerify) = 0	
		BEGIN
			UPDATE Commandes SET est_envoyee = 1 WHERE id_commandes = @IdCommandeToVerify;
		END
	COMMIT
	SET TRANSACTION ISOLATION LEVEL READ COMMITTED;
END