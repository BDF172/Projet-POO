#include "headerLink.h"

using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Collections::Generic;
using namespace NS_composants;


CL_Com_mapping_client::CL_Com_mapping_client(void)
{
	this->whatTables->Add("Client");
	this->mainID = "id_client";
}

void CL_Com_mapping_client::SetId(System::String^ toSet)
{
	if (this->whatConditions->Count != 0)
	{
		this->whatConditions->Clear();
	}
	this->whatConditions->Add("id_client = " + toSet);
}

void CL_Com_mapping_client::SetNom(System::String^ toSet)
{
	this->whatColumns->Add("nom");
	this->whatValues->Add(toSet);
}

void CL_Com_mapping_client::setPrenom(System::String^ toSet)
{
	this->whatColumns->Add("prenom");
	this->whatValues->Add(toSet);
}

void CL_Com_mapping_client::SetNaissance(System::String^ toSet)
{
	this->whatColumns->Add("date_naissance");
	this->whatValues->Add("'" + toSet);
}

void CL_Com_mapping_client::setAdresseID(System::String^ toSet)
{
	this->whatColumns->Add("adresseID");
	this->whatValues->Add("#" + toSet);
}