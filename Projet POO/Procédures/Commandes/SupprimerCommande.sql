USE POO;
GO

CREATE PROCEDURE SupprimerCommande
    @reference varchar(20)

AS
BEGIN

    -- D�but de la transaction avec l'option SERIALIZABLE
    SET TRANSACTION ISOLATION LEVEL SERIALIZABLE;
    BEGIN TRANSACTION;

    BEGIN TRY
        IF NOT EXISTS 
		(SELECT 1 FROM Commandes WHERE reference = @reference)
		BEGIN
		SELECT 1;
		END;
		ELSE
		BEGIN
		DELETE FROM Commandes WHERE reference = @reference;
		SELECT 0;
		END;
		COMMIT;
    END TRY
    BEGIN CATCH
        -- En cas d'erreur, annuler la transaction
		SELECT 1;
        ROLLBACK;
    END CATCH;

    -- R�tablir le niveau d'isolation par d�faut
    SET TRANSACTION ISOLATION LEVEL READ COMMITTED;
END;