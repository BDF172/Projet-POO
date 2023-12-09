USE POO;
GO

ALTER PROCEDURE AjouterArticleCommande
	@IdCommande INT,
	@IdArticle INT,
	@Quantite INT,
	@IdEntrepot INT

AS
BEGIN
	SET TRANSACTION ISOLATION LEVEL SERIALIZABLE;
    BEGIN TRANSACTION;
		BEGIN TRY
			INSERT INTO fait_reference(id_article, id_commandes, id_entrepot, quantite)
			VALUES (@IdArticle, @IdCommande, @IdEntrepot, @Quantite);
			UPDATE Commandes SET montant_commande = ISNULL(montant_commande, 0) + (
				SELECT @Quantite * prix * prctTVA
				FROM prix
				LEFT JOIN TVA ON prix.id_TVA = TVA.id_TVA
				WHERE id_article = @IdArticle
			) WHERE id_commandes = @IdCommande;
			COMMIT;
		END TRY
		BEGIN CATCH
			ROLLBACK;
			SELECT 1;
		END CATCH
	SET TRANSACTION ISOLATION LEVEL READ COMMITTED;
END