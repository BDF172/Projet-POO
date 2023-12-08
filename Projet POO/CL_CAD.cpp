#include "headerLink.h"

using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace NS_composants;

CL_CAD::CL_CAD(String^ chaineConnexion) {
	this->connToDB = gcnew SqlConnection;
	this->commSQL = gcnew SqlCommand;
	this->connToDB->ConnectionString = chaineConnexion;
	this->commSQL->Connection = connToDB;
	this->commSQL->CommandType = CommandType::Text;
}

DataSet^ CL_CAD::getRows(String^ sqlRequest) {
	
    DataSet^ toReturn = gcnew DataSet;
    try {
        this->commSQL->CommandText = sqlRequest;
        SqlDataAdapter^ dataAdapter = gcnew SqlDataAdapter(commSQL);
        this->connToDB->Open();
        dataAdapter->Fill(toReturn);
    }
    catch (Exception^ ex){
        Console::WriteLine("Erreur: " + ex->Message);
    }
    finally{
        if (this->connToDB->State == ConnectionState::Open)
            this->connToDB->Close();
    }

	return toReturn;
}

Void CL_CAD::actionRows(String^ sqlRequest) {
    try {
        this->commSQL->CommandText = sqlRequest;
        this->connToDB->Open();
        this->commSQL->ExecuteNonQuery();
    }
    catch (Exception^ ex) {
        Console::WriteLine("Erreur: " + ex->Message);
    }
    finally {
        if (this->connToDB->State == ConnectionState::Open)
            this->connToDB->Close();
     }
}