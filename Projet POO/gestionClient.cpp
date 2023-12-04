#include "headerLink.h"

using namespace System;
using namespace NS_composants;

Int64 gestion_client::creerClient(String^ nom, String^ prenom, String^ naissance) {
	if (nom->Length == 0 || prenom->Length == 0 || naissance->Length == 0) throw gcnew Exception("Entree incorrecte");
	String^ request = "EXEC InsereNouveauClient @Nom = '" + nom + "', @Prenom = '" + prenom + "', @DateNaissance = '" + naissance + "'; ";
	Console::WriteLine(request);
	return 1;
}

Int64 gestion_client::creerClient(String^ nom, String^ prenom, String^ naissance, String^ adresse) {
	if (nom->Length == 0 || prenom->Length == 0 || naissance->Length == 0 || adresse->Length == 0) 
		throw gcnew Exception("Entree incorrecte");
	String^ request = "EXEC InsererNouveauClientAvecAdresse @Nom = '" + nom
		+ "', @Prenom = '" + prenom + "', @DateNaissance = '" + naissance
		+ "', @Adresse = '" + adresse + "'";
	Console::WriteLine(request);
	return 1;
}

Void gestion_client::modifierClient(String^ clientID, String^ nom, String^ prenom, String^ dateNaissance) {
	String^ request = "EXEC ModifierClient @IdClient = " + clientID
		+ ", @Nom = '" + nom + "', @Prenom = '" + prenom + "', @DateNaissance = '" + dateNaissance + "';";
	Console::WriteLine(request);
}

Void gestion_client::ajouterAdresse(String^ clientID, String^ adresse, String^ f_ou_l) {
	String^ request = "EXEC AjouterAdresseClient @IdClient = " 
		+ clientID + ", @Adresse = '" + adresse + "', @Facturation = "
		+ f_ou_l + ";";
	Console::WriteLine(request);
}

Void gestion_client::supprimerAdresse(String^ clientID, String^ adresseID){
	String^ request = "EXEC SupprimerAdresseClient @IdClient = "
		+ clientID + ", @IdAdresse = " + adresseID +";";
	Console::WriteLine(request);
}