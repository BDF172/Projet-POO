#include "headerLink.h"

using namespace NS_services;
using namespace System;
using namespace System::Data;
using namespace NS_composants;
using namespace System::Collections::Generic;

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

List<NS_composants::articles^>^ NS_services::gestionArticles::rechercherArticle(System::String^ nom){
	this->articlesMap->chercherArticle(nom);
	DataSet^ result = this->articlesMap->executeRequest();
	if (!this->verifyErrorCode(result)) return nullptr;
	if (result->Tables[1]->Rows->Count == 0) return nullptr;
	List<articles^>^ toReturn = gcnew List<articles^>;
	for each (DataRow ^ i in result->Tables[1]->Rows) {
		articles^ toAdd = gcnew articles;
		toAdd->idArticle = Convert::ToString(i[0]);
		toAdd->nom = Convert::ToString(i[1]);
		toAdd->prix = Convert::ToString(i[2]);
		toAdd->quantite = Convert::ToString(i[3]);
		toReturn->Add(toAdd);
	}
	return toReturn;
}

System::Boolean NS_services::gestionArticles::verifierStock(System::String^ idArticle, System::String^ quantite){
	if (verifyEntryUint(idArticle) && verifyEntryUint(quantite)) {
		this->articlesMap->verifierStock(idArticle, quantite);
		return this->verifyErrorCode(this->articlesMap->executeRequest());
	}
	return false;
}

Int64 gestionArticles::ajouterArticle(String^ nom, String^ prix, String^ prctTVA,String^ seuilReappro, String^ cout, String^ stock) {
	this->articlesMap->ajouterArticle(nom, prix, prctTVA, seuilReappro, cout, stock);
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