#pragma once
namespace NS_Composants {
	ref class CL_Com_mapping_commandes : public CL_Com_mapping{
	public:
		// A faire : compléter les types de paramètres des méthodes
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