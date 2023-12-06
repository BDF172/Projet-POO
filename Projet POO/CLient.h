#pragma once

using namespace System;

namespace NS_composants {
	ref class Client {
	private:
		String^ nom;
		String^ prenom;
		String^ adresse;
		String^ naissance;
	public:
		Client();
		void setNom(String^ nom);
		void setPrenom(String^ prenom);
		void setNaissance(String^ naissance);
		void setAdresse(String^ adresse);
		String^ getNom();
		String^ getPrenom();
		String^ getNaissance();
		String^ getAdresse();
	};
}
