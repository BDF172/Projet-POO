#pragma once

#include "CL_Com_mapping.h"

namespace NS_composants {
	ref class mappingStats : public	CL_Com_mapping {
	public:
		System::Void panierMoyen();
		System::Void chiffreAffaireMois(System::String^ mois);
		System::Void sousSeuilReapprovisionnement();
		System::Void totalAchatClient(System::String^ idCLient);
		System::Void moinsVendue();
		System::Void plusVendue();
		System::Void obtenirValeurStock(System::Void);
	};
}