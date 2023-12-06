ALTER PROCEDURE ModifierLivraison 
@Reference VARCHAR(20),
@NouvelleDate VARCHAR(20)
AS
BEGIN
	BEGIN TRANSACTION;
	BEGIN TRY
		IF NOT EXISTS 
		(SELECT 1 FROM Commandes WHERE reference = @Reference)
		BEGIN
			SELECT 1;
		END;
		ELSE
		BEGIN
			UPDATE Commandes SET date_livraison = @NouvelleDate WHERE reference = @Reference;
			SELECT 0;
		END;
		COMMIT;
	END TRY
	BEGIN CATCH
		SELECT 1;
		ROLLBACK;
	END CATCH;
END