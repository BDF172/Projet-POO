#pragma once

namespace NS_composants {
	ref class CL_Com_mapping_articles : public CL_Com_mapping {
	public:
		CL_Com_mapping_articles();
		System::Void setID(System::String^);
		System::Void setStock(System::String^);
		System::Void setNom(System::String^);
		System::Void setPrix(System::String^);
		System::Void setReference(System::String^);
		System::Void setSeuilReap(System::String^);
		System::Void setTVA(System::String^);
	};
}