#pragma once

#include "Articles.h"
#include "gestionArticles.h"
#include "mappingCommandes.h"

namespace NS_services {
	ref class gestionCommandes : public CL_Svc_gestion {
	public:
		gestionCommandes(System::Void);
		System::Int64 creerCommande(System::String^ idClient, NS_composants::articles^ articlesChoisis, System::String^ idAdresseL, System::String^ idAdresseF);
		System::Boolean payerCommande(System::String^ idCommande, System::String^ montant, System::String^ moyen);
		System::Double montantRestant(System::String^ idCommande);
		System::Boolean payerMontantRestant(System::String^ idCommande, String^ moyen);
	
	private:
		NS_composants::mappingCommandes^ commandesTableAccess;
	};
}