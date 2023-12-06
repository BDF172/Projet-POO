#include "Personnel.h"

NS_composants::Personnel::Personnel()
{
	this->nom = "";
	this->prenom = "";
	this->adresse = "";
	this->dateEmbauche = "";
}

void NS_composants::Personnel::setNom(System::String^ nom)
{
	this->nom = nom;
}

void NS_composants::Personnel::setPrenom(System::String^ prenom)
{
	this->prenom = prenom;
}

void NS_composants::Personnel::setAdresse(System::String^ adresse)
{
	this->adresse = adresse;
}

void NS_composants::Personnel::setDateEmbauche(System::String^ dateEmbauche)
{
	this->dateEmbauche = dateEmbauche;
}

System::String^ NS_composants::Personnel::getNom()
{
	return this->nom;
}

System::String^ NS_composants::Personnel::getPrenom()
{
	return this->prenom;
}

System::String^ NS_composants::Personnel::getAdresse()
{
	return this->adresse;
}

System::String^ NS_composants::Personnel::getDateEmbauche()
{
	return this->dateEmbauche;
}
