#include "Commande.h"

NS_composants::Commande::Commande()
{
	this->idCommande = 0;
	this->adresseLivraison = "";
	this->adresseFacturation = "";
	this->dateLivraison = "";
	this->paiement = "";
}

System::Void NS_composants::Commande::setIdCommande(int idCommande)
{
	this->idCommande = idCommande;
}

System::Void NS_composants::Commande::setAdresseLivraison(System::String^ adresseLivraison)
{
	this->adresseFacturation = adresseFacturation;
}

System::Void NS_composants::Commande::setAdresseFacturation(System::String^ adresseFacturation)
{
	this->adresseFacturation = adresseFacturation;
}

System::Void NS_composants::Commande::setDateLivraison(System::String^ dateLivraison)
{
	this->dateLivraison = dateLivraison;
}

System::Void NS_composants::Commande::setPaiment(System::String^ paiement)
{
	this->paiement = paiement;
}

int NS_composants::Commande::getIdCommande()
{
	return this->idCommande;
}

System::String^ NS_composants::Commande::getAdresseLivraison()
{
	return this->adresseLivraison;
}

System::String^ NS_composants::Commande::getAdresseFacturation()
{
	return this->adresseFacturation;
}

System::String^ NS_composants::Commande::getDateLivraison()
{
	return this->dateLivraison;
}

System::String^ NS_composants::Commande::getPaiement()
{
	return this->paiement;
}
