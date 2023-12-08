USE POO;
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
