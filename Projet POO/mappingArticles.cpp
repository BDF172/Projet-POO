#include "headerLink.h"

using namespace NS_composants;
using namespace System;

Void mappingArticles::obtenirArticle(String^ idArticle) {
	this->request = "EXEC ObtenirArticle @IdArticle = " + idArticle;
}

System::Void NS_composants::mappingArticles::chercherArticle(System::String^ nomArticle){
	this->request = "EXEC RechercherArticle @NomArticle = '" + nomArticle + "';";
}

System::Void NS_composants::mappingArticles::verifierStock(System::String^ idArticle, System::String^ quantite){
	this->request = "EXEC VerifierStock @IdArticle = " + idArticle + ", @Quantite = " + quantite + ";";
	Console::WriteLine(this->request);
}

Void mappingArticles::ajouterArticle(String^ nom, String^ prix, String^ IdTVA, String^ seuilReappro, 
	String^ cout, String^ stock) {
	this->request = "EXEC CreerArticle @NomArticle = '" + nom
		+ "', @PrixArticle = " + prix +
		", @IdTVA = " + IdTVA +
		",@SeuilReappro = " + seuilReappro +
		", @Cout = " + cout + ", @Stock = " + stock + ";";
}

Void mappingArticles::modifierArticle(String^ idArticle, String^ nom, String^ prix,
	String^ IdTVA, String^ seuilReappro, String^ cout, String^ stock) {
	this->request = "EXEC ModifierArticle @IdArticle = " + idArticle + ", @NomArticle = '" + nom
		+ "', @PrixArticle = " + prix + ", @IdTva = " + IdTVA + ", @SeuilReappro = " + seuilReappro
		+ ", @Cout = " + cout + ", @Stock = " + stock;
	Console::WriteLine(this->request);
}

Void mappingArticles::supprimerArticle(String^ idArticle) {
	this->request = "EXEC SupprimerArticle @IdArticle = " + idArticle;
}