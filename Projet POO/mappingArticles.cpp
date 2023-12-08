#include "headerLink.h"

using namespace NS_composants;
using namespace System;

Void mappingArticles::ajouterArticle(String^ nom, String^ prix, String^ IdTVA, String^ seuilReappro, String^ cout) {
	this->request = "EXEC CreerArticle @NomArticle = '" + nom
		+ "', @PrixArticle = " + prix +
		", @IdTVA = " + IdTVA +
		",@SeuilReappro = " + seuilReappro +
		", @Cout = " + cout + ";";
}