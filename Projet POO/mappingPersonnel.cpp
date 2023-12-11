#include "headerLink.h"

using namespace System;
using namespace System::Data;
using namespace NS_composants;

Void mappingPersonnel::creerPersonnel(String^ nom, String^ prenom, String^ numRue, String^ nomRue, String^ idVille,
	String^ idSuperieur, String^ dateEmbauche) {
	this->request = "EXEC InsererNouveauPersonnel @Nom = '" + nom
		+ "', @Prenom = '" + prenom + "',@IdSuperieur = " + idSuperieur + ", @NumeroRue = " + numRue 
		+ ", @NomRue = '" + nomRue + "', @IdVille = " + idVille + ", @DateEmbauche = '" + dateEmbauche + "';";
	Console::WriteLine(this->request);
}

Void mappingPersonnel::modifierPersonnel(String^ idPersonnel, String^ nom, String^ prenom, String^ idSuperieur, String^ dateEmbauche) {
	this->request = "EXEC ModifierPersonnel @IdPersonnel = " + idPersonnel
		+ ", @Nom = '" + nom + "', @Prenom = '" + prenom + "', @IdSuperieur = " + idSuperieur + ";";
	Console::WriteLine(this->request);
}

System::Void NS_composants::mappingPersonnel::modifierAdresse(System::String^ idPersonnel, System::String^ numRue,
	System::String^ nomRue, System::String^ idVille) {
	this->request = "EXEC ModifierAdressePersonnel @IdPersonnel = " + idPersonnel + ", @NumeroRue = " + numRue 
		+ ", @nomRue = '" + nomRue + "', @IdVille = " + idVille + ";";
	Console::WriteLine(this->request);
}

System::Void NS_composants::mappingPersonnel::supprimerPersonnel(System::String^ idPersonnel) {
	this->request = "EXEC SupprimerPersonnel @IdPersonnel = " + idPersonnel + ";";
	Console::WriteLine(this->request);
}

System::Void mappingPersonnel::obtenirPersonnel(String^ idPersonnel) {
	this->request = "EXEC ObtenirPersonnel @IdPersonnel = " + idPersonnel + ";";
}

System::Void mappingPersonnel::rechercherPersonnel(String^ nom, String^ prenom) {
	this->request = "EXEC RecherchePersonnel @Nom = '"
		+ nom + "', @Prenom = '" + prenom + "';";
}