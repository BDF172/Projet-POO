#pragma once
namespace NS_composants {
	ref class CL_Com_mapping_commandes : public CL_Com_mapping{
	public:
		// A faire : compl�ter les types de param�tres des m�thodes
		CL_Com_mapping_commandes();
		System::Void addArticle(System::String^ toSet);
		System::Void setClient(System::String^ toSet);
		System::Void setDate(System::String^ toSet);
		System::Void addPaiement(System::String^ toSet);
		System::Void operation(System::String^ toSet);
		System::Void setAdresseF(System::String^ toSet);
		System::Void setAdresseL(System::String^ toSet);
	};
 }