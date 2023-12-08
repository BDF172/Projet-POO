#pragma once

namespace NS_composants {
	ref class mappingPersonnel : public CL_Com_mapping{
	public:
		System::Void creerPersonnel(System::String^ nom, System::String^ prenom, System::String^ adresse, 
			System::String^ idSuperieur, System::String^ dateEmbauche);
		System::Void modifierPersonnel(System::String^ idPersonnel, System::String^ nom, System::String^ prenom, 
			System::String^ idSuperieur, System::String^ dateEmbauche);
		System::Void modifierAdresse(System::String^ idPersonnel, System::String^ adresse);
		System::Void supprimerPersonnel(System::String^ personnelID);
		System::Void obtenirPersonnel(System::String^ personnelID);
		System::Void rechercherPersonnel(System::String^ nom, System::String^ prenom);
	};
}