#pragma once


using namespace System;

namespace NS_composants {
	ref class Articles {
	private:
		String^ idArticles;
		String^ nom;
		float prix;
		float cout;
		float tva;

	public:
		Articles();
		void setidArticles(String^ id);
		void setNom(String^ nom);
		void setCout(float cout);
		void setPrix(float prix);
		void setTva(float tva);
		String^ getNom();
		float getCout();
		String^ getidArticles();
		float getPrix();
		float getTva();
	};
}

