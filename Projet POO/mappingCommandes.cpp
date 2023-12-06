#include "headerLink.h"

using namespace System;
using namespace System::Data;
using namespace NS_composants;

System::Void mappingCommandes::creerCommande(String^ idClient, articles articlesChoisis, String^ idAdresseL) {
	this->request = "EXEC CreerCommande @IdClientToDeliver = " + idClient + ", @IdAdresseL = " + idAdresseL + ";";
}