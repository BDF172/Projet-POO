#include "headerLink.h"

using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Collections::Generic;
using namespace NS_composants;
using namespace std;

CL_Com_mapping::CL_Com_mapping(Void) {
	this->whatColumnsToInsert = "";
	this->whatOrder = "";
	this->whatTableToSelect = "";
	this->whatToSelect = "";
	this->whatValuesToInsert = "";
	this->whatTablesToJoin = gcnew List<String^>;
	this->whatConditions = gcnew List<String^>;
}

String^ CL_Com_mapping::SELECT(Void) {
	// Il faut au moins 
	if (whatTableToSelect == "") throw gcnew Exception("Requête invalide");
	String^ toReturn = "SELECT ";
	toReturn += this->whatToSelect != "" ? this->whatToSelect : "*";
	toReturn += " FROM " + this->whatTableToSelect;
	for each (String ^ toAdd in this->whatTablesToJoin) toReturn += " LEFT JOIN " + toAdd;
	if (this->whatConditions->Count != 0) {
		toReturn += " WHERE " + this->whatConditions[0];
		for (int i = 1; i < this->whatConditions->Count; i++) 
			toReturn += " AND " + this->whatConditions[i];
	}
	if (this->whatOrder != "") toReturn += " ORDER BY " + this->whatOrder + ";";
	return toReturn;
}