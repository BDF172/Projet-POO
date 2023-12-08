#include "Articles.h"

NS_composants::Articles::Articles()
{
	this->idArticles = 0;
	this->nom = "";
	this->prix = -1.0;
	this->tva = -1.0;
}

void NS_composants::Articles::setidArticles(int id){
	this->idArticles = id;
}

void NS_composants::Articles::setNom(String^ nom)
{
	this->nom = nom;
}

void NS_composants::Articles::setCout(float cout)
{
	this->cout = cout;
}

void NS_composants::Articles::setPrix(float prix)
{
	this->prix = prix;
}

void NS_composants::Articles::setTva(float tva)
{
	this->tva = tva;
}

String^ NS_composants::Articles::getNom()
{
	return this->nom;
}

float NS_composants::Articles::getCout()
{
	return this->cout;
}

int NS_composants::Articles::getidArticles()
{
	return this->idArticles;
}

float NS_composants::Articles::getPrix()
{
	return this->prix;
}

float NS_composants::Articles::getTva()
{
	return this->tva;
}