#include "headerLink.h"

using namespace System;
using namespace NS_composants;

Void mappingClient::creerClient(String^ nom, String^ prenom, String^ naissance) {
	if (nom->Length == 0 || prenom->Length == 0 || naissance->Length == 0) throw gcnew Exception("Entree incorrecte");
	this->request = "EXEC InsereNouveauClient @Nom = '" + nom + "', @Prenom = '" + prenom + "', @DateNaissance = '" + naissance + "'; ";
	Console::WriteLine(request);
}

Void mappingClient::creerClient(String^ nom, String^ prenom, String^ naissance, String^ adresse) {
	if (nom->Length == 0 || prenom->Length == 0 || naissance->Length == 0 || adresse->Length == 0) 
		throw gcnew Exception("Entree incorrecte");
	this->request = "EXEC InsererNouveauClientAvecAdresse @Nom = '" + nom
		+ "', @Prenom = '" + prenom + "', @DateNaissance = '" + naissance
		+ "', @Adresse = '" + adresse + "'";
	Console::WriteLine(request);
}

Void mappingClient::modifierClient(String^ clientID, String^ nom, String^ prenom, String^ dateNaissance) {
	this->request = "EXEC ModifierClient @IdClient = " + clientID
		+ ", @Nom = '" + nom + "', @Prenom = '" + prenom + "', @DateNaissance = '" + dateNaissance + "';";
	Console::WriteLine(request);
}

Void mappingClient::ajouterAdresse(String^ clientID, String^ adresse, String^ f_ou_l) {
	this->request = "EXEC AjouterAdresseClient @IdClient = " 
		+ clientID + ", @Adresse = '" + adresse + "', @Facturation = "
		+ f_ou_l + ";";
	Console::WriteLine(request);
}

Void mappingClient::supprimerAdresse(String^ clientID, String^ adresseID){
	this->request = "EXEC SupprimerAdresseClient @IdClient = "
		+ clientID + ", @IdAdresse = " + adresseID +";";
	Console::WriteLine(request);
}

Void mappingClient::obtenirClient(String^ clientID) {
	this->request = "EXEC ObtenirClient @IdClient = " + clientID;
}

Void mappingClient::rechercherClients(String^ nom, String^ prenom) {
	this->request = "EXEC RechercherClient @Nom = '" + nom + "', @Prenom = '" + prenom + "';";
}