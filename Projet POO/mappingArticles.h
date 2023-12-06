#pragma once

namespace NS_composants{
	ref class mappingArticles : public CL_Com_mapping {
	public:
		System::Void ajouterArticle(System::String^ nom, System::String^ prix, System::String^ prctTVA,
			System::String^ seuilReappro, System::String^ cout);
};
}