#include "CLient.h"



NS_composants::Client::Client()
{
	this->nom ="";
	this->prenom = "";
	this->naissance = "";
	this->adresse = "";

}

void NS_composants::Client::setNom(String^ nom)
{
	this->nom = nom;

}

void NS_composants::Client::setPrenom(String^ prenom)
{
	this->prenom = prenom;

}

void NS_composants::Client::setNaissance(String^ naissance)
{
	this->naissance = naissance;

}

void NS_composants::Client::setAdresse(String^ adresse)
{
	this->adresse = adresse;
}

String^ NS_composants::Client::getNom()
{
	return this->nom;
}

String^ NS_composants::Client::getPrenom()
{
	return this->prenom;
}

String^ NS_composants::Client::getNaissance()
{
	return this->naissance;
}

String^ NS_composants::Client::getAdresse()
{
	return this->adresse;
}
