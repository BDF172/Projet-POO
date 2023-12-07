#include "headerLink.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace NS_composants;
using namespace NS_services;
using namespace System::Collections::Generic;

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
		Console::WriteLine("Client introuvable");

}

System::Void TestObtentionPersonnel(Void) {
	gestionPersonnel gestion;
	Personnel^ personnel = gestion.obtenirPersonnel("1");
	Console::WriteLine("Personnel : " + personnel->getNom() + " " 
		+ personnel->getPrenom() + ", habite au " + personnel->getNumeroRue() 
		+ " " + personnel->getNomRue() + ", "+ personnel->getNomVille() + ", " 
		+ personnel->getNomPays());
}

System::Void PageMain(Void) {
	TestRecherche();
	//TestObtentionPersonnel();
}    