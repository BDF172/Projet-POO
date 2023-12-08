#include "gestionValeurs.h"

using namespace System;
using namespace System::Data;
using namespace NS_services;
using namespace NS_composants;
using namespace System::Collections::Generic;

gestionValeurs::gestionValeurs(Void) {
	this->valeursTableAccess = gcnew mappingValeurs;
}

Dictionary<String^, String^>^ gestionValeurs::obtenirPays(Void) {
	try{
		this->valeursTableAccess->obtenirPays();
		DataSet^ result = this->valeursTableAccess->executeRequest();
		if (!this->verifyErrorCode(result)) return nullptr;
		Dictionary<String^, String^>^ toReturn = gcnew Dictionary<String^, String^>;
		for each (DataRow^ i in result->Tables[1]->Rows) {
			toReturn->Add(i[1]->ToString(), i[0]->ToString());
		}
		return toReturn;
	}
	catch (Exception^ e) {
		Console::WriteLine("Erreur : " + e->Data);
		return nullptr;
	}
}

Dictionary<String^, String^>^ gestionValeurs::obtenirVilles(String^ idPays) {
	try{
		this->valeursTableAccess->obtenirVilles(idPays);
		DataSet^ result = this->valeursTableAccess->executeRequest();
		if (!this->verifyErrorCode(result)) return nullptr;
		Dictionary<String^, String^>^ toReturn = gcnew Dictionary<String^, String^>;
		for each (DataRow ^ i in result->Tables[1]->Rows) {
			toReturn->Add(i[1]->ToString(), i[0]->ToString());
		}
		return toReturn;
	}
	catch (Exception^ e) {
		Console::WriteLine("Erreur : " + e->Data);
		return nullptr;
	}
}

Dictionary<String^, String^>^ gestionValeurs::obtenirTVA(Void) {
	try {
		this->valeursTableAccess->obtenirTVA();
		DataSet^ result = this->valeursTableAccess->executeRequest();
		if (!this->verifyErrorCode(result)) return nullptr;
		Dictionary<String^, String^>^ toReturn = gcnew Dictionary<String^, String^>;
		for each (DataRow ^ i in result->Tables[1]->Rows) {
			Int64 TVA = (static_cast<int>(Math::Round(Convert::ToDouble(i[1]) * 100)) - 100);
			toReturn->Add(TVA.ToString() + "%", i[0]->ToString());
		}
		return toReturn;
	}
	catch(Exception^ e){
		Console::WriteLine("Erreur : " + e->Data);
		return nullptr;
	}
}