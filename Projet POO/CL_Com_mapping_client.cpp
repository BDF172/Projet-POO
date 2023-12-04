#include "headerLink.h"

using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Collections::Generic;
using namespace NS_composants;

CL_Com_mapping_personnel::CL_Com_mapping_personnel(Void) : CL_Com_mapping() {
	this->whatTables->Add("Client");
	this->mainID = "id_client";
}

System::Void NS_composants::CL_Com_mapping_personnel::setID(System::String^ ID) {
	if (this->whatConditions->Count != 0) this->whatConditions->Clear();
	this->whatConditions->Add("id_client = " + ID);
}

Void CL_Com_mapping_personnel::setNom(String^ nom) {
	this->whatColumns->Add("nom");
	this->whatValues->Add(nom);
}

Void CL_Com_mapping_personnel::setPrenom(String^ prenom) {
	this->whatColumns->Add("prenom");
	this->whatValues->Add(prenom);
}