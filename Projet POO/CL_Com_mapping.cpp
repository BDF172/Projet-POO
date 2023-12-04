#include "headerLink.h"

using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Collections::Generic;
using namespace NS_composants;
using namespace std;

CL_Com_mapping::CL_Com_mapping(Void) {
	this->RESETREQUEST();

	/////////////////////////////
	////////////TEST/////////////
	/////////////////////////////

	//this->whatTables->Add("tableTest1");
	//this->whatTables->Add("tableTest2 ON tableTest1.colonneID = tableTest2.colonneID");
	//this->whatColumns->Add("colonne1");
	//this->whatColumns->Add("colonne2");
	//this->whatConditions->Add("colonne1 < colonne2");
	//this->whatOrder = "colonne2 DESC";
	//this->whatValues->Add("Value1");
	//this->whatValues->Add("Value2");

	/////////////////////////////
	////////////TEST/////////////
	/////////////////////////////
}

String^ CL_Com_mapping::SELECT(Void) {
	// Il faut au moins une table à sélectionner
	if (whatTables->Count == 0) throw gcnew Exception("Requête invalide");
	String^ toReturn = "SELECT ";
	
	// Ajout de la selction des colonnes, si aucune n'est sélectionnée, on les choisit toutes
	if (this->whatColumns->Count == 0) {
		toReturn += "*";
	}
	else {
		toReturn += this->whatColumns[0];
		for (int i = 1; i < this->whatColumns->Count; i++) {
			toReturn += ", " + this->whatColumns[i];
		}
	}
	toReturn += " FROM " + this->whatTables[0];
	
	// Ajout non nécessaire des jointures
	for (int i = 1; i < this->whatTables->Count; i++) toReturn += " LEFT JOIN " + this->whatTables[i];
	if (this->whatConditions->Count != 0) {
		toReturn += " WHERE " + this->whatConditions[0];
		for (int i = 1; i < this->whatConditions->Count; i++)
			toReturn += " AND " + this->whatConditions[i];
	}
	
	// Ajout non nécessaire d'un ordre
	if (this->whatOrder != "") toReturn += " ORDER BY " + this->whatOrder + ";";
	return toReturn;
}

String^ CL_Com_mapping::SEARCH(Void) {
	// Il faut au moins une table à sélectionner
	if (whatTables->Count == 0 || (whatColumns->Count != whatValues->Count)) 
		throw gcnew Exception("Requête invalide");
	String^ toReturn = "SELECT " + this->mainID;

	toReturn += " FROM " + this->whatTables[0];

	// Ajout non nécessaire des jointures
	for (int i = 1; i < this->whatTables->Count; i++) toReturn += " LEFT JOIN " + this->whatTables[i];
	
	List<String^>^ conditions = gcnew List<String^>;
	for (int i = 0; i < this->whatConditions->Count; i++)
		conditions->Add(this->whatConditions[i]);
	for (int i = 0; i < this->whatValues->Count; i++)
		if (whatValues[i]->StartsWith("#"))
			conditions->Add(this->whatColumns[i] + " = " + this->whatValues[i]->Substring(1, this->whatValues[i]->Length-1));
		else if (whatValues[i]->StartsWith("'"))
			conditions->Add(this->whatColumns[i] + " = '" + this->whatValues[i]->Substring(1, this->whatValues[i]->Length - 1) + "'");
		else
			conditions->Add(this->whatColumns[i] + " LIKE '%" + this->whatValues[i] + "%'");

	if (conditions->Count != 0) {
		toReturn += " WHERE " + conditions[0];
		for (int i = 1; i < conditions->Count; i++) toReturn += " AND " + conditions[i];
	}

	// Ajout non nécessaire d'un ordre
	if (this->whatOrder != "") toReturn += " ORDER BY " + this->whatOrder + ";";
	return toReturn;
}

String^ CL_Com_mapping::INSERT(Void){
	// Il faut une table pour insérer les données
	if (whatTables->Count != 1 || this->whatColumns->Count == 0 || this->whatColumns->Count != this->whatValues->Count) 
		throw gcnew Exception("Requête invalide");
	String^ toReturn = "INSERT INTO " + whatTables[0];

	// Ajout de la sélection de colonnes
	toReturn += "  (" + this->whatColumns[0];
	for (int i = 1; i < this->whatColumns->Count; i++) {
		toReturn += ", " + this->whatColumns[i];
	}
	toReturn += ")";

	// Ajout des valeurs à insérer
	toReturn += " VALUES (";
	List<String^>^ values = gcnew List<String^>;
	for (int i = 0; i < this->whatValues->Count; i++)
		if (whatValues[i]->StartsWith("#"))
			values->Add(this->whatValues[i]->Substring(1, this->whatValues[i]->Length - 1));
		else if (whatValues[i]->StartsWith("'"))
			values->Add("'" + this->whatValues[i]->Substring(1, this->whatValues[i]->Length - 1) + "'");
		else
			values->Add("'" + this->whatValues[i] + "'");
	toReturn += values[0];
	for (int i = 1; i < values->Count; i++) {
		toReturn += ", " + values[i];
	}
	toReturn += ");";
	return toReturn;
}

String^ CL_Com_mapping::DELETE(Void) {
	// Il faut une table pour insérer les données
	if (whatTables->Count != 1 || this->whatConditions->Count == 0)
		throw gcnew Exception("Requête invalide");
	String^ toReturn = "DELETE FROM " + whatTables[0];

	// Ajout des conditions
	toReturn += " WHERE ";

	toReturn += this->whatConditions[0];
	for (int i = 1; i < this->whatConditions->Count; i++) {
		toReturn += " AND " + this->whatConditions[i];
	}
	toReturn += ";";
	return toReturn;
}

Void CL_Com_mapping::RESETREQUEST(Void) {
	// Toutes les valeurs sont réinitialisées
	this->whatOrder = "";
	this->whatTables = gcnew List<String^>;
	this->whatConditions = gcnew List<String^>;
	this->whatValues = gcnew List<String^>;
	this->whatColumns = gcnew List<String^>;
}

String^ CL_Com_mapping::UPDATE(Void) {
	// Il faut une table pour insérer les données
	if (whatTables->Count != 1 || this->whatColumns->Count == 0 || 
		this->whatColumns->Count != this->whatValues->Count ||
		this->whatConditions->Count == 0)
		throw gcnew Exception("Requête invalide");
	String^ toReturn = "UPDATE " + whatTables[0];

	// Ajout des modifications
	toReturn += " SET " + this->whatColumns[0] + " = " + (this->whatValues[0]->StartsWith("#") 
		? this->whatValues[0]->Substring(1, this->whatValues[0]->Length - 1) 
		: (this->whatValues[0]->StartsWith("'") 
			? "'"+ this->whatValues[0]->Substring(1, this->whatValues[0]->Length - 1) + "'"
			: "'" + this->whatValues[0]) + "'");
	for (int i = 1; i < this->whatColumns->Count; i++) {
		toReturn += ", " + this->whatColumns[i] + " = " + (this->whatValues[i]->StartsWith("#")
			? this->whatValues[i]->Substring(1, this->whatValues[i]->Length - 1)
			: (this->whatValues[i]->StartsWith("'")
				? "'" + this->whatValues[i]->Substring(1, this->whatValues[i]->Length - 1) + "'"
				: "'" + this->whatValues[i]) + "'");
	}
	
	// Ajout des conditions
	toReturn += " WHERE ";
	toReturn += whatConditions[0];
	for (int i = 1; i < whatConditions->Count; i++) {
		toReturn += " AND " + whatConditions[i];
	}
	toReturn += ";";
	return toReturn;
}