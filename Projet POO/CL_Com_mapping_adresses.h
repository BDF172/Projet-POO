#pragma once

namespace NS_composants {
	ref class CL_Com_mapping_adresses : public CL_Com_mapping {
	public:
		CL_Com_mapping_adresses();
		System::Void setVilleID(System::String^ toSet);
		System::Void setAdresse(System::String^ toSet);
		System::Void setFonctionAdresse(System::String^ toSet);
		System::Void setPersonID(System::String^ toSet);
	};
}