USE POO;
GO

CREATE PROCEDURE SupprimerArticle
    @IdArticle INT

AS
BEGIN

    -- Début de la transaction avec l'option SERIALIZABLE
    SET TRANSACTION ISOLATION LEVEL SERIALIZABLE;
    BEGIN TRANSACTION;

    BEGIN TRY
        IF NOT EXISTS 
		(SELECT 1 FROM Articles WHERE id_article = @IdArticle)
		BEGIN
		SELECT 1;
		END;
		ELSE
		BEGIN
		DELETE FROM Commandes WHERE reference = @IdArticle;
		SELECT 0;
		END;
		COMMIT;
    END TRY
    BEGIN CATCH
        -- En cas d'erreur, annuler la transaction
		SELECT 1;
        ROLLBACK;
    END CATCH;

    -- Rétablir le niveau d'isolation par défaut
    SET TRANSACTION ISOLATION LEVEL READ COMMITTED;
END;