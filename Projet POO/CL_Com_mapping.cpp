#include "headerLink.h"

using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Collections::Generic;
using namespace NS_composants;
using namespace std;

CL_Com_mapping::CL_Com_mapping(Void) {
	this->whatOrder = "";
	this->whatTables = gcnew List<String^>;
	this->whatConditions = gcnew List<String^>;
	this->whatValuesToInsert = gcnew List<String^>;
	this->whatColumns = gcnew List<String^>;

	/////////////////////////////
	////////////TEST/////////////
	/////////////////////////////

	//this->whatTables->Add("tableTest1");
	//this->whatTables->Add("tableTest2 ON tableTest1.colonneID = tableTest2.colonneID");
	//this->whatColumns->Add("colonne1");
	//this->whatColumns->Add("colonne2");
	//this->whatConditions->Add("colonne1 < colonne2");
	//this->whatOrder = "colonne2 DESC";
	//this->whatValuesToInsert->Add("Value1");
	//this->whatValuesToInsert->Add("Value2");


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

String^ CL_Com_mapping::INSERT(Void){
	// Il faut une table pour insérer les données
	if (whatTables->Count != 1 || this->whatColumns->Count == 0 || this->whatColumns->Count != this->whatValuesToInsert->Count) 
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
	toReturn += this->whatValuesToInsert[0];
	for (int i = 1; i < this->whatValuesToInsert->Count; i++) {
		toReturn += ", " + this->whatValuesToInsert[i];
	}
	toReturn += ")";
	return toReturn;
}