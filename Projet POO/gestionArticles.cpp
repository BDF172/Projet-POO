#include "headerLink.h"

using namespace NS_services;
using namespace System;
using namespace System::Data;
using namespace NS_composants;

gestionArticles::gestionArticles(Void) {
	this->articlesMap = gcnew mappingArticles;
}

Articles^ gestionArticles::obtenirArticle(String^ idArticle) {
	this->articlesMap->obtenirArticle(idArticle);
	DataSet^ result = this->articlesMap->executeRequest();
	if (!this->verifyErrorCode(result)) return nullptr;
	try {
		Articles^ articleToReturn = gcnew Articles;
		DataRow^ ligneResultat = result->Tables[1]->Rows[0];
		articleToReturn->setidArticles(Convert::ToString(ligneResultat[0]));
		articleToReturn->setNom(Convert::ToString(ligneResultat[1]));
		articleToReturn->setPrix(Convert::ToDouble(ligneResultat[2]));
		return articleToReturn;
	}
	catch (Exception^ e) {
		Console::WriteLine("Erreur : " + e->Data);
		return nullptr;
	}
}

Int64 gestionArticles::ajouterArticle(String^ nom, String^ prix, String^ prctTVA,String^ seuilReappro, String^ cout) {
	this->articlesMap->ajouterArticle(nom, prix, prctTVA, seuilReappro, cout, "1");
	DataSet^ result = this->articlesMap->executeRequest();
	if (this->verifyErrorCode(result)) {
		Console::WriteLine("Article ajouté sous l'ID " + Convert::ToString(result->Tables[1]->Rows[0][0]));
		return Convert::ToInt64(result->Tables[1]->Rows[0][0]);
	}
	else {
		return -1;
	}
}

Boolean gestionArticles::modifierArticle(String^ idArticle, String^ nom, String^ prix, String^ prctTVA, 
	String^ seuilReappro, String^ cout, String^ stock) {
	this->articlesMap->modifierArticle(idArticle, nom, prix, prctTVA, seuilReappro, cout, "0");
	return this->verifyErrorCode(this->articlesMap->executeRequest());
}

Boolean gestionArticles::supprimerArticle(String^ idArticle) {
	this->articlesMap->supprimerArticle(idArticle);
	return this->verifyErrorCode(this->articlesMap->executeRequest());
}