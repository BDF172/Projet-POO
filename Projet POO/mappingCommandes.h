#pragma once

namespace NS_composants {
	typedef ref struct articles {
		System::String^ idArticle;
		System::String^ quantite;
		System::String^ nom;
		System::String^ idEntrepot;
		System::String^ prix;
		articles^ suivant;
	} articles;

	ref class mappingCommandes : public CL_Com_mapping {
	public:
		System::Void creerCommande(System::String^ idClient, System::String^ adresseL, System::String^ adresseF);
		System::Void obtenirCommande(System::String^ reference);
		System::Void supprimerCommande(System::String^ referenceCommande);
		System::Void ajouterArticlesCommande(System::String^ idCommande, articles^ articlesToAdd);
		System::Void payerCommande(System::String^ idCommande, System::String^ montant, System::String^ moyen);
		System::Void montantRestant(System::String^ idCommande);
	};
}