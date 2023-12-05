USE POO;
GO

CREATE PROCEDURE CreerArticle
    @NomArticle VARCHAR(255),
	@PrixArticle INT, 
	@PrctTVA FLOAT, 
	@SeuilReappro INT, 
	@Cout FLOAT

AS
BEGIN
    -- D�clarez une variable pour stocker l'ID de la nouvelle commande
    DECLARE @NouvelArticle INT;

    -- D�but de la transaction avec l'option SERIALIZABLE
    SET TRANSACTION ISOLATION LEVEL SERIALIZABLE;
    BEGIN TRANSACTION;

    BEGIN TRY
        -- Ins�rez le nouveau client dans la table Clients
        INSERT INTO Articles(reference, nom, stock, prixHT, prctTVA, montantTTC, seuil_reappro, cout, nb_vendus)
        VALUES (0, @NomArticle, 0, @PrixArticle, @PrctTVA, @PrixArticle * @PrctTVA, @SeuilReappro, @Cout, 0);
		
		-- R�cup�rez l'ID du nouveau client apr�s la validation de la transaction
        SET @NouvelArticle = SCOPE_IDENTITY();

        -- Valider la transaction
        COMMIT;

		-- S�lectionnez le nouvel ID du client
		SELECT 0;
		SELECT @NouvelArticle AS 'ID de la nouvelle commande';        
    END TRY
    BEGIN CATCH
        -- En cas d'erreur, annuler la transaction
		SELECT 1;
        ROLLBACK;
    END CATCH;

    -- R�tablir le niveau d'isolation par d�faut
    SET TRANSACTION ISOLATION LEVEL READ COMMITTED;
END;