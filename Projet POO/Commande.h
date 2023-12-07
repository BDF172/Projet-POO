#pragma once

namespace NS_composants {
	ref class Commande{
	private:
		int idCommande;
		System::String^ reference;
		System::String^ dateEmissionCommande;
		System::String^ dateLivraison;
		System::String^ adresseLivraison;
		System::String^ adresseFacturation;
		int MontantCommande;
		System::String^ datePaiement;
		System::String^ moyenPaiement;
	public:
		Commande();
		System::Void setIdCommande(int idCommande);
		System::Void setReference(System::String^ reference);
		System::Void setDateEmissionCommande(System::String^ date);
		System::Void setAdresseLivraison(System::String^ adresseLivraison);
		System::Void setAdresseFacturation(System::String^ adresseFacturation);
		System::Void setMontantCommande(int montant);
		System::Void setDateLivraison(System::String^ dateLivraison);
		System::Void setDatePaiment(System::String^ datePaiement);
		System::Void setMoyenPaiement(System::String^ moyenPaiment);
		int getIdCommande();
		System::String^ getReference();
		System::String^ getDateEmissionCommande();
		int getMontantCommande();
		System::String^ getAdresseLivraison();
		System::String^ getAdresseFacturation();
		System::String^ getDateLivraison();
		System::String^ getDatePaiement();
		System::String^ getMoyenPaiement();
	};
}
