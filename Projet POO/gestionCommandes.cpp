#include "headerLink.h"

using namespace System;
using namespace System::Data;
using namespace NS_composants;
using namespace NS_services;

gestionCommandes::gestionCommandes(Void) {
	this->commandesTableAccess = gcnew mappingCommandes;
}

String^ gestionCommandes::creerCommande(String^ idClient, articles^ articlesChoisis, String^ idAdresseL, String^ idAdresseF){
	this->commandesTableAccess->creerCommande(idClient, idAdresseL, idAdresseF);
	DataSet^ result = this->commandesTableAccess->executeRequest();
	if (!this->verifyErrorCode(result)) {
		Console::WriteLine("Erreur adresses");
		return nullptr;
	}
	String^ toReturn = Convert::ToString(result->Tables[1]->Rows[0][0]);
	this->commandesTableAccess->ajouterArticlesCommande(toReturn, articlesChoisis);
	result = this->commandesTableAccess->executeRequest();
	if (!this->verifyErrorCode(result)) return nullptr;
	toReturn = Convert::ToString(result->Tables[1]->Rows[0][0]);
	return toReturn;
}

Boolean gestionCommandes::payerCommande(String^ idCommande, String^ montant, String^ moyen) {
	this->commandesTableAccess->payerCommande(idCommande, montant, moyen);
	DataSet^ result = this->commandesTableAccess->executeRequest();
	return this->verifyErrorCode(result);
}

Double gestionCommandes::montantRestant(String^ idCommande) {
	this->commandesTableAccess->montantRestant(idCommande);
	DataSet^ result = this->commandesTableAccess->executeRequest();
	if (!this->verifyErrorCode(result))return -1;
	return(Convert::ToDouble(result->Tables[1]->Rows[0][0]));
}

Boolean gestionCommandes::payerMontantRestant(String^ idCommande, String^ moyen) {
	this->commandesTableAccess->payerCommande(idCommande, 
		Convert::ToString(this->montantRestant(idCommande))->Replace(",", "."), moyen);
	DataSet^ result = this->commandesTableAccess->executeRequest();
	if (!this->verifyErrorCode(result))return false;
	return true;
}

