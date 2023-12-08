#pragma once

namespace NS_composants {
	typedef ref struct articles {
		System::Int64 idArticle;
		System::Int64 quantite;
		System::Int64 idEntrepot;
		articles^ suivant;
	} articles;

	ref class mappingCommandes : public CL_Com_mapping {
	public:
		System::Void creerCommande(System::String^ idClient, System::String^ adresseL, System::String^ adresseF);
		System::Void ajouterArticlesCommande(System::String^ idCommande, articles^ articlesToAdd);
		System::Void payerCommande(System::String^ idCommande, System::String^ montant, System::String^ moyen);
		System::Void montantRestant(System::String^ idCommande);
	};
}