#pragma once

#include "mappingArticles.h"

namespace NS_services {
	ref class gestionArticles : public CL_Svc_gestion {
	public:
		gestionArticles(System::Void);
		System::Int64 ajouterArticle(System::String^ nom, System::String^ prix, System::String^ prctTVA,
			System::String^ seuilReappro, System::String^ cout);

		System::Boolean modifierArticle(System::String^ idArticle, System::String^ nom, System::String^ prix,
			System::String^ prctTVA, System::String^ seuilReappro, System::String^ cout, System::String^ stock);

		System::Boolean supprimerArticle(System::String^ idArticle);

	private:
		NS_composants::mappingArticles^ articlesMap;
	};
}