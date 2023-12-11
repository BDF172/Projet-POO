USE POO;

CREATE TABLE Clients(
   id_client INT IDENTITY(1,1) NOT NULL,
   nom_client VARCHAR(50),
   prenom_client VARCHAR(50),
   date_naissance DATE,
   PRIMARY KEY(id_client)
);

CREATE TABLE Pays(
   id_pays INT IDENTITY(1,1) NOT NULL,
   nom_pays VARCHAR(50),
   PRIMARY KEY(id_pays)
);

CREATE TABLE Personnel(
   id_personnel INT IDENTITY(1,1) NOT NULL,
   nom_personnel VARCHAR(50),
   prenom_personnel VARCHAR(50),
   date_embauche DATE,
   statut VARCHAR(50),
   id_superieur INT,
   PRIMARY KEY(id_personnel),
   FOREIGN KEY(id_superieur) REFERENCES Personnel(id_personnel)
);

CREATE TABLE Articles(
   id_article INT IDENTITY(1,1) NOT NULL,
   nom_articles VARCHAR(50),
   reference_article VARCHAR(50),
   quantite_vendue INT DEFAULT 0,
   PRIMARY KEY(id_article)
);

CREATE TABLE TVA(
   id_TVA INT IDENTITY(1,1) NOT NULL,
   prctTVA REAL,
   PRIMARY KEY(id_TVA)
);

CREATE TABLE Entrepot(
   Id_Entrepot INT IDENTITY(1,1) NOT NULL,
   nom_entrepot VARCHAR(100),
   PRIMARY KEY(Id_Entrepot)
);

CREATE TABLE Ville(
   id_ville INT IDENTITY(1,1) NOT NULL,
   nom_ville VARCHAR(50),
   codePostal INT,
   id_pays INT NOT NULL,
   PRIMARY KEY(id_ville),
   FOREIGN KEY(id_pays) REFERENCES Pays(id_pays)
);

CREATE TABLE AdressesP(
   id_adresseP INT IDENTITY(1,1) NOT NULL,
   numero_adresse_P INT,
   nom_rue_P VARCHAR(50),
   id_personnel INT NOT NULL,
   id_ville INT NOT NULL,
   PRIMARY KEY(id_adresseP),
   FOREIGN KEY(id_personnel) REFERENCES Personnel(id_personnel),
   FOREIGN KEY(id_ville) REFERENCES Ville(id_ville)
);

CREATE TABLE stock(
   id_stock INT IDENTITY(1,1) NOT NULL,
   seuil_reappro INT,
   quantite_stock INT,
   Id_Entrepot INT NOT NULL,
   id_article INT NOT NULL,
   PRIMARY KEY(id_stock),
   FOREIGN KEY(Id_Entrepot) REFERENCES Entrepot(Id_Entrepot),
   FOREIGN KEY(id_article) REFERENCES Articles(id_article)
);

CREATE TABLE prix(
   id_prix INT IDENTITY(1,1) NOT NULL,
   prix REAL,
   dateAjout DATETIME,
   prixHT REAL,
   cout REAL,
   id_article INT NOT NULL,
   id_TVA INT NOT NULL,
   PRIMARY KEY(id_prix),
   FOREIGN KEY(id_article) REFERENCES Articles(id_article),
   FOREIGN KEY(id_TVA) REFERENCES TVA(id_TVA)
);

CREATE TABLE AdressesC(
   id_adresseC INT IDENTITY(1,1) NOT NULL,
   numero_adresse_C INT NOT NULL,
   nom_rue_C VARCHAR(50),
   f_ou_l BIT,
   is_listed BIT,
   id_ville INT NOT NULL,
   id_client INT NOT NULL,
   PRIMARY KEY(id_adresseC),
   FOREIGN KEY(id_ville) REFERENCES Ville(id_ville),
   FOREIGN KEY(id_client) REFERENCES Clients(id_client)
);

CREATE TABLE Commandes(
   id_commandes INT IDENTITY(1,1) NOT NULL,
   reference_commande VARCHAR(50) NOT NULL,
   date_emission_commande DATETIME,
   date_livraison DATE,
   montant_commande MONEY,
   est_complete BIT DEFAULT 0,
   est_envoyee BIT DEFAULT 0,
   est_rembourse BIT DEFAULT 0,
   a_rembourse BIT DEFAULT 0,
   id_client INT NOT NULL,
   id_adresseL INT NOT NULL,
   id_adresseF INT NOT NULL,
   PRIMARY KEY(id_commandes),
   FOREIGN KEY(id_client) REFERENCES Clients(id_client),
   FOREIGN KEY(id_adresseL) REFERENCES AdressesC(id_adresseC),
   FOREIGN KEY(id_adresseF) REFERENCES AdressesC(id_adresseC)
);

CREATE TABLE fait_reference(
   id_commandes INT,
   id_article INT,
   id_entrepot INT,
   quantite INT,
   FOREIGN KEY(id_commandes) REFERENCES Commandes(id_commandes),
   FOREIGN KEY(id_article) REFERENCES Articles(id_article),
   FOREIGN KEY(id_entrepot) REFERENCES Entrepot(Id_Entrepot)
);

CREATE TABLE Moyens_paiement(
   Id_Moyens_paiement INT IDENTITY(1,1) NOT NULL,
   moyen VARCHAR(50),
   PRIMARY KEY(Id_Moyens_paiement)
);

CREATE TABLE Paiements(
   Id_Paiements INT IDENTITY(1,1) NOT NULL,
   montant MONEY NOT NULL,
   Id_Moyens_paiement INT NOT NULL,
   id_commandes INT NOT NULL,
   PRIMARY KEY(Id_Paiements),
   FOREIGN KEY(Id_Moyens_paiement) REFERENCES Moyens_paiement(Id_Moyens_paiement),
   FOREIGN KEY(id_commandes) REFERENCES Commandes(id_commandes)
);
GO

CREATE PROCEDURE CreerArticle
    @NomArticle VARCHAR(255),
	@PrixArticle MONEY, 
	@IdTva INT,
	@SeuilReappro INT, 
	@Cout MONEY,
	@Stock INT

AS
BEGIN
    -- Déclarez une variable pour stocker l'ID de la nouvelle commande
    DECLARE @NouvelArticle INT;

    -- Début de la transaction avec l'option SERIALIZABLE
    SET TRANSACTION ISOLATION LEVEL SERIALIZABLE;
    BEGIN TRANSACTION;

    BEGIN TRY
        -- Insérez le nouveau client dans la table Clients
        INSERT INTO Articles(nom_articles)
        VALUES (@NomArticle);
		
		-- Récupérez l'ID du nouvel article
        SET @NouvelArticle = SCOPE_IDENTITY();

		INSERT INTO prix (prix, dateAjout, prixHT, cout, id_article, id_TVA)
		VALUES (@PrixArticle, GETDATE(), @PrixArticle, @Cout, @NouvelArticle, @IdTva);

		INSERT INTO stock (seuil_reappro, Id_Entrepot, id_article, quantite_stock)
		VALUES (@SeuilReappro, 1, @NouvelArticle, @Stock);

        -- Valider la transaction
        COMMIT;

		-- Sélectionnez le nouvel ID de l'article
		SELECT 0;
		SELECT @NouvelArticle AS 'ID du nouvel article';        
    END TRY
    BEGIN CATCH
        -- En cas d'erreur, annuler la transaction
		SELECT 1;
        ROLLBACK;
    END CATCH;

    -- Rétablir le niveau d'isolation par défaut
    SET TRANSACTION ISOLATION LEVEL READ COMMITTED;
END;
GO
USE POO;
GO

CREATE PROCEDURE ModifierArticle
    @IdArticle INT,
	@NomArticle VARCHAR(255),
	@PrixArticle INT, 
	@IdTva INT,
	@SeuilReappro INT, 
	@Cout FLOAT,
	@Stock INT

AS
BEGIN

    -- Début de la transaction avec l'option SERIALIZABLE
    SET TRANSACTION ISOLATION LEVEL SERIALIZABLE;
    BEGIN TRANSACTION;

    BEGIN TRY
        IF NOT EXISTS 
		(SELECT 1 FROM Articles WHERE id_article = @IdArticle AND @IdArticle != 1)
			BEGIN
				SELECT 1;
			END;
		ELSE
			BEGIN
				INSERT INTO prix (prix, dateAjout, prixHT, cout, id_article, id_TVA)
					VALUES (@PrixArticle, GETDATE(), @PrixArticle, @Cout, @IdArticle, @IdTva);

				UPDATE Stock SET seuil_reappro = @SeuilReappro, quantite_stock = @Stock WHERE id_article = @IdArticle;
				UPDATE Articles SET nom_articles = @NomArticle WHERE id_article = @IdArticle;
				SELECT 0;
			END;
		COMMIT;
    END TRY
    BEGIN CATCH
	--En cas d'erreur, annuler la transaction
			SELECT 1;
			ROLLBACK;
    END CATCH;

    -- Rétablir le niveau d'isolation par défaut
    SET TRANSACTION ISOLATION LEVEL READ COMMITTED;
END;
GO

CREATE PROCEDURE ObtenirArticle
	@IdArticle INT

AS 
BEGIN
	IF EXISTS(SELECT 1 FROM Articles WHERE id_article = @IdArticle AND @IdArticle != 1)
	BEGIN
		SELECT 0;
		SELECT TOP(1) Articles.id_article, nom_articles, ISNULL((prix * prctTVA) , 0) AS prix
		FROM Articles
		LEFT JOIN Prix ON Articles.id_article = Prix.id_article
		LEFT JOIN TVA ON Prix.id_TVA = TVA.id_TVA
		WHERE Articles.id_article = @IdArticle
		ORDER BY dateAjout DESC;
	END
	ELSE
	BEGIN
		SELECT 1;
	END
END
GO
CREATE PROCEDURE RechercherArticle
    @NomArticle VARCHAR(100)
AS 
BEGIN
	SELECT 0;
    WITH CTE AS (
        SELECT
            Articles.id_article,
            nom_articles,
            prix * prctTVA AS prix,
            quantite_stock,
            ROW_NUMBER() OVER (PARTITION BY Articles.id_article ORDER BY dateAjout DESC) AS RowNum
        FROM Articles 
        LEFT JOIN Prix ON Articles.id_article = Prix.id_article
        LEFT JOIN TVA ON Prix.id_TVA = TVA.id_TVA
        LEFT JOIN Stock ON Articles.id_article = Stock.id_article
        WHERE Articles.nom_articles LIKE '%' + @NomArticle + '%'
		AND Articles.id_article != 1
    )
    SELECT 
        id_article,
        nom_articles,
        prix,
        quantite_stock
    FROM CTE
    WHERE RowNum = 1;
END
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
		(SELECT 1 FROM Articles WHERE id_article = @IdArticle AND @IdArticle != 1)
			BEGIN
				SELECT 1;
			END;
		ELSE
			BEGIN
				UPDATE fait_reference SET id_article = 1 WHERE id_article = @IdArticle;
				DELETE FROM prix WHERE id_article = @IdArticle;
				DELETE FROM stock WHERE id_article = @IdArticle;
				DELETE FROM Articles WHERE id_article = @IdArticle;
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
GO
CREATE PROCEDURE VerifierStock
	@IdArticle INT,
	@Quantite INT

AS
BEGIN
	SELECT ISNULL((SELECT 0 FROM Stock WHERE quantite_stock >= @Quantite AND id_article = @IdArticle AND @IdArticle != 1), 1);
END
GO
CREATE PROCEDURE AjouterAdresseClient
	@IdClient INT,
    @NumeroAdresse INT,
	@NomRue varchar(50),
	@IdVille INT,
	@F_ou_L BIT


AS
BEGIN

    -- Début de la transaction
    BEGIN TRANSACTION;

    BEGIN TRY
        -- Insérez le nouveau client dans la table Clients
		INSERT INTO AdressesC(numero_adresse_C, nom_rue_C, f_ou_l, id_ville, id_client) 
		VALUES (@NumeroAdresse, @NomRue, @F_ou_L, @IdVille, @IdClient);
        -- Valider la transaction
        COMMIT;
		SELECT 0;
    END TRY
    BEGIN CATCH
        -- En cas d'erreur, annuler la transaction
        ROLLBACK;
        -- Vous pouvez gérer l'erreur ici selon vos besoins
    END CATCH;

END;
GO
CREATE PROCEDURE ClientsMailAnniversaire
AS
BEGIN
	SELECT 0;
	SELECT id_client FROM Clients WHERE date_naissance = CAST(DATEADD(DAY, 14, GETDATE()) AS DATE);
END
GO
CREATE PROCEDURE InsererNouveauClientAvecAdresse
    @Nom varchar(50),
    @Prenom varchar(50),
    @DateNaissance date,
	@NumeroAdresse INT,
	@NomRue varchar(100),
	@F_ou_L bit,
	@IdVille int
AS
BEGIN
    -- Déclarez une variable pour stocker l'ID du nouveau client
    DECLARE @NouveauClientID INT;

    -- Début de la transaction avec l'option SERIALIZABLE
    SET TRANSACTION ISOLATION LEVEL SERIALIZABLE;
    BEGIN TRANSACTION;

    BEGIN TRY
        -- Insérez le nouveau client dans la table Clients
        INSERT INTO Clients (nom_client, prenom_client, date_naissance)
        VALUES (@Nom, @Prenom, @DateNaissance);
		
		-- Récupérez l'ID du nouveau client après la validation de la transaction
        SET @NouveauClientID = SCOPE_IDENTITY();

		INSERT INTO AdressesC (numero_adresse_C, nom_rue_C, f_ou_l, id_ville, id_client)
		VALUES(@NumeroAdresse, @NomRue, @F_ou_L, @IdVille, @NouveauClientID);

        -- Valider la transaction
        COMMIT;

		-- Sélectionnez le nouvel ID du client
		SELECT 0;
		SELECT @NouveauClientID AS 'ID du nouveau client';        
    END TRY
    BEGIN CATCH
        -- En cas d'erreur, annuler la transaction
        ROLLBACK;
        SELECT 1;
    END CATCH;

    -- Rétablir le niveau d'isolation par défaut
    SET TRANSACTION ISOLATION LEVEL READ COMMITTED;
END;
GO
CREATE PROCEDURE ModifierAdresse
	@IdAdresse INT,
    @NomRue VARCHAR(100), 
	@NumeroRue INT, 
	@IdVille INT
AS
BEGIN

    -- Début de la transaction
    BEGIN TRANSACTION;

    BEGIN TRY
        -- Insérez le nouveau client dans la table Clients
		IF @IdAdresse = 1 OR @IdAdresse = 2
		BEGIN
			SELECT 1;
		END
		ELSE
		BEGIN
			UPDATE POO.dbo.AdressesC 
			SET nom_rue_C = @NomRue, numero_adresse_C = @NumeroRue, id_ville = @IdVille
			WHERE id_adresseC = @IdAdresse;
			COMMIT;
			SELECT 0;
		END
    END TRY
    BEGIN CATCH
        -- En cas d'erreur, annuler la transaction
        ROLLBACK;
		SELECT 1;
END CATCH;

END;
GO
CREATE PROCEDURE ModifierClient
	@IdClient int,
    @Nom varchar(50),
    @Prenom varchar(50),
    @DateNaissance datetime
AS
BEGIN
    -- Déclarez une variable pour stocker l'ID du nouveau client
    DECLARE @NouveauClientID INT;

    -- Début de la transaction
    BEGIN TRANSACTION;

    BEGIN TRY
		IF @IdClient = 1
		BEGIN
			SELECT 1;
		END
		ELSE
		BEGIN
			-- Insérez le nouveau client dans la table Clients
			IF @Nom != ''
			BEGIN
			UPDATE Clients
			SET nom_client = @Nom WHERE id_client = @IdClient;;
			END
		
			IF @Prenom != ''
			BEGIN
			UPDATE POO.dbo.Clients 
			SET prenom_client = @Prenom WHERE id_client = @IdClient;
			END
		
			IF @DateNaissance != ''
			BEGIN
			UPDATE POO.dbo.Clients 
			SET date_naissance = @DateNaissance WHERE id_client = @IdClient;
			END
		END
        -- Valider la transaction
        COMMIT;
		SELECT 0;
    END TRY
    BEGIN CATCH
        -- En cas d'erreur, annuler la transaction
        ROLLBACK;
		SELECT 1;
    END CATCH;

END;

GO
CREATE PROCEDURE ObtenirClient
	@IdClient INT
AS
BEGIN
	IF NOT EXISTS(SELECT 1 FROM Clients WHERE id_client = @IdClient AND @IdClient != 1)
		BEGIN
			SELECT 1;
		END
	ELSE
		BEGIN
			SELECT 0;

			SELECT nom_client, prenom_client, date_naissance 
			FROM Clients
			WHERE id_client = @IdClient;

			SELECT f_ou_l, numero_adresse_C, nom_rue_C, nom_ville, nom_pays, id_adresseC
			FROM AdressesC
			LEFT JOIN Ville ON AdressesC.id_ville = Ville.id_ville
			LEFT JOIN Pays ON Ville.id_pays = Pays.id_pays
			WHERE id_client = @IdClient;
		END
END
GO
CREATE PROCEDURE RechercherClient
	@Nom VARCHAR(100),
	@Prenom VARCHAR(100)
AS
BEGIN
	SELECT 0;

	SELECT id_client
	FROM Clients
	WHERE nom_client LIKE '%' + @Nom + '%' AND prenom_client LIKE '%' + @Prenom + '%' AND id_client != 1;
END
GO
CREATE PROCEDURE SupprimerAdresseClient
	@IdAdresse int
AS
BEGIN

    -- Début de la transaction
    BEGIN TRANSACTION;

    BEGIN TRY
        -- Insérez le nouveau client dans la table Clients
		IF NOT EXISTS (SELECT 1 FROM AdressesC WHERE id_adresseC = @IdAdresse OR @IdAdresse = 1 OR @IdAdresse = 2)
		BEGIN
			SELECT 1;
		END
		ELSE 
		BEGIN
			UPDATE AdressesC SET is_listed = 0 WHERE id_adresseC = @IdAdresse;
			SELECT 0;
		END
        COMMIT;
    END TRY
    BEGIN CATCH
        -- En cas d'erreur, annuler la transaction
		SELECT 1;
        ROLLBACK;
    END CATCH;

END;
GO
CREATE PROCEDURE SupprimerClient
	@IdClient int
AS
BEGIN

    -- Début de la transaction
    BEGIN TRANSACTION;

    BEGIN TRY
        -- Insérez le nouveau client dans la table Clients
		IF EXISTS(SELECT 1 FROM Clients WHERE id_client = @IdClient AND @IdClient != 1)
		BEGIN
        UPDATE AdressesC SET id_client = 1 WHERE id_client = @IdClient;
		UPDATE Commandes SET id_client = 1 WHERE id_client = @IdClient;
		DELETE FROM Clients WHERE id_client = @IdClient;
        COMMIT;
		SELECT 0;
		END
		ELSE
		BEGIN
		SELECT 1;
		END
    END TRY
    BEGIN CATCH
        -- En cas d'erreur, annuler la transaction
        ROLLBACK;
		SELECT 1;
    END CATCH;

END;
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
		BEGIN TRY
			IF EXISTS (SELECT 1 FROM Stock 
				WHERE id_article = @IdArticle 
				AND Id_Entrepot = @IdEntrepot 
				AND quantite_stock >= @Quantite
				AND id_article != 1)
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
				UPDATE Articles SET quantite_vendue = quantite_vendue + @Quantite;
			END
			ELSE
			BEGIN
				SET @RefCom = (SELECT reference_commande FROM Commandes WHERE id_commandes = @IdCommande);
				EXEC SupprimerCommande @reference = @RefCom;
			END
			COMMIT;
		END TRY
		BEGIN CATCH
			ROLLBACK;
			SET @RefCom = (SELECT reference_commande FROM Commandes WHERE id_commandes = @IdCommande);
			SELECT 1;
			EXEC SupprimerCommande @reference = @RefCom;
		END CATCH
	SET TRANSACTION ISOLATION LEVEL READ COMMITTED;
END
GO
CREATE PROCEDURE CreerCommande
    @IdClientToDeliver int,
	@IdAdresseL int,
	@IdAdresseF INT
AS
BEGIN
    -- Déclarez une variable pour stocker l'ID de la nouvelle commande
    DECLARE @NouvelleCommande INT;

    -- Début de la transaction avec l'option SERIALIZABLE
    SET TRANSACTION ISOLATION LEVEL SERIALIZABLE;
    BEGIN TRANSACTION;

    BEGIN TRY
	IF NOT EXISTS (SELECT 1 FROM AdressesC WHERE id_adresseC = @IdAdresseF AND f_ou_l = 0 OR @IdClientToDeliver = 1)
	BEGIN
		SELECT 1;
	END
	ELSE IF NOT EXISTS (SELECT 1 FROM AdressesC WHERE id_adresseC = @IdAdresseL AND f_ou_l = 1)
	BEGIN
		SELECT 1;
	END
	ELSE 
	BEGIN
        -- Insérez la nouvelle commande
        INSERT INTO Commandes(reference_commande, date_emission_commande, date_livraison, id_adresseL, id_adresseF, id_client)
        VALUES ('', GETDATE(), DATEADD(DAY, 7, GETDATE()), @IdAdresseL, @IdAdresseF, @IdClientToDeliver);
		
		-- Récupérez l'ID du nouveau client après la validation de la transaction
        SET @NouvelleCommande = SCOPE_IDENTITY();

		DECLARE @Reference VARCHAR(20);
		EXEC GenererReferenceCommande @CodeConcatene = @Reference OUTPUT, @IdClient = @IdClientToDeliver, @Increment = @NouvelleCommande;

		UPDATE Commandes SET reference_commande = @Reference WHERE id_commandes = @NouvelleCommande;

		-- Sélectionnez le nouvel ID du client
		SELECT 0;
		SELECT @NouvelleCommande AS 'ID de la nouvelle commande';
	END

	-- Valider la transaction
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
GO
CREATE PROCEDURE FermerCommande
	@IdCommande INT

AS 
BEGIN
	SET TRANSACTION ISOLATION LEVEL SERIALIZABLE;
    BEGIN TRANSACTION;

		BEGIN TRY
			DECLARE @IdClient INT;
			SET @IdClient = (SELECT id_client FROM Commandes WHERE id_commandes = @IdCommande);
			IF NOT EXISTS (
				SELECT 1 FROM Commandes
				WHERE id_commandes = @IdCommande AND ISNULL(est_complete, 0) = 0
			)
			BEGIN
				SELECT 1;
			END
			ELSE
			BEGIN
				UPDATE Commandes SET est_complete = 1
				WHERE id_commandes = @IdCommande;
				IF EXISTS(SELECT 1 FROM Clients WHERE DATEADD(DAY, 14, CAST(GETDATE() AS DATE)) = date_naissance AND id_client = @IdClient)
					BEGIN
						UPDATE Commandes SET montant_commande = 0.85*montant_commande WHERE id_commandes = @IdCommande;
					END
				SELECT 0;
				SELECT reference_commande FROM Commandes WHERE id_commandes = @IdCommande;
			END;
			COMMIT;
		END TRY
		BEGIN CATCH
			SELECT 1;
			ROLLBACK;
		END CATCH

    SET TRANSACTION ISOLATION LEVEL READ COMMITTED;
END
GO
CREATE PROCEDURE ModifierLivraison 
@Reference VARCHAR(20),
@NouvelleDate VARCHAR(20)
AS
BEGIN
	BEGIN TRANSACTION;
	BEGIN TRY
		IF NOT EXISTS 
		(SELECT 1 FROM Commandes WHERE reference_commande = @Reference)
		BEGIN
			SELECT 1;
		END;
		ELSE
		BEGIN
			UPDATE Commandes SET date_livraison = @NouvelleDate WHERE reference_commande = @Reference;
			SELECT 0;
		END;
		COMMIT;
	END TRY
	BEGIN CATCH
		SELECT 1;
		ROLLBACK;
	END CATCH;
END
GO
CREATE PROCEDURE ObtenirFacture
@Reference VARCHAR(20)
AS
BEGIN
    DECLARE @DateCommande DATETIME;
    SET @DateCommande = (SELECT date_emission_commande FROM Commandes WHERE reference_commande = @Reference);
	IF EXISTS (SELECT 1 FROM Commandes WHERE reference_commande = @Reference)
	BEGIN
		SELECT 0;
		WITH CTE AS (
			SELECT
				reference_commande, 
				date_emission_commande, 
				dateAjout,
				date_livraison, 
				montant_commande, 
				ISNULL(est_envoyee, 0) AS est_envoyee, 
				nom_articles, 
				quantite, 
				prixHT, 
				prixHT * quantite AS 'Prix total HT',  
				prixHT * quantite * prctTVA AS 'Prix Total',
				prctTVA,
				ROW_NUMBER() OVER (PARTITION BY Articles.id_article ORDER BY dateAjout DESC) AS RowNum
			FROM fait_reference
			LEFT JOIN Commandes ON Commandes.id_commandes = fait_reference.id_commandes
			LEFT JOIN Articles ON fait_reference.id_article = Articles.id_article
			LEFT JOIN Prix ON Articles.id_article = prix.id_article
			LEFT JOIN TVA ON prix.id_TVA = TVA.id_TVA
			WHERE reference_commande = @Reference AND dateAjout <= @DateCommande
		)
		SELECT
			montant_commande, 
			nom_articles, 
			quantite, 
			prixHT, 
			'Prix total HT' = prixHT * quantite,
			'Prix Total' = prixHT * quantite * prctTVA
		FROM CTE
		WHERE RowNum = 1
		ORDER BY dateAjout DESC;
	END
	ELSE
	BEGIN
		SELECT 1;
	END;
END
GO
CREATE PROCEDURE ObtenirMontantRestant
@Reference VARCHAR(20)
AS
BEGIN
	
	IF NOT EXISTS (SELECT 1 FROM Commandes WHERE reference_commande = @Reference)
	BEGIN
		SELECT 1;
	END
	ELSE
	BEGIN
		DECLARE @IdCommande INT;
		SET @IdCommande = (SELECT id_commandes FROM Commandes WHERE reference_commande = @Reference);
		SELECT 0;
		SELECT (Commandes.montant_commande - (SELECT ISNULL(SUM(Paiements.montant), 0)
			FROM Paiements
			WHERE Paiements.id_commandes = @IdCommande)
		)
		FROM Commandes
		WHERE id_commandes = @IdCommande;
	END
END
GO
CREATE PROCEDURE PayerCommande
@ReferenceCommande VARCHAR(20),
@Montant MONEY,
@IdMoyen INT

AS
BEGIN
	-- Début de la transaction avec l'option SERIALIZABLE
    SET TRANSACTION ISOLATION LEVEL SERIALIZABLE;
    BEGIN TRANSACTION;
	BEGIN TRY
		DECLARE @IdCommande INT;
		SET @IdCommande = (SELECT id_commandes FROM Commandes WHERE reference_commande = @ReferenceCommande);
		IF NOT EXISTS (
			SELECT 1
			FROM Commandes
			LEFT JOIN Paiements ON Commandes.id_commandes = Paiements.id_commandes
			WHERE Commandes.id_commandes = @IdCommande 
			AND (
				SELECT ISNULL(SUM(Paiements.montant), 0) + @Montant
				FROM Paiements
				WHERE Paiements.id_commandes = @IdCommande
			) <= Commandes.montant_commande
		) OR @Montant = 0
		BEGIN
			SELECT 1;
		END
		ELSE 
		BEGIN
			INSERT INTO Paiements (montant, Id_Moyens_paiement, id_commandes)
			VALUES (@Montant, @IdMoyen, @IdCommande);
			EXEC VerifierPaiementCommande @IdCommandeToVerify = @IdCommande;
			SELECT 0;
		END
		COMMIT;
		SET TRANSACTION ISOLATION LEVEL READ COMMITTED;
	END TRY
	BEGIN CATCH
		SELECT 1;
		ROLLBACK
	END CATCH
END
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
				UPDATE Articles SET quantite_vendue = quantite_vendue - @quantite;
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
GO

CREATE PROCEDURE ObtenirMoyensPaiement
AS
BEGIN
	SELECT 0;
	SELECT * FROM Moyens_paiement;
END

GO

CREATE PROCEDURE ObtenirPays
AS
BEGIN
	SELECT 0;
	SELECT id_pays, nom_pays FROM Pays;
END
GO
CREATE PROCEDURE ObtenirTVA
AS
BEGIN
	SELECT 0;
	SELECT * FROM TVA;
END
GO
CREATE PROCEDURE ObtenirVilles
	@IdPays INT

AS 
BEGIN
	SELECT 0;
	SELECT id_ville, nom_ville FROM Ville WHERE id_pays = @IdPays;
END
GO
CREATE PROCEDURE GenererReferenceCommande
    @CodeConcatene VARCHAR(20) OUTPUT,
	@IdClient INT, 
	@Increment NUMERIC
AS
BEGIN
    DECLARE @PremieresLettres1 NVARCHAR(2);
    DECLARE @PremieresLettres2 NVARCHAR(2);
    DECLARE @Annee NVARCHAR(4);

    -- Exemple de valeurs à utiliser (remplacez-les par vos données réelles)
    SELECT @PremieresLettres1 = SUBSTRING(UPPER(nom_client), 1, 2) FROM Clients WHERE id_client = @IdClient;
    SELECT @PremieresLettres2 = SUBSTRING(UPPER(prenom_client), 1, 2) FROM Clients WHERE id_client = @IdClient;
    SELECT @Annee = CONVERT(NVARCHAR(4), YEAR(GetDate()));

    -- Concaténation des valeurs
    SET @CodeConcatene = @PremieresLettres1 + @PremieresLettres2 + @Annee + CONVERT(VARCHAR, @Increment);

    -- Stocker le code généré dans la variable de sortie
    SET @CodeConcatene = @CodeConcatene;
END;
GO

CREATE PROCEDURE ModifierPersonnel
	@IdPersonnel int,
    @Nom varchar(50),
    @Prenom varchar(50),
    @IdSuperieur int
AS
BEGIN
    -- Déclarez une variable pour stocker l'ID du nouveau client
    DECLARE @NouveauClientID INT;

    -- Début de la transaction
    BEGIN TRANSACTION;

    BEGIN TRY
        -- Insérez le nouveau client dans la table Clients
        IF @Nom != ''
		BEGIN
		UPDATE Personnel
        SET nom_personnel = @Nom WHERE id_personnel = @IdPersonnel;
		END
		
		IF @Prenom != ''
		BEGIN
		UPDATE Personnel 
        SET prenom_personnel = @Prenom WHERE id_personnel = @IdPersonnel;
		END
		
		IF @IdSuperieur != ''
		BEGIN
		UPDATE Personnel
        SET id_superieur = @IdSuperieur WHERE id_personnel = @IdPersonnel;
		END
        -- Valider la transaction
        COMMIT;
		SELECT 0;
    END TRY
    BEGIN CATCH
        -- En cas d'erreur, annuler la transaction
        ROLLBACK;
		SELECT 1;
        -- Vous pouvez gérer l'erreur ici selon vos besoins
    END CATCH;

END;
GO
CREATE PROCEDURE InsererNouveauPersonnel
    @Nom varchar(50),
    @Prenom varchar(50),
    @IdSuperieur int,
	@DateEmbauche varchar(50),
	@NumeroRue INT,
	@NomRue VARCHAR(100),
	@IdVille INT
AS
BEGIN
    -- Déclarez une variable pour stocker l'ID du nouveau client
    DECLARE @NouveauPersonnelID INT;

    -- Début de la transaction avec l'option SERIALIZABLE
    SET TRANSACTION ISOLATION LEVEL SERIALIZABLE;
    BEGIN TRANSACTION;

    BEGIN TRY
        -- Insérez le nouveau client dans la table Clients
        INSERT INTO Personnel(nom_personnel, prenom_personnel, date_embauche,id_superieur)
        VALUES (@Nom, @Prenom, @DateEmbauche, @IdSuperieur);
		
		-- Récupérez l'ID du nouveau client après la validation de la transaction
        SET @NouveauPersonnelID = SCOPE_IDENTITY();

		INSERT INTO AdressesP(numero_adresse_P, nom_rue_P, id_ville, id_personnel)
		VALUES(@NumeroRue, @NomRue, @IdVille, @NouveauPersonnelID);

        -- Valider la transaction
        COMMIT;

		-- Sélectionnez le nouvel ID du client
		SELECT 0;
		SELECT @NouveauPersonnelID AS 'ID du nouveau personnel';        
    END TRY
    BEGIN CATCH
        -- En cas d'erreur, annuler la transaction
		SELECT 1;
        ROLLBACK;
    END CATCH;

    -- Rétablir le niveau d'isolation par défaut
    SET TRANSACTION ISOLATION LEVEL READ COMMITTED;
END;

GO
CREATE PROCEDURE ModifierAdressePersonnel
	@IdPersonnel int,
    @NumeroRue INT,
	@NomRue varchar(50),
	@IdVille INT
AS
BEGIN

    -- Début de la transaction
    BEGIN TRANSACTION;

    BEGIN TRY
        -- Insérez le nouveau client dans la table Clients
		IF EXISTS (SELECT 1 FROM AdressesP WHERE id_personnel = @IdPersonnel AND @IdPersonnel != 1)
		BEGIN
        UPDATE AdressesP 
		SET numero_adresse_P = @NumeroRue,
		nom_rue_P = @NomRue,
		id_ville = @IdVille
		WHERE id_personnel = @IdPersonnel;
		END
		ELSE
		BEGIN
		INSERT INTO AdressesP (numero_adresse_P, nom_rue_P, id_ville, id_personnel)
		VALUES (@NumeroRue, @NomRue, @IdVille, @IdPersonnel);
		END
		SELECT 0;
		COMMIT;
    END TRY
    BEGIN CATCH
        -- En cas d'erreur, annuler la transaction
        ROLLBACK;
		SELECT 1;
    END CATCH;
END

GO
CREATE PROCEDURE ObtenirPersonnel
	@IdPersonnel INT
AS
BEGIN
	IF NOT EXISTS(SELECT 1 FROM Personnel WHERE id_personnel = @IdPersonnel AND @IdPersonnel != 1)
	BEGIN
		SELECT 1;
	END
	ELSE
	BEGIN
		SELECT 0;
		SELECT nom_personnel, prenom_personnel, date_embauche, id_superieur, statut, numero_adresse_P, nom_rue_P, nom_ville, nom_pays
		FROM Personnel
		LEFT JOIN AdressesP ON Personnel.id_personnel = AdressesP.id_personnel
		LEFT JOIN Ville ON AdressesP.id_ville = Ville.id_ville
		LEFT JOIN Pays ON Ville.id_pays = Pays.id_pays
		WHERE Personnel.id_personnel = @IdPersonnel;
	END
END

GO
CREATE PROCEDURE RecherchePersonnel
	@Nom VARCHAR(100),
	@Prenom VARCHAR(100)

AS 
BEGIN
	SELECT 0;
	SELECT id_personnel FROM Personnel
	WHERE nom_personnel LIKE '%' + @Nom + '%' 
	AND prenom_personnel LIKE '%' + @Prenom + '%'
	AND id_personnel != 1
END
GO
CREATE PROCEDURE supprimerPersonnel
	@IdPersonnel int
AS
BEGIN

    -- Début de la transaction
    BEGIN TRANSACTION;

    BEGIN TRY
		IF @IdPersonnel = 1
		BEGIN
			SELECT 1;
		END
		ELSE
		BEGIN
			-- Insérez le nouveau client dans la table Clients
			DELETE FROM AdressesP WHERE id_personnel = @IdPersonnel;
			DELETE FROM Personnel WHERE id_personnel = @IdPersonnel;
			COMMIT;
			SELECT 0;
		END
    END TRY
    BEGIN CATCH
        -- En cas d'erreur, annuler la transaction
        ROLLBACK;
		SELECT 1;
    END CATCH;

END;
GO
CREATE PROCEDURE CalculerPanierMoyen
AS
BEGIN
	SELECT 0;
	SELECT ISNULL(AVG(montant_commande), 0) AS panierMoyen
    FROM Commandes;
END;
GO
CREATE PROCEDURE chiffreAffaireMois @date DATE
AS
BEGIN
    SELECT 0;
	SELECT SUM(montant_commande) AS chiffreAffaireMois
    FROM commandes
    WHERE MONTH(date_emission_commande) = MONTH(@date) AND YEAR(date_emission_commande) = YEAR(@date);
END;
GO
CREATE PROCEDURE ObtenirValeurStock
AS
BEGIN
	SELECT 0;
    SELECT 
        ISNULL(SUM(p.prix),0)
    FROM 
        Articles a
    LEFT JOIN 
        (SELECT 
             id_article,
             prix,
             dateAjout,
             ROW_NUMBER() OVER (PARTITION BY id_article ORDER BY dateAjout DESC) AS rn
         FROM 
             prix) p ON a.id_article = p.id_article AND p.rn = 1;
END;
GO
CREATE PROCEDURE SousSeuilReappro
AS
BEGIN
	SELECT 0;
    SELECT Articles.id_article FROM Articles LEFT JOIN stock ON Articles.id_article = stock.id_article
    WHERE quantite_stock <= seuil_reappro AND Articles.id_article != 1;
END
GO
CREATE PROCEDURE TopMoinsVendu
AS
BEGIN
	SELECT 0;
    SELECT TOP(10) id_article FROM Articles
	WHERE id_article != 1
    ORDER BY quantite_vendue ASC
END;
GO
CREATE PROCEDURE TopPlusVendu
AS
BEGIN
	SELECT 0;
    SELECT TOP(10) id_article FROM Articles
	WHERE id_article != 1
    ORDER BY quantite_vendue DESC
END;
GO

INSERT INTO Personnel (nom_personnel, prenom_personnel) VALUES ('AUCUN', 'SUPERIEUR');

INSERT INTO Entrepot (nom_entrepot) VALUES ('FONCTION NON IMPLEMENTEE');
INSERT INTO Articles (nom_articles) VALUES ('Article supprimé');

INSERT INTO Clients (nom_client, prenom_client, date_naissance) 
VALUES ('Client', 'supprimé', '2000-12-12');

INSERT INTO Pays (nom_pays) VALUES ('France');
INSERT INTO Ville (id_pays, nom_ville) VALUES (1, 'Rouen');

INSERT INTO AdressesC (numero_adresse_C, nom_rue_C, id_ville, f_ou_l, id_client)
VALUES (-1, 'Adresse de facutration supprimée', 1, 0, 1);
INSERT INTO AdressesC (numero_adresse_C, nom_rue_C, id_ville, f_ou_l, id_client)
VALUES (-1, 'Adresse de livraison supprimée', 1, 1, 1);

INSERT INTO TVA (prctTVA) VALUES (1.05);
INSERT INTO TVA (prctTVA) VALUES (1.10);
INSERT INTO TVA (prctTVA) VALUES (1.20);

insert into moyens_paiement (moyen) VALUES ('Carte bancaire'),('Espèces');