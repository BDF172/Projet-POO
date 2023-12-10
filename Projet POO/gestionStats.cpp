#include "gestionStats.h"

using namespace System;
using namespace System::Data;
using namespace NS_services;
using namespace NS_composants;
using namespace System::Collections::Generic;

gestionStats::gestionStats(Void) {
	this->mapStats = gcnew mappingStats;
}

Double gestionStats::CalculerPanierMoyen(Void) {
	this->mapStats->panierMoyen();
	DataSet^ result = this->mapStats->executeRequest();
	if (!verifyErrorCode(result)) return -1;
	try {
		return Convert::ToDouble(result->Tables[1]->Rows[0][0]);
	}
	catch (Exception^ e) {
		Console::WriteLine(e->Data);
		return -1;
	}
}

List<Articles^>^ gestionStats::sousSeuilReappro(Void) {
	this->mapStats->sousSeuilReapprovisionnement();
	DataSet^ result = this->mapStats->executeRequest();
	gestionArticles^ gestionDesArticles = gcnew gestionArticles;
	try {
		List<Articles^>^ toReturn = gcnew List<Articles^>;
		for each (DataRow ^ i in result->Tables[1]->Rows) {
			toReturn->Add(gestionDesArticles->obtenirArticle(Convert::ToString(i[0])));
		}
		return toReturn;
	}
	catch (Exception^ e) {
		Console::WriteLine(e->Data);
		return nullptr;
	}
}

List<Articles^>^ gestionStats::TopPlusVendus(Void) {
	this->mapStats->plusVendue();
	DataSet^ result = this->mapStats->executeRequest();
	gestionArticles^ gestionDesArticles = gcnew gestionArticles;
	try {
		List<Articles^>^ toReturn = gcnew List<Articles^>;
		for each (DataRow ^ i in result->Tables[1]->Rows) {
			toReturn->Add(gestionDesArticles->obtenirArticle(Convert::ToString(i[0])));
		}
		return toReturn;
	}
	catch (Exception^ e) {
		Console::WriteLine(e->Data);
		return nullptr;
	}
}

List<Articles^>^ gestionStats::TopMoinsVendus(Void) {
	this->mapStats->moinsVendue();
	DataSet^ result = this->mapStats->executeRequest();
	gestionArticles^ gestionDesArticles = gcnew gestionArticles;
	try {
		List<Articles^>^ toReturn = gcnew List<Articles^>;
		for each (DataRow ^ i in result->Tables[1]->Rows) {
			toReturn->Add(gestionDesArticles->obtenirArticle(Convert::ToString(i[0])));
		}
		return toReturn;
	}
	catch (Exception^ e) {
		Console::WriteLine(e->Data);
		return nullptr;
	}
}