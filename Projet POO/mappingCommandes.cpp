#include "headerLink.h"

using namespace System;
using namespace System::Data;
using namespace NS_composants;

System::Void mappingCommandes::creerCommande(String^ idClient, String^ idAdresseL, String^ idAdresseF) {
	this->request = "EXEC CreerCommande @IdClientToDeliver = " + idClient + ", @IdAdresseL = " + idAdresseL 
		+ ", @IdAdresseF = " + idAdresseF + ";";
	Console::WriteLine(this->request);
}

System::Void NS_composants::mappingCommandes::supprimerCommande(System::String^ referenceCommande){
	this->request = "EXEC SupprimerCommande @Reference = '" + referenceCommande + "';";
}

System::Void mappingCommandes::ajouterArticlesCommande(String^ idCommande, articles^ articlesToAdd) {
	this->request = "";
	while (articlesToAdd != nullptr) {
		this->request += "EXEC AjouterArticleCommande @IdCommande = " + idCommande
			+ ", @IdArticle = " + articlesToAdd->idArticle + ", @Quantite = "
			+ articlesToAdd->quantite + ", @IdEntrepot = " + articlesToAdd->idEntrepot
			+ "; ";
		articlesToAdd = articlesToAdd->suivant;
	}
	this->request += "EXEC FermerCommande @IdCommande = " + idCommande;
	Console::WriteLine(this->request);
}

Void mappingCommandes::payerCommande(String^ idCommande, String^ montant, String^ moyen) {
	this->request = "EXEC PayerCommande @IdCommande = " + idCommande
		+ ", @Montant = " + montant + ", @IdMoyen = " + moyen;
	Console::WriteLine(this->request);
}

Void mappingCommandes::montantRestant(String^ idCommande) {
	this->request = "EXEC ObtenirMontantRestant @IdCommande = " + idCommande;
}

Void mappingCommandes::obtenirCommande(String^ reference) {
	this->request = "EXEC ObtenirFacture @Reference = '" + reference + "';";
	Console::WriteLine(this->request);
}