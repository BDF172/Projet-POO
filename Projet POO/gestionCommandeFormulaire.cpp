#include "GestionCommandeFormulaire.h"
#include "fonctions.h"

using namespace ProjetPOO;
using namespace NS_services;
using namespace NS_composants;
using namespace System::Windows::Forms;
using namespace System;
using namespace System::Collections::Generic;

// Définition des méthodes
System::Void GestionCommandeFormulaire::GestionCommandeFormulaire_Load(System::Object^ sender, System::EventArgs^ e) {
    this->gestionDeCommande = gcnew NS_services::gestionCommandes;
    this->gestionDuClient = gcnew NS_services::gestionClient;
    this->clientCommande = gcnew NS_composants::Client;
    this->articlesChoisis = nullptr;
    this->fonctionChoisie = 'N';
    adressesF = gcnew System::Collections::Generic::Dictionary<String^, String^>;
    adressesL = gcnew System::Collections::Generic::Dictionary<String^, String^>;
}

System::Void GestionCommandeFormulaire::button4_Click(System::Object^ sender, System::EventArgs^ e) {
    if (this->reference->Text == "") {
        MessageBox::Show("Veuillez entrer une référence de commande à rechercher.");
        return;
    }
    else {
        this->mainTextBox->Text = this->gestionDeCommande->obtenirCommande(this->reference->Text);
    }
}

System::Void GestionCommandeFormulaire::button1_Click(System::Object^ sender, System::EventArgs^ e) {
    this->mainTextBox->Text = " " + this->button1->Text;
    this->supprimerBouton->ForeColor = System::Drawing::Color::FromArgb(153, 209, 219);
    this->button4->ForeColor = System::Drawing::Color::FromArgb(239, 159, 118);
    this->button1->ForeColor = System::Drawing::Color::FromArgb(255, 255, 255);
    this->button1->BackColor = System::Drawing::Color::FromArgb(192, 188, 251);
    this->supprimerBouton->BackColor = System::Drawing::Color::FromArgb(18, 17, 41);
    this->button4->BackColor = System::Drawing::Color::FromArgb(18, 17, 41);
    this->fonctionChoisie = 'C';
}

System::Void GestionCommandeFormulaire::button2_Click(System::Object^ sender, System::EventArgs^ e) {
    this->mainTextBox->Text = " " + this->supprimerBouton->Text;
    this->button1->ForeColor = System::Drawing::Color::FromArgb(192, 188, 251);
    this->supprimerBouton->ForeColor = System::Drawing::Color::FromArgb(153, 209, 219);
    this->button4->ForeColor = System::Drawing::Color::FromArgb(239, 159, 118);
    this->button1->BackColor = System::Drawing::Color::FromArgb(18, 17, 41);
    this->supprimerBouton->BackColor = System::Drawing::Color::FromArgb(18, 17, 41);
    this->button4->BackColor = System::Drawing::Color::FromArgb(18, 17, 41);
    this->fonctionChoisie = 'S';
}

System::Void GestionCommandeFormulaire::button5_Click(System::Object^ sender, System::EventArgs^ e) {
    this->Close();
}

System::Void GestionCommandeFormulaire::button_valider_Click(System::Object^ sender, System::EventArgs^ e) {
    if (verifySqlInjection(this->idClientTextBox->Text + this->reference->Text)) {
        MessageBox::Show("Veuillez ne pas entrer de caractères spéciaux");
        return;
    }
    if (this->fonctionChoisie == 'N') {
        MessageBox::Show("Veuillez sélectionner une action à effectuer");
        return;
    }
    if (this->fonctionChoisie == 'C') {
        if (this->articlesChoisis == nullptr || this->idClientTextBox->Text == "") {
            MessageBox::Show("Veuillez sélectionner au moins un article et un client");
            return;
        }
        if (!adressesF->ContainsKey(this->fComboBox->Text) || !adressesL->ContainsKey(this->lComboBox->Text)) {
            MessageBox::Show("Veuillez sélectionner les adresses correspondant au client");
            return;
        }
        System::String^ referenceResult = this->gestionDeCommande->creerCommande(
            this->idClientTextBox->Text,
            this->articlesChoisis,
            this->adressesL[this->lComboBox->Text],
            this->adressesF[this->fComboBox->Text]
        );
        if (referenceResult == nullptr) {
            MessageBox::Show("Erreur lors de la création de commande");
            return;
        }
        else
            this->reference->Text = referenceResult;
    }
    else if (this->fonctionChoisie == 'S') {
        Double result = this->gestionDeCommande->supprimerCommande(this->reference->Text);
        if (result == -1) MessageBox::Show("Erreur lors de la suppression de la commande");
        else MessageBox::Show("Commande supprimée avec succès, " + result.ToString() + "€ viennent d'être remboursés");
    }
}

System::Void GestionCommandeFormulaire::idClientTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    if (verifySqlInjection(this->idClientTextBox->Text + this->reference->Text)) {
        MessageBox::Show("Veuillez ne pas entrer de caractères spéciaux");
        return;
    }
    adressesF->Clear();
    adressesL->Clear();

    if (this->idClientTextBox->Text == "" || !verifyEntryUint(this->idClientTextBox->Text)) {
        Console::WriteLine(this->idClientTextBox->Text);
        return;
    }

    clientCommande = gestionDuClient->obtenirClient(this->idClientTextBox->Text);

    if (clientCommande == nullptr)return;
    NS_composants::adresseClient^ adresses = clientCommande->getAdresse();
    while (adresses != nullptr) {
        System::String^ adresseFormatted = adresses->numeroRue + " " + adresses->nomRue
            + ", " + adresses->nomVille + ", " + adresses->nomPays;
        if (adresses->f_ou_l) {
            if (!adressesL->ContainsKey(adresseFormatted))
                this->adressesL->Add(adresseFormatted, adresses->idAdresse);
        }
        else if (!adressesF->ContainsKey(adresseFormatted))
            this->adressesF->Add(adresseFormatted, adresses->idAdresse);
        adresses = adresses->suivant;
    }
    fComboBox->Items->Clear();
    lComboBox->Items->Clear();
    for each (String ^ i in this->adressesF->Keys) fComboBox->Items->Add(i);
    for each (String ^ i in this->adressesL->Keys) lComboBox->Items->Add(i);
}

System::Void GestionCommandeFormulaire::button7_Click(System::Object^ sender, System::EventArgs^ e) {
    this->Hide();
    ajouterArticle toOpenAjouterArticles;
    toOpenAjouterArticles.ShowDialog();
    NS_composants::articles^ tempPtr = this->articlesChoisis;
    if (tempPtr == nullptr) this->articlesChoisis = toOpenAjouterArticles.choixUtilisateur;
    else {
        while (tempPtr->suivant != nullptr) {
            if (tempPtr->idArticle == toOpenAjouterArticles.choixUtilisateur->idArticle) {
                tempPtr->quantite = (Convert::ToInt64(tempPtr->quantite) + Convert::ToInt64(toOpenAjouterArticles.choixUtilisateur->quantite)).ToString();
                tempPtr->prix = (Convert::ToInt64(tempPtr->prix) + Convert::ToInt64(toOpenAjouterArticles.choixUtilisateur->prix)).ToString();
                break;
            }
            tempPtr = tempPtr->suivant;
        }
        if (tempPtr->idArticle == toOpenAjouterArticles.choixUtilisateur->idArticle) {
            tempPtr->quantite = (Convert::ToInt64(tempPtr->quantite) + Convert::ToInt64(toOpenAjouterArticles.choixUtilisateur->quantite)).ToString();
            tempPtr->prix = (Convert::ToDouble(tempPtr->prix) + Convert::ToDouble(toOpenAjouterArticles.choixUtilisateur->prix)).ToString();
        }
        else
            tempPtr->suivant = toOpenAjouterArticles.choixUtilisateur;
    }
    this->mainTextBox->Text = "";
    tempPtr = this->articlesChoisis;
    while (tempPtr != nullptr) {
        this->mainTextBox->Text += "Article : " + tempPtr->nom + "\n";
        this->mainTextBox->Text += "Quantité : " + tempPtr->quantite + "\n";
        this->mainTextBox->Text += "Montant : " + tempPtr->prix + "\n";
        tempPtr = tempPtr->suivant;
    }
    this->Show();
}

System::Void GestionCommandeFormulaire::button8_Click(System::Object^ sender, System::EventArgs^ e) {
    if (this->articlesChoisis == nullptr) {
        MessageBox::Show("Aucun article n'a été choisi");
        return;
    }
    this->Hide();
    supprimerArticle toOpenSupprimerArticles;
    toOpenSupprimerArticles.articlesChoisis = this->articlesChoisis;
    toOpenSupprimerArticles.ShowDialog();
    NS_composants::articles^ tempPtr = this->articlesChoisis;
    if (!(toOpenSupprimerArticles.toDelete == nullptr)) {
        if (this->articlesChoisis->idArticle == toOpenSupprimerArticles.toDelete) {
            this->articlesChoisis = this->articlesChoisis->suivant;
        }
        else {
            while (tempPtr->suivant->idArticle != toOpenSupprimerArticles.toDelete) tempPtr = tempPtr->suivant;
            tempPtr->suivant = tempPtr->suivant->suivant;
        }
    }
    this->mainTextBox->Text = "";
    tempPtr = this->articlesChoisis;
    while (tempPtr != nullptr) {
        this->mainTextBox->Text += "Article : " + tempPtr->nom + "\n";
        this->mainTextBox->Text += "Quantité : " + tempPtr->quantite + "\n";
        this->mainTextBox->Text += "Montant : " + tempPtr->prix + "\n";
        tempPtr = tempPtr->suivant;
    }
    this->Show();
}

System::Void GestionCommandeFormulaire::payerBouton_Click(System::Object^ sender, System::EventArgs^ e) {
    gestionPaiementCommande^ formPaiement = gcnew gestionPaiementCommande;
    this->Hide();
    formPaiement->ShowDialog();
    this->Show();
}