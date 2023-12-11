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

INSERT INTO Personnel (nom_personnel, prenom_personnel, date_embauche, id_superieur)
VALUES ('TRAGHA', 'Ilias', '2023-12-07', NULL);
INSERT INTO AdressesP (numero_adresse_P, nom_rue_P, id_ville, id_personnel)
VALUES(39, 'Rue de Bammeville', 1, 1);

INSERT INTO TVA (prctTVA) VALUES (1.05);
INSERT INTO TVA (prctTVA) VALUES (1.10);
INSERT INTO TVA (prctTVA) VALUES (1.20);

INSERT INTO historique_tva (prct, date_changement, id_TVA)
VALUES (1.05, GETDATE(), 1);
INSERT INTO historique_tva (prct, date_changement, id_TVA)
VALUES (1.1, GETDATE(), 2);
INSERT INTO historique_tva (prct, date_changement, id_TVA)
VALUES (1.2, GETDATE(), 3);

insert into moyens_paiement (moyen) VALUES ('Carte bancaire'),('Espèces');