#include "headerLink.h"

using namespace NS_composants;
using namespace System;

System::Void NS_composants::mappingStats::panierMoyen()
{
	this->request = "EXEC CalculerPanierMoyen;";
}

System::Void NS_composants::mappingStats::chiffreAffaireMois(System::String^ mois)
{
	this->request = "EXEC ChiffreAffaireMois @date = " + mois + ";";
}

System::Void NS_composants::mappingStats::sousSeuilReapprovisionnement()
{
	this->request = "EXEC SousSeuilReappro;";
}

System::Void NS_composants::mappingStats::totalAchatClient(String^ idCLient)
{
	this->request = "EXECT totalAchatCLient @client = " + idCLient + ";";
}

System::Void NS_composants::mappingStats::moinsVendue()
{
	this->request = "EXEC TopMoinsVendu;";
}

System::Void NS_composants::mappingStats::plusVendue()
{
	this->request = "EXEC TopPlusVendu;";
}

System::Void NS_composants::mappingStats::obtenirValeurStock(System::Void){
	this->request = "EXEC ObtenirValeurStock;";
}
