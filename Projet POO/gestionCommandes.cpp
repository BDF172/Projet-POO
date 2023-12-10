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

System::String^ NS_services::gestionCommandes::obtenirCommande(System::String^ reference){
	this->commandesTableAccess->obtenirCommande(reference);
	DataSet^ result = this->commandesTableAccess->executeRequest();
	if (!verifyErrorCode(result)) return "Aucune commande trouvée";
	try {
		if (result->Tables[1]->Rows->Count == 0) return "Aucun article dans la commande";
		String^ toReturn = "Commande " + reference + " :\n";
		for each (DataRow ^ i in result->Tables[1]->Rows) {
			toReturn += Convert::ToString(i[1]) + "\n\tQuantité : " + Convert::ToString(i[2])
				+ "\n\tPrix HT : " + Convert::ToString(i[4]) + "\n\t" + "Prix TTC : " + Convert::ToString(i[5]) + "\n";
		}
		toReturn += "Montant total : " + result->Tables[1]->Rows[0][0];
		return toReturn;
	}
	catch (Exception^ e) {
		return "Une erreur s'est produite : " + e->Data;
	}
	
}

Boolean gestionCommandes::payerCommande(String^ idCommande, String^ montant, String^ moyen) {
	this->commandesTableAccess->payerCommande(idCommande, montant, moyen);
	DataSet^ result = this->commandesTableAccess->executeRequest();
	return this->verifyErrorCode(result);
}

System::Double NS_services::gestionCommandes::supprimerCommande(System::String^ reference){
	this->commandesTableAccess->supprimerCommande(reference);
	DataSet^ result = this->commandesTableAccess->executeRequest();
	if(!this->verifyErrorCode(result)) return -1;
	try {
		return Convert::ToDouble(result->Tables[1]->Rows[0][0]);
	}
	catch (Exception^ e) {
		return -1;
	}
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

