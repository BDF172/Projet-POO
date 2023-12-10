#include "gestionAdressesClients.h"
#include "fonctions.h"

using namespace ProjetPOO;
using namespace NS_services;
using namespace NS_composants;
using namespace System::Windows::Forms;
using namespace System;
using namespace System::Collections::Generic;

// Définition des méthodes
System::Void gestionAdressesClients::button5_Click(System::Object^ sender, System::EventArgs^ e) {
    this->Close();
}

System::Void gestionAdressesClients::gestionAdressesClients_Load(System::Object^ sender, System::EventArgs^ e) {
    this->adressesL = gcnew System::Collections::Generic::Dictionary<String^, String^>;
    this->adressesF = gcnew System::Collections::Generic::Dictionary<String^, String^>;
    this->gestionDesClients = gcnew NS_services::gestionClient;
    this->gestionDesValeurs = gcnew NS_services::gestionValeurs;
    this->paysComboBox->Items->Clear();
    DicoPays = this->gestionDesValeurs->obtenirPays();
    if (this->DicoPays == nullptr) return;
    for each (String ^ i in DicoPays->Keys) {
        this->paysComboBox->Items->Add(i);
    }
    NS_composants::adresseClient^ adresses = this->clientToModify->getAdresse();
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
}

System::Void gestionAdressesClients::radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    if (this->fRadioBouton->Checked) {
        this->adressComboBox->Items->Clear();
        for each (String ^ i in adressesF->Keys) {
            this->adressComboBox->Items->Add(i);
        }
    }
}

System::Void gestionAdressesClients::lRadioBouton_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    if (this->lRadioBouton->Checked) {
        this->adressComboBox->Items->Clear();
        for each (String ^ i in adressesL->Keys) {
            this->adressComboBox->Items->Add(i);
        }
    }
}

System::Void gestionAdressesClients::adressComboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
    System::Collections::Generic::Dictionary<String^, String^>^ toVerify = this->lRadioBouton->Checked ? adressesL : adressesF;
    this->tempAddress = this->clientToModify->getAdresse();
    while (tempAddress->idAdresse != toVerify[this->adressComboBox->Text] && tempAddress != nullptr) tempAddress = tempAddress->suivant;
    this->nRueTextBox->Text = this->tempAddress->numeroRue;
    this->rueTextBox->Text = this->tempAddress->nomRue;
    this->villeComboBox->Text = this->tempAddress->nomVille;
    this->paysComboBox->Text = this->tempAddress->nomPays;
}

System::Void gestionAdressesClients::button_valider_Click(System::Object^ sender, System::EventArgs^ e) {
    if (verifySqlInjection(this->rueTextBox->Text + this->nRueTextBox->Text + this->villeComboBox->Text)) {
        MessageBox::Show("Veuillez éviter les caractéres spéciaux");
        return;
    }
    System::Collections::Generic::Dictionary<String^, String^>^ toVerify = this->lRadioBouton->Checked ? adressesL : adressesF;
    this->tempAddress = this->clientToModify->getAdresse();
    while (tempAddress != nullptr) {
        if (tempAddress->idAdresse == toVerify[this->adressComboBox->Text]) {
            if (!(toVerify->ContainsKey(this->adressComboBox->Text))) {
                MessageBox::Show("L'adresse à modifier est introuvable");
                return;
            }
            if (!DicoVilles->ContainsKey(this->villeComboBox->Text)) {
                MessageBox::Show("La ville choisie n'est pas valide");
                return;
            }
            if (!(this->gestionDesClients->modifierAdresse(tempAddress->idAdresse, this->nRueTextBox->Text, this->rueTextBox->Text, DicoVilles[this->villeComboBox->Text])))
                MessageBox::Show("Erreur lors de la modification de l'adresse");
            else
                this->Close();
        }
        this->tempAddress = this->tempAddress->suivant;
    }
}

Void gestionAdressesClients::paysComboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
    this->villeComboBox->Items->Clear();
    try {
        String^ idChoisi = this->DicoPays[this->paysComboBox->Text];
        DicoVilles = this->gestionDesValeurs->obtenirVilles(idChoisi);
        for each (String ^ i in DicoVilles->Keys) {
            this->villeComboBox->Items->Add(i);
        }
    }
    catch (Exception^ e) {
        MessageBox::Show("Erreur :" + e->Data);
    }
}

