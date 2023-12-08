#include "headerLink.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace NS_composants;
using namespace NS_services;
using namespace System::Collections::Generic;

System::Void PageMainJerem(Void) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	ProjetPOO2::MyForm page;
	Application::Run(% page);

	gestionArticles gestion;
	Console::WriteLine(gestion.ajouterArticle("Article 1", "13.99", "0.2", "100", "3.46"));
}

System::Void PageMainIlias(Void) {
	gestionPersonnel gestion;
	Personnel^ personnel = gestion.obtenirPersonnel("1");
	Console::WriteLine("Personnel : " + personnel->getNom() + " "
		+ personnel->getPrenom() + ", habite au " + personnel->getNumeroRue()
		+ " " + personnel->getNomRue() + ", " + personnel->getNomVille() + ", "
		+ personnel->getNomPays());
}

System::Void TestRecherche(Void) {
	gestionClient gestion;
	List<Client^>^ mesClients = gestion.chercherClients("", "");
	if (mesClients != nullptr) {
		Console::WriteLine("Clients : ");
		for (int i = 0; i < mesClients->Count; i++) {
			Console::WriteLine("Client : " + mesClients[i]->getNom() + " " + mesClients[i]->getPrenom() + " né le " + mesClients[i]->getNaissance());
		}
	}
	else
		Console::WriteLine("Aucun client trouvé");

}

System::Void TestRecherchePersonnel(Void) {
	gestionPersonnel gestion;
	List<Personnel^>^ mesPersonnels = gestion.rechercherPersonnel("", "");
	if (mesPersonnels != nullptr) {
		Console::WriteLine("Personnels : ");
		for (int i = 0; i < mesPersonnels->Count; i++) {
			Console::WriteLine("Personnel : " + mesPersonnels[i]->getNom() + " " + mesPersonnels[i]->getPrenom() + " embauché le " + mesPersonnels[i]->getDateEmbauche());
		}
	}
	else
		Console::WriteLine("Aucun personnel trouvé");
}

System::Void testAjoutCommande(Void) {
	gestionCommandes gestion;
	articles^ premierMaillon = gcnew articles;
	premierMaillon->idArticle = 2;
	premierMaillon->idEntrepot = 1;
	premierMaillon->quantite = 3;
	premierMaillon->suivant = gcnew articles;
	premierMaillon->suivant->idArticle = 3;
	premierMaillon->suivant->idEntrepot = 1;
	premierMaillon->suivant->quantite = 5;
	gestion.creerCommande("3", premierMaillon, "5", "4");
	Console::WriteLine(gestion.montantRestant("6"));
	Console::WriteLine(gestion.payerMontantRestant("6", "1"));
	Console::WriteLine(gestion.montantRestant("6"));
}

System::Void PageMain(Void) {
	testAjoutCommande();
}