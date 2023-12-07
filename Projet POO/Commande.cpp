#include "Commande.h"

NS_composants::Commande::Commande()
{
	this->idCommande = 0;
	this->adresseLivraison = "";
	this->adresseFacturation = "";
	this->dateLivraison = "";
	this->datePaiement = "";
}

System::Void NS_composants::Commande::setIdCommande(int idCommande)
{
	this->idCommande = idCommande;
}

System::Void NS_composants::Commande::setReference(System::String^ reference)
{
	return System::Void();
}

System::Void NS_composants::Commande::setDateEmissionCommande(System::String^ date)
{
	this->dateEmissionCommande = date;
}

System::Void NS_composants::Commande::setAdresseLivraison(System::String^ adresseLivraison)
{
	this->adresseFacturation = adresseFacturation;
}

System::Void NS_composants::Commande::setAdresseFacturation(System::String^ adresseFacturation)
{
	this->adresseFacturation = adresseFacturation;
}

System::Void NS_composants::Commande::setMontantCommande(int montant)
{
	this->MontantCommande = montant;
}

System::Void NS_composants::Commande::setDateLivraison(System::String^ dateLivraison)
{
	this->dateLivraison = dateLivraison;
}

System::Void NS_composants::Commande::setDatePaiment(System::String^ datepaiement)
{
	this->datePaiement = datepaiement;
}

System::Void NS_composants::Commande::setMoyenPaiement(System::String^ moyenPaiment)
{
	this->moyenPaiement = moyenPaiement;
}

int NS_composants::Commande::getIdCommande()
{
	return this->idCommande;
}

System::String^ NS_composants::Commande::getReference()
{
	return this->reference;
}

System::String^ NS_composants::Commande::getDateEmissionCommande()
{
	return this->dateEmissionCommande;
}

int NS_composants::Commande::getMontantCommande()
{
	return this->MontantCommande;
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

System::String^ NS_composants::Commande::getDatePaiement()
{
	return this->datePaiement;
}

System::String^ NS_composants::Commande::getMoyenPaiement()
{
	return this->moyenPaiement;
}
