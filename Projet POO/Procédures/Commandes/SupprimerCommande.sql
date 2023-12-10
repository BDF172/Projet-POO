USE POO;
GO

CREATE PROCEDURE SupprimerCommande
    @Reference varchar(20)
AS
BEGIN
    -- Début de la transaction avec l'option SERIALIZABLE
    SET TRANSACTION ISOLATION LEVEL SERIALIZABLE;
    BEGIN TRANSACTION;

    BEGIN TRY
        DECLARE @commandeId INT;
        DECLARE @articleId INT;
        DECLARE @quantite INT;

        -- Récupérer l'ID de la commande que vous allez supprimer
        SET @commandeId = (SELECT id_commandes FROM Commandes WHERE reference_commande = @reference);

        IF @commandeId IS NOT NULL
        BEGIN
            -- Récupérer les informations sur les articles de la commande
            DECLARE articlesCursor CURSOR FOR
            SELECT fr.id_article, fr.quantite
            FROM fait_reference fr
            WHERE fr.id_commandes = @commandeId;

            OPEN articlesCursor;
            FETCH NEXT FROM articlesCursor INTO @articleId, @quantite;

            WHILE @@FETCH_STATUS = 0
            BEGIN
                -- Mettre à jour le stock pour chaque article
                UPDATE stock
                SET quantite_stock = quantite_stock + @quantite
                WHERE id_article = @articleId;

                FETCH NEXT FROM articlesCursor INTO @articleId, @quantite;
            END;

            CLOSE articlesCursor;
            DEALLOCATE articlesCursor;

            -- Supprimer les entrées de la commande dans les tables liées
            DECLARE @ToRefund MONEY;
			SET @ToRefund = (SELECT SUM(montant) FROM Paiements WHERE id_commandes = @commandeId);
			DELETE FROM fait_reference WHERE id_commandes = @commandeId;
            DELETE FROM Paiements WHERE id_commandes = @commandeId;
            DELETE FROM Commandes WHERE id_commandes = @commandeId;

			SELECT 0;
			SELECT ISNULL(@ToRefund, 0);

		END;

        -- Commit la transaction si tout s'est bien déroulé
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