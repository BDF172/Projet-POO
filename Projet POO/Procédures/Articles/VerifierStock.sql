USE POO;
GO

ALTER PROCEDURE VerifierStock
	@IdArticle INT,
	@Quantite INT

AS
BEGIN
	SELECT ISNULL((SELECT 0 FROM Stock WHERE quantite_stock >= @Quantite AND id_article = @IdArticle AND @IdArticle != 1), 1);
END