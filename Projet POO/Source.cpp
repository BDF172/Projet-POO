#include "headerLink.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace NS_composants;
using namespace NS_services;

System::Void TestRecherche(Void) {
	gestionClient gestion;
	System::Collections::Generic::List<Client^ >^ mesClients = gestion.chercherClients("", "");
	if (mesClients != nullptr) {
		Console::WriteLine("Clients : ");
		for (int i = 0; i < mesClients->Count; i++) {
			Console::WriteLine("Client : " + mesClients[i]->getNom() + " " + mesClients[i]->getPrenom() + " n� le " + mesClients[i]->getNaissance());
		}
	}
	else
		Console::WriteLine("Client introuvable");

}

System::Void PageMain(Void) {
	gestionPersonnel gestion;
	Personnel^ personnel = gestion.obtenirPersonnel("1");
	Console::WriteLine("Personnel : " + personnel->getNom() + " " 
		+ personnel->getPrenom() + ", habite au " + personnel->getNumeroRue() 
		+ " " + personnel->getNomRue() + ", "+ personnel->getNomVille() + ", " 
		+ personnel->getNomPays());
}