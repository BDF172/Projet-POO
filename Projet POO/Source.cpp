#include "headerLink.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace NS_composants;
using namespace NS_services;

System::Void test(System::Void) {
	mappingClient^ client = gcnew mappingClient();
	client->creerClient("TRAGHA", "Ilias", "2004-10-02");
	DataSet^ result = client->executeRequest();
	DataRow^ message = result->Tables[0]->Rows[0];
	DataRow^ ligne = result->Tables[1]->Rows[0];
		Object^ toPrint = ligne[0];
		Console::WriteLine("Message d'erreur : " + message[0] + "\nNouvel idenfiant : " + toPrint);
}

System::Void PageMain(Void) {
	//Application::SetCompatibleTextRenderingDefault(false);
	//Application::EnableVisualStyles();
	//ProjetPOO::principal page;
	//Application::Run(% page);
	gestionArticles gestion;
	Console::WriteLine(gestion.ajouterArticle("Article 1", "13.99", "0.2", "100", "3.46"));
}