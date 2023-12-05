#pragma once

namespace NS_services {
	ref class gestionArticles : public CL_Svc_gestion {
	public:
		gestionArticles(System::Void);
		System::Int64 ajouterArticle(System::String^ nom, System::String^ prix, System::String^ prctTVA,
			System::String^ seuilReappro, System::String^ cout);

	private:
		NS_composants::mappingArticles^ articlesMap;
	};
}