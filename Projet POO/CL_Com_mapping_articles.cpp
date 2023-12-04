#include "headerLink.h"

using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Collections::Generic;
using namespace NS_composants;

CL_Com_mapping_articles::CL_Com_mapping_articles(Void) {
	this->whatTables->Add("Articles");
	this->mainID = "id_article";
}

Void CL_Com_mapping_articles::setID(String^ toSet) {
	if (this->whatConditions->Count != 0) this->whatConditions->Clear();
	this->whatConditions->Add("id_article = " + toSet);
}

Void CL_Com_mapping_articles::setNom(String^ toSet) {
	this->whatColumns->Add("nom");
	this->whatValues->Add(toSet);
}

Void CL_Com_mapping_articles::setPrix(String^ toSet) {
	this->whatColumns->Add("prix");
	this->whatValues->Add("#" + toSet);
}

Void CL_Com_mapping_articles::setReference(String^ toSet) {
	this->whatColumns->Add("reference");
	this->whatValues->Add("'" + toSet);
}

Void CL_Com_mapping_articles::setSeuilReap(String^ toSet) {
	this->whatColumns->Add("seuil_reappro");
	this->whatValues->Add("#" + toSet);
}

Void CL_Com_mapping_articles::setStock(String^ toSet) {
	this->whatColumns->Add("stock");
	this->whatValues->Add("#" + toSet);
}

Void CL_Com_mapping_articles::setTVA(String^ toSet) {
	this->whatColumns->Add("TVA");
	this->whatValues->Add("#" + toSet);
}