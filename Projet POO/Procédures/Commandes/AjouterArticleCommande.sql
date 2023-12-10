USE POO;
GO

CREATE PROCEDURE AjouterArticleCommande
	@IdCommande INT,
	@IdArticle INT,
	@Quantite INT,
	@IdEntrepot INT

AS
BEGIN
	SET TRANSACTION ISOLATION LEVEL SERIALIZABLE;
	DECLARE @RefCom VARCHAR(20);
    BEGIN TRANSACTION;
		--BEGIN TRY
			IF EXISTS (SELECT 1 FROM Stock 
				WHERE id_article = @IdArticle 
				AND Id_Entrepot = @IdEntrepot 
				AND quantite_stock >= @Quantite)
			BEGIN
				INSERT INTO fait_reference(id_article, id_commandes, id_entrepot, quantite)
				VALUES (@IdArticle, @IdCommande, @IdEntrepot, @Quantite);
				UPDATE Commandes SET montant_commande = ISNULL(montant_commande, 0) + (
					SELECT TOP(1) @Quantite * prix * prctTVA
					FROM prix
					LEFT JOIN TVA ON prix.id_TVA = TVA.id_TVA
					WHERE id_article = @IdArticle
					ORDER BY dateAjout
				) WHERE id_commandes = @IdCommande;
				UPDATE stock SET quantite_stock = quantite_stock - @Quantite
					WHERE id_article = @IdArticle
					AND Id_Entrepot = @IdEntrepot;
			END
			ELSE
			BEGIN
				SET @RefCom = (SELECT reference_commande FROM Commandes WHERE id_commandes = @IdCommande);
				EXEC SupprimerCommande @reference = @RefCom;
			END
			COMMIT;
		--END TRY
		--BEGIN CATCH
		--	ROLLBACK;
		--	SET @RefCom = (SELECT reference_commande FROM Commandes WHERE id_commandes = @IdCommande);
		--	SELECT 1;
		--	EXEC SupprimerCommande @reference = @RefCom;
		--END CATCH
	SET TRANSACTION ISOLATION LEVEL READ COMMITTED;
END