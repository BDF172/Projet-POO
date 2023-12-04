#include "headerLink.h"

using namespace System;
using namespace NS_composants;

Int64 gestion_client::createClient(String^ nom, String^ prenom, String^ naissance) {
	if (nom->Length == 0 || prenom->Length == 0 || naissance->Length == 0) throw gcnew Exception("Entree incorrecte");
	String^ request = "EXEC InsereNouveauClient @Nom = '" + nom + "', @Prenom = '" + prenom + "', @DateNaissance = '" + naissance + "'; ";
	Console::WriteLine(request);
	return 1;
}

Int64 gestion_client::createClient(String^ nom, String^ prenom, String^ naissance, String^ adresse) {
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