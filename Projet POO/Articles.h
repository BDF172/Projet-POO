#pragma once


using namespace System;

namespace NS_composants {
	ref class Articles {
	private:
		int idArticles;
		String^ nom;
		float prix;
		float cout;
		float tva;

	public:
		Articles();
		void setidArticles(int id);
		void setNom(String^ nom);
		void setCout(float cout);
		void setPrix(float prix);
		void setTva(float tva);
		String^ getNom();
		float getCout();
		int getidArticles();
		float getPrix();
		float getTva();
	};
}

