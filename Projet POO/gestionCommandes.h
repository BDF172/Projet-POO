#pragma once

#include "Articles.h"
#include "gestionArticles.h"
#include "mappingCommandes.h"

namespace NS_services {
	ref class gestionCommandes : public CL_Svc_gestion {
	public:
		gestionCommandes(System::Void);
		System::String^ creerCommande(System::String^ idClient, NS_composants::articles^ articlesChoisis, System::String^ idAdresseL, System::String^ idAdresseF);
		System::String^ obtenirCommande(System::String^ reference);
		System::Boolean payerCommande(System::String^ referenceCommande, System::String^ montant, System::String^ moyen);
		System::Double supprimerCommande(System::String^ reference);
		System::Double montantRestant(System::String^ referenceCommande);
		System::Boolean payerMontantRestant(System::String^ idCommande, String^ moyen);
	
	private:
		NS_composants::mappingCommandes^ commandesTableAccess;
	};
}