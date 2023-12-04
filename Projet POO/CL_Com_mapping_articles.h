#pragma once

namespace NS_composants {
	ref class CL_Com_mapping_articles : public CL_Com_mapping {
	public:
		CL_Com_mapping_articles();
		System::Void setID();
		System::Void setStock();
		System::Void setNom();
		System::Void setPrix();
		System::Void setReference();
		System::Void setSeuilReap();
		System::Void setTVA();
	};
}