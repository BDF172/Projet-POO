#pragma once

namespace NS_composants {
	ref class CL_Com_mapping_personnel : public CL_Com_mapping {
	public:
		CL_Com_mapping_personnel(System::Void);
		System::Void setID(System::String^ toSet);
		System::Void setNom(System::String^ toSet);
		System::Void setPrenom(System::String^ toSet);
		System::Void setSuperieurID(System::String^ toSet);
		System::Void setDateEmbauche(System::String^ toSet);
		System::Void setAdresseID(System::String^ toSet);
	};
}