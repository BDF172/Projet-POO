#include "headerLink.h"

using namespace NS_composants;
using namespace System;

System::Void NS_composants::mappingStats::panierMoyen()
{
	this->request = "EXEC panierMoyen;";
}

System::Void NS_composants::mappingStats::chiffreAffaireMois(int mois)
{
	this->request = "EXEC ChiffreAffaireMois @mois = " + mois + ";";
}

System::Void NS_composants::mappingStats::sousSeuilReapprovisionnement()
{
	this->request = "EXEC sousSeuilReapprovisionnement;";
}

System::Void NS_composants::mappingStats::totalAchatClient(int idCLient)
{
	this->request = "EXECT totalAchatCLient @client = " + idCLient + ";";
}

System::Void NS_composants::mappingStats::moinsVendue()
{
	this->request = "EXEC moinsVendue;";
}

System::Void NS_composants::mappingStats::plusVendue()
{
	this->request = "EXEC plusVendue;";
}

System::Void NS_composants::mappingStats::valeurCommercialeStock(int idStock)
{
	this->request = "EXEC valeurCommercialeStock @stock =" + idStock + ";";
}

System::Void NS_composants::mappingStats::valeurAchatStock(int idStock)
{
	this->request = "EXEC valeurAchatStock @stock =" + idStock + ";";
}
