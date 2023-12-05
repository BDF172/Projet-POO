#include "headerLink.h"

using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace NS_composants;
using namespace NS_services;

gestionClient::gestionClient(Void){
	this->clientTableMap = gcnew mappingClient;
}

Int64 gestionClient::createClient(String^ nom, String^ prenom, String^ naissance) {
	this->clientTableMap->creerClient(nom, prenom, naissance);
	DataSet^ result = this->clientTableMap->executeRequest();
	if (!this->verifyErrorCode(result)) {
		return -1;
	}
	else {
		return Convert::ToInt64((result->Tables[1]->Rows[0])[0]);
	}
}