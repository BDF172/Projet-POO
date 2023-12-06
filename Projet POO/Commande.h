#pragma once

namespace NS_composants {
	ref class Commande{
	private:
		int idCommande;
		System::String^ adresseLivraison;
		System::String^ adresseFacturation;
		System::String^ dateLivraison;
		System::String^ paiement;
	public:
		Commande();
		System::Void setIdCommande(int idCommande);
		System::Void setAdresseLivraison(System::String^ adresseLivraison);
		System::Void setAdresseFacturation(System::String^ adresseFacturation);
		System::Void setDateLivraison(System::String^ dateLivraison);
		System::Void setPaiment(System::String^ paiement);
		int getIdCommande();
		System::String^ getAdresseLivraison();
		System::String^ getAdresseFacturation();
		System::String^ getDateLivraison();
		System::String^ getPaiement();
	};
}
