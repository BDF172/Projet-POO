#pragma once

namespace NS_Composants {
	ref class CL_Com_mapping_adresses : public NS_composants::CL_Com_mapping {
	public:
		CL_Com_mapping_adresses();
		System::Void setPays(System::String^ toSet);
		System::Void setVille(System::String^ toSet);
		System::Void setAdresse(System::String^ toSet);
		System::Void setFonctionAdresse(System::String^ toSet);
		System::Void setPersonID(System::String^ toSet);
	};
}