#pragma once

#include "mappingPersonnel.h"
#include "CL_Svc_gestion.h"

namespace NS_services {
	ref class gestionPersonnel : public CL_Svc_gestion {
	public:
		gestionPersonnel(System::Void);

		System::Int64 createPersonnel(System::String^ nom, System::String^ prenom, System::String^ numRue,
			System::String^ nomRue, System::String^ idVille, System::String^ idSuperieur, System::String^ dateEmbauche);

		System::Boolean modifyPersonnel(System::String^ idSuperieur, System::String^ idPersonnel, System::String^ nom, System::String^ prenom,
			System::String^ dateEmbauche);

		System::Boolean modifierAdressePersonnel(System::String^ idPersonnel, System::String^ numRue,
			System::String^ nomRue, System::String^ idVille);
		System::Boolean supprimerPersonnel(System::String^ idPersonnel);

		NS_composants::Personnel^ obtenirPersonnel(System::String^ idPersonnel);
		System::Collections::Generic::List<NS_composants::Personnel^>^ rechercherPersonnel(System::String^ nom, System::String^ prenom);

	private:
		NS_composants::mappingPersonnel^ personnelTableMap;
	};
}