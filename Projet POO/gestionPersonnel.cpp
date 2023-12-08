#include "headerLink.h"

using namespace System;
using namespace System::Data;
using namespace NS_services;
using namespace NS_composants;
using namespace System::Collections::Generic;

gestionPersonnel::gestionPersonnel(Void) {
	this->personnelTableMap = gcnew mappingPersonnel;
}

System::Int64 NS_services::gestionPersonnel::createPersonnel(String^ nom, String^ prenom, String^ adresse, 
	String^ idSuperieur, String^ dateEmbauche){
	this->personnelTableMap->creerPersonnel(nom, prenom, adresse, idSuperieur, dateEmbauche);
	DataSet^ result = this->personnelTableMap->executeRequest();
	if (!this->verifyErrorCode(result)) {
		return -1;
	}
	else {
		return Convert::ToInt64((result->Tables[1]->Rows[0])[0]);
	}
}

System::Boolean NS_services::gestionPersonnel::modifyPersonnel(String^ idPersonne, String^ nom, String^ prenom,
	String^ idSuperieur, String^ dateEmbauche) {
	this->personnelTableMap->modifierPersonnel(idPersonne, nom, prenom, idSuperieur, dateEmbauche);
	DataSet^ result = this->personnelTableMap->executeRequest();
	return this->verifyErrorCode(result);
}

System::Boolean NS_services::gestionPersonnel::modifierAdressePersonnel(System::String^ idPersonnel, System::String^ Adresse){
	this->personnelTableMap->modifierAdresse(idPersonnel, Adresse);
	DataSet^ result = this->personnelTableMap->executeRequest();
	return this->verifyErrorCode(result);
}

System::Boolean NS_services::gestionPersonnel::supprimerPersonnel(System::String^ idPersonnel) {
	this->personnelTableMap->supprimerPersonnel(idPersonnel);
	DataSet^ result = this->personnelTableMap->executeRequest();
	return this->verifyErrorCode(result);
}

Personnel^ gestionPersonnel::obtenirPersonnel(String^ idPersonnel) {
	this->personnelTableMap->obtenirPersonnel(idPersonnel);
	DataSet^ result = this->personnelTableMap->executeRequest();
	if (!this->verifyErrorCode(result))return nullptr;
	Personnel^ toReturn = gcnew Personnel;
	toReturn->setNom(Convert::ToString(result->Tables[1]->Rows[0][0]));
	toReturn->setPrenom(Convert::ToString(result->Tables[1]->Rows[0][1]));
	toReturn->setDateEmbauche(Convert::ToString(result->Tables[1]->Rows[0][2]));
	toReturn->setSuperieur(Convert::ToString(result->Tables[1]->Rows[0][3]));
	toReturn->setStatut(Convert::ToString(result->Tables[1]->Rows[0][4]));
	toReturn->setNumeroRue(Convert::ToString(result->Tables[1]->Rows[0][5]));
	toReturn->setNomRue(Convert::ToString(result->Tables[1]->Rows[0][6]));
	toReturn->setNomVille(Convert::ToString(result->Tables[1]->Rows[0][7]));
	toReturn->setNomPays(Convert::ToString(result->Tables[1]->Rows[0][8]));
	return toReturn;
}

List<Personnel^>^ gestionPersonnel::rechercherPersonnel(String^ nom, String^ prenom) {
	this->personnelTableMap->rechercherPersonnel(nom, prenom);
	DataSet^ result = this->personnelTableMap->executeRequest();
	if (!this->verifyErrorCode(result))return nullptr;
	List<Personnel^>^ toReturn = gcnew List<Personnel^>;
	for (int i = 0; i < result->Tables[1]->Rows->Count; i++) {
		Personnel^ toAdd = this->obtenirPersonnel(Convert::ToString(result->Tables[1]->Rows[i][0]));
		if (toAdd != nullptr) toReturn->Add(toAdd);
	}
	return toReturn;
}