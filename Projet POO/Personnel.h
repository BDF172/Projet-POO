#pragma once

namespace NS_composants {
	ref class Personnel {
	private:
		System::String^ nom;
		System::String^ prenom;
		System::String^ adresse;
		System::String^ dateEmbauche;
	public:
		Personnel();
		System::Void setNom(System::String^ nom);
		System::Void setPrenom(System::String^ prenom);
		System::Void setAdresse(System::String^ adresse);
		System::Void setDateEmbauche(System::String^ dateEmbauche);
		System::String^ getNom();
		System::String^ getPrenom();
		System::String^ getAdresse();
		System::String^ getDateEmbauche();
	};
}