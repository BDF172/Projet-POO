#pragma once

namespace NS_services {
	ref class gestionCommandes : public CL_Svc_gestion {
	public:
		gestionCommandes(System::Void);
		System::Int64 creerCommande(System::String^ idClient, NS_composants::articles articlesChoisis, System::String^ idAdresseL);
	
	private:
		NS_composants::mappingCommandes^ commandesTableAccess;
	};
}