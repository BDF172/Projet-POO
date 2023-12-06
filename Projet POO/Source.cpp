#include "headerLink.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace NS_composants;
using namespace NS_services;

System::Void PageMain(Void) {
	//Application::SetCompatibleTextRenderingDefault(false);
	//Application::EnableVisualStyles();
	//ProjetPOO::principal page;
	//Application::Run(% page);

	gestionClient gestion;
	System::Collections::Generic::List<Client^ >^ mesClients = gestion.chercherClients("", "");
	if (mesClients != nullptr) {
		Console::WriteLine("Clients : ");
		for (int i = 0; i < mesClients->Count; i++) {
			Console::WriteLine("Client : " + mesClients[i]->getNom() + " " + mesClients[i]->getPrenom() + " né le " + mesClients[i]->getNaissance());
		}
	}
	else
		Console::WriteLine("Client introuvable");

}