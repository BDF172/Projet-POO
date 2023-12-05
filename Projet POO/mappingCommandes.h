#pragma once

namespace NS_composants {
	typedef struct articles {
		System::Int64 idArticle;
		System::Int64 quantite;
		struct articles* suivant;
	} articles;

	ref class mappingCommandes : public CL_Com_mapping {
	public:
		mappingClient(System::Void);
		System::Void creerCommande(System::String^ idClient, articles articlesChoisis, )
	};
}