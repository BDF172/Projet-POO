#include "headerLink.h"

using namespace System;
using namespace System::Data;
using namespace NS_composants;

Void mappingPersonnel::creerPersonnel(String^ nom, String^ prenom, String^ adresse, String^ idSuperieur, String^ dateEmbauche) {
	this->request = "EXEC InsererNouveauPersonnel @Nom = '" + nom
		+ "', @Prenom = '" + prenom + "',@IdSuperieur = " + idSuperieur + ", @Adresse = '" + adresse 
		+ "', @DateEmbauche = '" + dateEmbauche + "';";
}

Void mappingPersonnel::modifierPersonnel(String^ idPersonnel, String^ nom, String^ prenom, String^ idSuperieur, String^ dateEmbauche) {
	this->request = "EXEC ModifierPersonnel @IdPersonnel = " + idPersonnel
		+ ", @Nom = '" + nom + "', @Prenom = '" + prenom + "', @IdSuperieur = " + idSuperieur + ";";
}

System::Void NS_composants::mappingPersonnel::modifierAdresse(System::String^ idPersonnel, System::String^ adresse) {
	this->request = "EXEC ModifierAdressePersonnel @IdPersonnel = " + idPersonnel + ", @Adresse = '" + adresse + "';";
}

System::Void NS_composants::mappingPersonnel::supprimerPersonnel(System::String^ idPersonnel) {
	this->request = "EXEC SupprimerPersonnel @IdPersonnel = " + idPersonnel + ";";
}

System::Void mappingPersonnel::obtenirPersonnel(String^ idPersonnel) {
	this->request = "EXEC ObtenirPersonnel @IdPersonnel = " + idPersonnel + ";";
}

System::Void mappingPersonnel::rechercherPersonnel(String^ nom, String^ prenom) {
	this->request = "EXEC RecherchePersonnel @Nom = '"
		+ nom + "', @Prenom = '" + prenom + "';";
}