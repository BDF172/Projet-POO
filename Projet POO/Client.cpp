#include "CLient.h"

using namespace System;
using namespace NS_composants;

Client::Client(){
	this->nom ="";
	this->prenom = "";
	this->naissance = "";
	this->adresse = nullptr;
}

void Client::setID(String^ id) {
	this->id = id;
}

void Client::setNom(String^ nom){
	this->nom = nom;

}

void Client::setPrenom(String^ prenom){
	this->prenom = prenom;

}

void Client::setNaissance(String^ naissance){
	this->naissance = naissance;
}

void Client::setAdresse(adresseClient^ adresse){
	this->adresse = adresse;
}

String^ Client::getID() {
	return this->id;
}

String^ Client::getNom(){
	return this->nom;
}

String^ Client::getPrenom(){
	return this->prenom;
}

String^ Client::getNaissance(){
	return this->naissance;
}

adresseClient^ Client::getAdresse(){
	return this->adresse;
}
