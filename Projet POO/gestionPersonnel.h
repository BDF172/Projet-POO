#pragma once

namespace NS_services {
	ref class gestionPersonnel : public CL_Svc_gestion {
	public:
		gestionPersonnel(System::Void);

		System::Int64 createPersonnel(System::String^ nom, System::String^ prenom, 
			System::String^ adresse, System::String^ idSuperieur, System::String^ dateEmbauche);

		System::Boolean modifyPersonnel(System::String^ idSuperieur, System::String^ idPersonnel, System::String^ nom, System::String^ prenom,
			System::String^ dateEmbauche);

		System::Boolean modifierAdressePersonnel(System::String^ idPersonnel, System::String^ Adresse);
		System::Boolean supprimerPersonnel(System::String^ idPersonnel);

	private:
		NS_composants::mappingPersonnel^ personnelTableMap;
	};
}