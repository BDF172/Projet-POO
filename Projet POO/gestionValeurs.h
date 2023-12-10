#pragma once

#include "CL_Svc_gestion.h"
#include "mappingValeurs.h"

namespace NS_services {
	ref class gestionValeurs : public CL_Svc_gestion {
	public:
		gestionValeurs(System::Void);
		System::Collections::Generic::Dictionary<System::String^, System::String^>^ obtenirPays(System::Void);
		System::Collections::Generic::Dictionary<System::String^, System::String^>^ obtenirVilles(System::String^ idPays);
		System::Collections::Generic::Dictionary<System::String^, System::String^>^ obtenirTVA(System::Void);
		System::Collections::Generic::Dictionary<System::String^, System::String^>^ obtenirMoyensPaiemment(System::Void);

	private:
		NS_composants::mappingValeurs^ valeursTableAccess;
	};
}