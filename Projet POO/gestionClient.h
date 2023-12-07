#pragma once

namespace NS_services {
	ref class gestionClient : public NS_services::CL_Svc_gestion {
	public:
		gestionClient();
		System::Int64 createClient(System::String^ nom, System::String^ prenom, System::String^ naissance);
		NS_composants::Client^ obtenirClient(System::String^ idClient);
		System::Collections::Generic::List<NS_composants::Client^>^ chercherClients(System::String^ nom, System::String^ prenom);
	private:
		NS_composants::mappingClient^ clientTableMap;
	};
}