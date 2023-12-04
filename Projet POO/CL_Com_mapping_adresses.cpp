#include "headerLink.h"

using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Collections::Generic;
using namespace NS_composants;

CL_Com_mapping_adresses::CL_Com_mapping_adresses(Void) {
	this->mainID = "id_adresse";
	this->whatTables->Add("AdressesC");
}

Void CL_Com_mapping_adresses::setAdresse(String^ toSet) {
	this->whatColumns->Add("adresse");
	this->whatValues->Add(toSet);
}

Void CL_Com_mapping_adresses::setFonctionAdresse(String^ toSet) {
	this->whatColumns->Add("f_ou_l");
	this->whatValues->Add(toSet);
}

Void CL_Com_mapping_adresses::setVilleID(String^ toSet) {
	this->whatColumns->Add("villeID");
	this->whatValues->Add(toSet);
}

Void CL_Com_mapping_adresses::setPersonID(String^ toSet) {
	if (this->whatConditions->Count != 0) this->whatConditions->Clear();
	this->whatConditions->Add("id_adresse = " + toSet);
}