#include "headerLink.h"

using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Collections::Generic;
using namespace NS_composants; 

CL_Com_mapping_commandes::CL_Com_mapping_commandes(void) {
	this->whatTables->Add("Commande");
	this->mainID = "id_commande";
}

Void CL_Com_mapping_commandes::addArticle(String^ nom) {
	this->whatColumns->Add("nom_article");
	this->whatValues->Add(nom);
}

Void CL_Com_mapping_commandes::setClient(String^ nom) {
	this->whatColumns->Add("nom_client");
	this->whatValues->Add(nom);
}

Void CL_Com_mapping_commandes::setDate(String^ date) {
	this->whatColumns->Add("date_emission_commande");
	this->whatValues->Add(date);
}

Void CL_Com_mapping_commandes::addPaiement(String^ paiement) {
	this->whatColumns->Add("paiement");
	this->whatValues->Add(paiement);
}

Void CL_Com_mapping_commandes::operation(String^ operation) {
	this->whatColumns->Add("operation");
	this->whatValues->Add(operation);
}

Void CL_Com_mapping_commandes::setAdresseF(String^ adressef) {
	this->whatColumns->Add("adressef");
	this->whatValues->Add(adressef);
}

Void CL_Com_mapping_commandes::setAdresseL(String^ adressel) {
	this->whatColumns->Add("adressel");
	this->whatValues->Add(adressel);
}



