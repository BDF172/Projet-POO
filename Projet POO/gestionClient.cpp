#include "headerLink.h"

using namespace System;
using namespace NS_composants;

Int64 createClient(String^ nom, String^ prenom, String^ naissance) {
	String^ request = "EXEC InsereNouveauClient @Nom = '" + nom + "', @Prenom = '" + prenom + "', @DateNaissance = '" + naissance + "'; ";
	Console::WriteLine(request);
	return 1;
}