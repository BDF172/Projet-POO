#include "mainFormulaire1.h"

using namespace ProjetPOO;

System::Void MainFormulaire::button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	ProjetPOO::FormulaireGestionPersonnel toOpenClient;
	toOpenClient.ShowDialog();
	this->Show();
}
System::Void MainFormulaire::button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		GestionArticlesFormulaire toOpenArticle;
		toOpenArticle.ShowDialog();
		this->Show();
	}
System::Void MainFormulaire::button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		GestionClientFormulaire toOpenClient;
		toOpenClient.ShowDialog();
		this->Show();
	}

System::Void MainFormulaire::button4_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		GestionCommandeFormulaire toOpenCommande;
		toOpenCommande.ShowDialog();
		this->Show();
	}
System::Void MainFormulaire::button5_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		GestionStatFormulaire toOpenStat;
		toOpenStat.ShowDialog();
		this->Show();
	}
System::Void MainFormulaire::MainFormulaire_Load(System::Object^ sender, System::EventArgs^ e) {
		this->gestionDesClients = gcnew NS_services::gestionClient;
		System::Collections::Generic::List<NS_composants::Client^>^ clients = this->gestionDesClients->clientsAnniv();
		System::String^ toShow;
		if (clients->Count == 0) toShow = "Aucun client n'a reçu de mail d'anniversaire";
		else toShow = "Aujourd'hui, les clients suivants ont reçu\nun mail pour leur anniversaire :\n";
		for each (NS_composants::Client ^ i in clients) {
			toShow += "\n\t" + i->getNom() + " " + i->getPrenom();
		}
		MessageBox::Show(toShow);
	}