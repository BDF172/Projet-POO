#pragma once

namespace NS_composants {
	public ref class Personnel {
	private:
		int id;
		System::String^ nom;
		System::String^ prenom;
		System::String^ superieur;
		System::String^ statut;
		System::String^ numeroRue;
		System::String^ nomRue;
		System::String^ nomVille;
		System::String^ nomPays;
		System::String^ dateEmbauche;
	public:
		Personnel();
		System::Void setId(int id);
		System::Void setNom(System::String^ nom);
		System::Void setPrenom(System::String^ prenom);
		System::Void setStatut(System::String^ statut);
		System::Void setSuperieur(System::String^ superieurID);
		System::Void setNumeroRue(System::String^ adresse);
		System::Void setNomRue(System::String^ adresse);
		System::Void setNomVille(System::String^ adresse);
		System::Void setNomPays(System::String^ adresse);
		System::Void setDateEmbauche(System::String^ dateEmbauche);

		int getId();
		System::String^ getNom();
		System::String^ getPrenom();
		System::String^ getStatut();
		System::String^ getSuperieur();
		System::String^ getNumeroRue();
		System::String^ getNomRue();
		System::String^ getNomVille();
		System::String^ getNomPays();
		System::String^ getDateEmbauche();
	};
}