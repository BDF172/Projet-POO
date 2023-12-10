#include "headerLink.h"

using namespace System;
using namespace NS_composants;

Void mappingClient::creerClient(String^ nom, String^ prenom, String^ naissance, String^ nRue, String^ nomRue, String^ idVille, Boolean f_ou_l) {
	this->request = "EXEC InsererNouveauClientAvecAdresse @Nom = '" + nom
		+ "', @Prenom = '" + prenom + "', @DateNaissance = '" + naissance
		+ "', @NumeroAdresse = " + nRue + ", @NomRue = '" + nomRue + "', @F_ou_L = " + (f_ou_l ? "1" : "0") + ", @IdVille = " + idVille;
	Console::WriteLine(request);
}

Void mappingClient::modifierClient(String^ clientID, String^ nom, String^ prenom, String^ dateNaissance) {
	this->request = "EXEC ModifierClient @IdClient = " + clientID
		+ ", @Nom = '" + nom + "', @Prenom = '" + prenom + "', @DateNaissance = '" + dateNaissance + "';";
	Console::WriteLine(request);
}

Void mappingClient::ajouterAdresse(String^ clientID, String^ nRue, String^ nomRue, String^ idVille, String^ f_ou_l) {
	this->request = "EXEC AjouterAdresseClient @IdClient = " 
		+ clientID + ", @NumeroAdresse = '" + nRue + "', @NomRue = '"
		+ nomRue + "', @IdVille = " + idVille + ", @F_ou_L = " + f_ou_l + ";";
	Console::WriteLine(request);
}

System::Void NS_composants::mappingClient::modifierAdresse(System::String^ adresseID, System::String^ nRue, System::String^ nomRue, System::String^ idVille){
	this->request = "EXEC ModifierAdresse @IdAdresse = " + adresseID + ", @NumeroRue = " + nRue + ",@NomRue = '" + nomRue + "', @IdVille = " + idVille;
}

Void mappingClient::supprimerAdresse(String^ clientID, String^ adresseID){
	this->request = "EXEC SupprimerAdresseClient @IdClient = "
		+ clientID + ", @IdAdresse = " + adresseID +";";
}

Void mappingClient::obtenirClient(String^ clientID) {
	this->request = "EXEC ObtenirClient @IdClient = " + clientID;
}

Void mappingClient::rechercherClients(String^ nom, String^ prenom) {
	this->request = "EXEC RechercherClient @Nom = '" + nom + "', @Prenom = '" + prenom + "';";
}

Void mappingClient::supprimerClient(String^ idClient) {
	this->request = "EXEC SupprimerClient @IdClient = " + idClient;
}