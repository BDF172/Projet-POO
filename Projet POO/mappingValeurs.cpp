#include "mappingValeurs.h"

using namespace System;
using namespace NS_composants;

Void mappingValeurs::obtenirPays(Void) {
	this->request = "EXEC ObtenirPays;";
}

Void mappingValeurs::obtenirVilles(String^ idPays) {
	this->request = "EXEC ObtenirVilles @IdPays = " + idPays;
}

Void mappingValeurs::obtenirTVA(Void) {
	this->request = "EXEC ObtenirTVA;";
}

System::Void NS_composants::mappingValeurs::obtenirMoyensPaiement(System::Void){
	this->request = "EXEC ObtenirMoyensPaiement;";
}
