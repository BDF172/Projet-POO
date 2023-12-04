#include "headerLink.h"

using namespace System;
using namespace NS_composants;

CL_mappingStats::CL_mappingStats(Void){}

String^ CL_mappingStats::cmdArticlesSousSeuil(Void) {
	return "SELECT id_article FROM Articles WHERE stock < seuil_reappro;";
}

System::String^ NS_composants::CL_mappingStats::cmdChiffreMois(System::String^ mois){
	return "SELECT SUM(montantHTar) FROM Commandes WHERE MONTH(date) = MONTH(" + mois + ");";
}

String^ CL_mappingStats::cmdBestSellers(Void) {
	return "SELECT TOP(10) id_article FROM Articles GROUP BY nb_vendus DESC;";
}

String^ CL_mappingStats::cmdWorstSellers(Void) {
	return "SELECT TOP(10) id_article FROM Articles GROUP BY nb_vendus ASC;";
}

String^ CL_mappingStats::cmdPanierMoyen(Void) {
	String^ first = "SELECT SUM(montantHTar) AS somme FROM Commandes GROUP BY id_commande;";
	return "SELECT AVG(somme) FROM (" + first + ");";
}

String^ CL_mappingStats::cmdTotalAchatsClient(String^ idClient) {
	return "SELECT SUM(montantTTC) FROM Commandes WHERE Clientsid_client = " + idClient + ";";
}