#include "headerLink.h"

using namespace System;
using namespace System::Data;
using namespace NS_services;
using namespace NS_composants;

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