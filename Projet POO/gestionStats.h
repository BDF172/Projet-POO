#pragma once

#include "mappingStats.h"
#include "CL_Svc_gestion.h"
#include "Articles.h"
#include "gestionCommandes.h"

namespace NS_services {
	ref class gestionStats : public CL_Svc_gestion {
	public:
		gestionStats(System::Void);

		System::Double CalculerPanierMoyen(System::Void);
		//System::Double ChiffreAffaireMois(System::String^ mois);
		System::Collections::Generic::List<NS_composants::Articles^>^ sousSeuilReappro(System::Void);
		System::Collections::Generic::List<NS_composants::Articles^>^ TopPlusVendus(System::Void);
		System::Collections::Generic::List<NS_composants::Articles^>^ TopMoinsVendus(System::Void);
		//System::Double totalAchatsClient(System::String^ idClient);

	private:
		NS_composants::mappingStats^ mapStats;
	};
}