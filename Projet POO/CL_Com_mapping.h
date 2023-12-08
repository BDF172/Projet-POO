#pragma once

#include "CL_CAD.h"

namespace NS_composants {
	ref class CL_Com_mapping {
	public: 
		CL_Com_mapping(System::Void);
		System::Data::DataSet^ executeRequest(System::Void);

	protected:
		System::String^ request;
		CL_CAD^ accessToBase;
	};
}