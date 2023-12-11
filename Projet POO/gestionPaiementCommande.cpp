#include "gestionPaiementCommande.h"
#include "gestionCommandes.h"
#include "fonctions.h"

using namespace ProjetPOO;

System::Void gestionPaiementCommande::button5_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
System::Void gestionPaiementCommande::lRadioBouton_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		label1->Visible = true;
		montantTextBox->Visible = true;
	}
System::Void gestionPaiementCommande::gestionPaiementCommande_Load(System::Object^ sender, System::EventArgs^ e) {
	this->gestionDesValeurs = gcnew NS_services::gestionValeurs;
	this->gestionDesCommandes = gcnew NS_services::gestionCommandes;
	DicoMoyens = this->gestionDesValeurs->obtenirMoyensPaiemment();
	for each (String ^ i in DicoMoyens->Keys) {
		this->comboBox1->Items->Add(i);
	}
}
System::Void gestionPaiementCommande::fRadioBouton_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	label1->Visible = false;
	montantTextBox->Visible = false;
}
System::Void gestionPaiementCommande::button_valider_Click(System::Object^ sender, System::EventArgs^ e) {
	if (verifySqlInjection(this->reference->Text + this->montantTextBox->Text + this->comboBox1->Text)) {
		MessageBox::Show("Veuillez ne pas entrer de caractères spéciaux");
		return;
	}
	if (reference->Text == "" || (!(this->entierRadioBouton->Checked) && !(this->partielRadioBouton->Checked))) {
		MessageBox::Show("Veuillez choisir une commande et un montant");
		return;
	}
	if (this->entierRadioBouton->Checked) {
		if (gestionDesCommandes->payerMontantRestant(this->reference->Text, "1"))
			MessageBox::Show("Le paiement est bien effectué");
		else
			MessageBox::Show("Impossible d'effectuer le paiement");
	}
	else if (this->partielRadioBouton->Checked) {
		if (!(this->DicoMoyens->ContainsKey(this->comboBox1->Text))) {
			MessageBox::Show("Impossible de valider le moyen de paiement");
		}
		if (gestionDesCommandes->payerCommande(this->reference->Text, this->montantTextBox->Text, this->DicoMoyens[this->comboBox1->Text]))
			MessageBox::Show("Le paiement est bien effectué");
		else
			MessageBox::Show("Impossible d'effectuer le paiement, vérifiez qu'il ne dépasse pas le montant demandé");
	}
	this->montantLabel->Text = this->gestionDesCommandes->montantRestant(this->reference->Text).ToString();
}
System::Void gestionPaiementCommande::reference_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (verifySqlInjection(this->reference->Text)) return;
	if (this->gestionDesCommandes->montantRestant(this->reference->Text) != -1) {
		this->montantLabel->Text = this->gestionDesCommandes->montantRestant(this->reference->Text).ToString();
	}
}