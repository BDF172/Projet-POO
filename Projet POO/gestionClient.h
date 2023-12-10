#pragma once

#include "CL_Svc_gestion.h"
#include "mappingClient.h"
#include "Client.h"

namespace NS_services {
	ref class gestionClient : public NS_services::CL_Svc_gestion {
	public:
		gestionClient(System::Void);

		System::Int64 createClient(System::String^ nom, System::String^ prenom, System::String^ naissance,
			System::String^ nRue, System::String^ nomRue, System::String^ idVille, System::Boolean f_ou_l);

		System::Boolean ajouterAdresse(System::String^ idClient, System::String^ nRue, System::String^ nomRue,
			System::String^ idVille, System::Boolean f_ou_l);

		System::Boolean modifierAdresse(System::String^ idAdresse, System::String^ nRue, System::String^ nomRue, System::String^ IdVille);

		NS_composants::Client^ obtenirClient(System::String^ idClient);

		System::Collections::Generic::List<NS_composants::Client^>^ chercherClients(System::String^ nom, System::String^ prenom);

		System::Collections::Generic::List<NS_composants::Client^>^ clientsAnniv(System::Void);
		
		System::Boolean modifierClient(System::String^ idClient, System::String^ nom, 
			System::String^ prenom, System::String^ dateNaissance);
		
		System::Boolean supprimerClient(System::String^);
	private:
		NS_composants::mappingClient^ clientTableMap;
	};
}