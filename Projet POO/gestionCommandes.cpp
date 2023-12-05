#include "headerLink.h"

using namespace System;
using namespace System::Data;
using namespace NS_composants;
using namespace NS_services;

gestionCommandes::gestionCommandes(Void) {
	this->commandesTableAccess = gcnew mappingCommandes;
}

Int64 gestionCommandes::creerCommande(String^ idClient, articles articlesChoisis, String^ idAdresseL){
	this->commandesTableAccess->creerCommande(idClient, articlesChoisis, idAdresseL);
	DataSet^ result = this->commandesTableAccess->executeRequest();
	if (this->verifyErrorCode(result)) {
		Console::WriteLine("Ajout de la commande réussi !");
		return Convert::ToInt64(result->Tables[1]->Rows[0][0]);
	}
}