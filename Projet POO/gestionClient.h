#pragma once

namespace NS_services {
	ref class gestionClient : public NS_services::CL_Svc_gestion {
	public:
		gestionClient();
		System::Int64 createClient(System::String^ nom, System::String^ prenom, System::String^ naissance);
	
	private:
		NS_composants::mappingClient^ clientTableMap;
	};
}