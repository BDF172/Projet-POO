#include "headerLink.h"

using namespace NS_services;
using namespace System;
using namespace System::Data;
using namespace NS_composants;

gestionArticles::gestionArticles(Void) {
	this->articlesMap = gcnew mappingArticles;
}

Int64 gestionArticles::ajouterArticle(String^ nom, String^ prix, String^ prctTVA,String^ seuilReappro, String^ cout) {
	this->articlesMap->ajouterArticle(nom, prix, prctTVA, seuilReappro, cout);
	DataSet^ result = this->articlesMap->executeRequest();
	if (this->verifyErrorCode(result)) {
		Console::WriteLine("Article ajouté sous l'ID " + Convert::ToString(result->Tables[1]->Rows[0][0]));
		return Convert::ToInt64(result->Tables[1]->Rows[0][0]);
	}
	else {
		return -1;
	}
}
