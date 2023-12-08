#pragma once

#include "CL_Com_mapping.h"

namespace NS_composants {
	ref class mappingValeurs : public CL_Com_mapping {
	public:
		System::Void obtenirPays(System::Void);
		System::Void obtenirVilles(System::String^ idPays);
		System::Void obtenirTVA(System::Void);
	};
}