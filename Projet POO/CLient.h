#pragma once

using namespace System;

namespace NS_composants {
	typedef ref struct adresseC {
		System::String^ idAdresse;
		System::String^ numeroRue;
		System::String^ nomRue;
		System::String^ nomVille;
		System::Boolean f_ou_l;
		System::String^ nomPays;
		adresseC^ suivant;
	} adresseClient;

	ref class Client {
	private:
		String^ id;
		String^ nom;
		String^ prenom;
		adresseC^ adresse;
		String^ naissance;
	public:
		Client();
		void setID(String^ id);
		void setNom(String^ nom);
		void setPrenom(String^ prenom);
		void setNaissance(String^ naissance);
		void setAdresse(adresseClient^ adresse);
		String^ getID();
		String^ getNom();
		String^ getPrenom();
		String^ getNaissance();
		adresseClient^ getAdresse();
	};
}
