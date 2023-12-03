#include "headerLink.h"

using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Collections::Generic;
using namespace NS_composants;

CL_Com_mapping_personnel::CL_Com_mapping_personnel(Void) : CL_Com_mapping() {
	this->whatTables->Add("Personnel");
	this->mainID = "id_personnel";
}

System::Void NS_composants::CL_Com_mapping_personnel::setID(System::String^ ID){
	if (this->whatConditions->Count != 0) this->whatConditions->Clear();
	this->whatConditions->Add("id_personnel = " + ID);
}

Void CL_Com_mapping_personnel::setNom(String^ nom) {
	this->whatColumns->Add("nom");
	this->whatValues->Add(nom);
}

Void CL_Com_mapping_personnel::setPrenom(String^ prenom) {
	this->whatColumns->Add("prenom");
	this->whatValues->Add(prenom);
}

Void CL_Com_mapping_personnel::setSuperieurID(String^ ID) {
	this->whatColumns->Add("superieur");
	this->whatValues->Add("#" + ID);
}

Void CL_Com_mapping_personnel::setDateEmbauche(String^ dateE) {
	this->whatColumns->Add("date_embauche");
	this->whatValues->Add("'" + dateE);
}

Void CL_Com_mapping_personnel::setAdresseID(String^ adresseID) {
	this->whatColumns->Add("adresseID");
	this->whatValues->Add("#" + adresseID);
}