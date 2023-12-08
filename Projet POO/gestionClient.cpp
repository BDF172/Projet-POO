#include "headerLink.h"

using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Collections::Generic;
using namespace NS_composants;
using namespace NS_services;

gestionClient::gestionClient(Void){
	this->clientTableMap = gcnew mappingClient;
}

Int64 gestionClient::createClient(String^ nom, String^ prenom, String^ naissance, String^ nRue, String^ nomRue, String^ idVille) {
	this->clientTableMap->creerClient(nom, prenom, naissance, nRue, nomRue, idVille);
	DataSet^ result = this->clientTableMap->executeRequest();
	if (!this->verifyErrorCode(result)) {
		return -1;
	}
	else {
		return Convert::ToInt64((result->Tables[1]->Rows[0])[0]);
	}
}

Client^ NS_services::gestionClient::obtenirClient(String^ idClient) {
	this->clientTableMap->obtenirClient(idClient);
	DataSet^ result = this->clientTableMap->executeRequest();
	if (!verifyErrorCode(result)) return nullptr;
	Client^ toReturn = gcnew Client;
	toReturn->setNom(Convert::ToString(result->Tables[1]->Rows[0][0]));
	toReturn->setPrenom(Convert::ToString(result->Tables[1]->Rows[0][1]));
	toReturn->setNaissance(Convert::ToString(result->Tables[1]->Rows[0][2]));
	if(result->Tables[2]->Rows->Count != 0){
		adresseClient^ premiereAdresse = gcnew adresseClient;
		adresseClient^ adresseTemp = premiereAdresse;

		premiereAdresse->f_ou_l = Convert::ToBoolean(result->Tables[2]->Rows[0][0]);
		premiereAdresse->numeroRue = Convert::ToString(result->Tables[2]->Rows[0][1]);
		premiereAdresse->nomRue = Convert::ToString(result->Tables[2]->Rows[0][2]);
		premiereAdresse->nomVille = Convert::ToString(result->Tables[2]->Rows[0][3]);
		premiereAdresse->nomPays = Convert::ToString(result->Tables[2]->Rows[0][4]);

		for (int i = 1; i < result->Tables[2]->Rows->Count; i++) {
			adresseClient^ toAdd = gcnew adresseClient;

			toAdd->f_ou_l = Convert::ToBoolean(result->Tables[2]->Rows[i][0]);
			toAdd->numeroRue = Convert::ToString(result->Tables[2]->Rows[i][1]);
			toAdd->nomRue = Convert::ToString(result->Tables[2]->Rows[i][2]);
			toAdd->nomVille = Convert::ToString(result->Tables[2]->Rows[i][3]);
			toAdd->nomPays = Convert::ToString(result->Tables[2]->Rows[i][4]);

			adresseTemp->suivant = toAdd;
			adresseTemp = toAdd;
		}
		toReturn->setAdresse(premiereAdresse);
	}
	
	return toReturn;
}

List<Client^>^ gestionClient::chercherClients(String^ nom, String^ prenom) {
	this->clientTableMap->rechercherClients(nom, prenom);
	DataSet^ result = this->clientTableMap->executeRequest();
	if (!verifyErrorCode(result)) return nullptr;
	List<Client^>^ toReturn = gcnew List<Client^>;
	for (int i = 0; i < result->Tables[1]->Rows->Count; i++) {
		Client^ toAdd = this->obtenirClient(Convert::ToString(result->Tables[1]->Rows[i][0]));
		if (toAdd != nullptr) toReturn->Add(toAdd);
	}
	return toReturn;
}