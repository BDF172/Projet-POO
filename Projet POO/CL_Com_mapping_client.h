#pragma once

namespace NS_composants {
	ref class CL_Com_mapping_client : public CL_Com_mapping {
	public:
		CL_Com_mapping_client(void);
		void SetId(System::String^ toSet);
		void SetNom(System::String^ toSet);
		void setPrenom(System::String^ toSet);
		void SetNaissance(System::String^ toSet);
		void setAdresseID(System::String^ toSet);
	};
}