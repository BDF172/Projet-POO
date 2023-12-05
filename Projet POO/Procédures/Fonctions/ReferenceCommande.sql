USE POO;
GO

ALTER PROCEDURE GenererReferenceCommande
    @CodeConcatene VARCHAR(20) OUTPUT,
	@IdClient INT, 
	@Increment NUMERIC
AS
BEGIN
    DECLARE @PremieresLettres1 NVARCHAR(2);
    DECLARE @PremieresLettres2 NVARCHAR(2);
    DECLARE @Annee NVARCHAR(4);

    -- Exemple de valeurs � utiliser (remplacez-les par vos donn�es r�elles)
    SELECT @PremieresLettres1 = SUBSTRING(nom, 1, 2) FROM Clients WHERE id_client = @IdClient;
    SELECT @PremieresLettres2 = SUBSTRING(prenom, 1, 2) FROM Clients WHERE id_client = @IdClient;
    SELECT @Annee = CONVERT(NVARCHAR(4), YEAR(GetDate()));

    -- Concat�nation des valeurs
    SET @CodeConcatene = @PremieresLettres1 + @PremieresLettres2 + @Annee + CONVERT(VARCHAR, @Increment);

    -- Stocker le code g�n�r� dans la variable de sortie
    SET @CodeConcatene = @CodeConcatene;
END;
