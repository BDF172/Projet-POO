#pragma once

#include "CL_Com_mapping.h"

namespace NS_composants {
	ref class mappingStats : public	CL_Com_mapping {
	public:
		System::Void panierMoyen();
		System::Void chiffreAffaireMois(int mois);
		System::Void sousSeuilReapprovisionnement();
		System::Void totalAchatClient(int idCLient);
		System::Void moinsVendue();
		System::Void plusVendue();
		System::Void valeurCommercialeStock(int idStock);
		System::Void valeurAchatStock(int idStock);
	};
}