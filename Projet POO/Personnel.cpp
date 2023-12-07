#include "Personnel.h"

NS_composants::Personnel::Personnel()
{
	this->nom = "";
	this->prenom = "";
	this->numeroRue = "";
	this->nomRue = "";
	this->nomVille = "";
	this->nomPays = "";
	this->dateEmbauche = "";
}

void NS_composants::Personnel::setNom(System::String^ nom) { this->nom = nom; }
void NS_composants::Personnel::setPrenom(System::String^ prenom) { this->prenom = prenom; }
void NS_composants::Personnel::setSuperieur(System::String^ superieurID) { this->superieur = superieurID; }
void NS_composants::Personnel::setStatut(System::String^ statut) { this->statut = statut; }
void NS_composants::Personnel::setNumeroRue(System::String^ numeroRue) { this->numeroRue = numeroRue; }
void NS_composants::Personnel::setNomRue(System::String^ nomRue) { this->nomRue = nomRue; }
void NS_composants::Personnel::setNomVille(System::String^ nomVille) { this->nomVille = nomVille; }
void NS_composants::Personnel::setNomPays(System::String^ nomPays) { this->nomPays = nomPays; }
void NS_composants::Personnel::setDateEmbauche(System::String^ dateEmbauche) { this->dateEmbauche = dateEmbauche; }

System::String^ NS_composants::Personnel::getNom() { return this->nom; }
System::String^ NS_composants::Personnel::getPrenom() { return this->prenom; }
System::String^ NS_composants::Personnel::getStatut() { return this->statut; }
System::String^ NS_composants::Personnel::getSuperieur() { return this->superieur; }
System::String^ NS_composants::Personnel::getNumeroRue() { return this->numeroRue; }
System::String^ NS_composants::Personnel::getNomRue() { return this->nomRue; }
System::String^ NS_composants::Personnel::getNomVille() { return this->nomVille; }
System::String^ NS_composants::Personnel::getNomPays() { return this->nomPays; }
System::String^ NS_composants::Personnel::getDateEmbauche() { return this->dateEmbauche; }
