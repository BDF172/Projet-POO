#pragma once
namespace NS_composants {
	ref class CL_Com_mapping_commandes : public CL_Com_mapping{
	public:
		// A faire : compl�ter les types de param�tres des m�thodes
		CL_Com_mapping_commandes();
		System::Void addArticle();
		System::Void setClient();
		System::Void setDate();
		System::Void addPaiement();
		System::Void operation();
		System::Void setAdresseF();
		System::Void setAdresseL();
	};
 }