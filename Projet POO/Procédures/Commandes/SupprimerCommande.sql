USE POO;
GO

CREATE PROCEDURE SupprimerCommande
    @reference varchar(20)

AS
BEGIN

    -- Début de la transaction avec l'option SERIALIZABLE
    SET TRANSACTION ISOLATION LEVEL SERIALIZABLE;
    BEGIN TRANSACTION;

    BEGIN TRY
        IF NOT EXISTS 
		(SELECT 1 FROM Commandes WHERE reference_commande = @reference)
		BEGIN
		SELECT 1;
		END;
		ELSE
		BEGIN
		DELETE FROM fait_reference WHERE id_commandes = (SELECT id_commandes FROM Commandes WHERE reference_commande = @reference)
		DELETE FROM Commandes WHERE reference_commande = @reference;
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