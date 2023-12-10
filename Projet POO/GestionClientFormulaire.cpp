#include "GestionClientFormulaire.h"
#include "fonctions.h"

using namespace System;
using namespace System::Drawing;
using namespace NS_composants;
using namespace NS_services;
using namespace ProjetPOO;
using namespace System::Collections::Generic;


Void GestionClientFormulaire::GestionClientFormulaire_Load(Object^ sender, EventArgs^ e) {
     this->fonctionChoisie = 'N';
     this->gestionDesClients = gcnew gestionClient;
     this->gestionDesValeurs = gcnew gestionValeurs;
     this->paysComboBox->Items->Clear();
     this->paysComboBox->Text = "Veuillez choisir un pays";
     DicoPays = this->gestionDesValeurs->obtenirPays();
     if (this->DicoPays == nullptr) return;
     for each (String ^ i in DicoPays->Keys) {
         this->paysComboBox->Items->Add(i);
     }
 }
Void GestionClientFormulaire::paysComboBox_SelectedIndexChanged(Object^ sender, EventArgs^ e) {
        this->villeComboBox->Items->Clear();
        this->villeComboBox->Text = "Veuillez choisir une ville";
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
Void GestionClientFormulaire::button5_Click(Object^ sender, EventArgs^ e) {
    this->Close();
}

Void GestionClientFormulaire::button_valider_Click(Object^ sender, EventArgs^ e) {
    if (verifySqlInjection(this->nRueTextBox->Text + this->rueTextBox->Text + this->nomTextBox->Text + this->prenomTextBox->Text)) {
        MessageBox::Show("Veuillez ne pas entrer de caractères spéciaux");
        return;
    }
    DateTime selectedDate = this->naissanceDatePicker->Value;
    if (this->fonctionChoisie == 'N') {
        MessageBox::Show("Veuillez faire un choix");
    }
    else if (this->fonctionChoisie == 'C') {
        if (!(DicoVilles->ContainsKey(this->villeComboBox->Text))) {
            MessageBox::Show("Impossible de trouver la ville demandée");
            return;
        }
        if (!(this->DicoVilles->ContainsKey(this->villeComboBox->Text))) {
            MessageBox::Show("Ville introuvable");
            return;
        }
        Int64 resultID = this->gestionDesClients->createClient(
            this->nomTextBox->Text,
            this->prenomTextBox->Text,
            selectedDate.ToString(L"yyyy-MM-dd"),
            this->nRueTextBox->Text,
            this->rueTextBox->Text,
            this->DicoVilles[this->villeComboBox->Text],
            this->bothTypesBouton->Checked || this->livraisonBouton->Checked
        );

        if (resultID == -1) 
            this->idTextBox->Text = "Erreur lors de la création du client";
        else 
            this->idTextBox->Text = resultID.ToString();

        if (!(this->gestionDesClients->ajouterAdresse(resultID.ToString(), this->nRueTextBox->Text, this->rueTextBox->Text, this->DicoVilles[this->villeComboBox->Text], 0)))
            MessageBox::Show("Impossible d'ajouter l'adresse");
    }
    else if (this->fonctionChoisie == 'S') {
        if (this->gestionDesClients->supprimerClient(this->idTextBox->Text))
            MessageBox::Show("Client supprimé");
        else
            MessageBox::Show("Echec de la suppression du client");
    }
    else if (this->fonctionChoisie == 'M') {
        if (this->gestionDesClients->modifierClient(
            this->idTextBox->Text,
            this->nomTextBox->Text,
            this->prenomTextBox->Text,
            this->naissanceDatePicker->Value.ToString(L"yyyy-MM-dd")
        ))
            MessageBox::Show("Client modifié avec succés");
        else
            MessageBox::Show("Echec de la modification du client");
    }
    this->fonctionChoisie = 'N';
}

System::Void GestionClientFormulaire::button6_Click(System::Object^ sender, System::EventArgs^ e) {
    if (!verifyEntryUint(this->idTextBox->Text) || this->idTextBox->Text == "") {
        MessageBox::Show("Veuillez entrer un identifiant valide");
        return;
    }

    if ((monClient = this->gestionDesClients->obtenirClient(this->idTextBox->Text)) == nullptr) {
        MessageBox::Show("Le client n'est pas trouvé");
        return;
    }

    gestionAdressesClients^ windowToShow = gcnew gestionAdressesClients;
    windowToShow->clientToModify = this->monClient;
    this->Hide();
    windowToShow->ShowDialog();
    this->Show();
}

Void GestionClientFormulaire::button1_Click(Object^ sender, EventArgs^ e) {
    this->richTextBox1->Text = " " + this->button1->Text;
    this->button2->ForeColor = Color::FromArgb(153, 209, 219);
    this->button3->ForeColor = Color::FromArgb(244, 184, 228);
    this->button4->ForeColor = Color::FromArgb(239, 159, 118);
    this->button1->ForeColor = Color::FromArgb(255, 255, 255);
    this->button1->BackColor = Color::FromArgb(192, 188, 251);
    this->button2->BackColor = Color::FromArgb(18, 17, 41);
    this->button3->BackColor = Color::FromArgb(18, 17, 41);
    this->button4->BackColor = Color::FromArgb(18, 17, 41);
    this->fonctionChoisie = 'C';
    this->label12->Show();
    this->naissanceDatePicker->Show();
}
Void GestionClientFormulaire::button2_Click(Object^ sender, EventArgs^ e) {
    this->richTextBox1->Text = " " + this->button2->Text;
    this->button1->ForeColor = Color::FromArgb(192, 188, 251);
    this->button3->ForeColor = Color::FromArgb(244, 184, 228);
    this->button4->ForeColor = Color::FromArgb(239, 159, 118);
    this->button2->ForeColor = Color::FromArgb(255, 255, 255);
    this->button2->BackColor = Color::FromArgb(153, 209, 219);
    this->button1->BackColor = Color::FromArgb(18, 17, 41);
    this->button3->BackColor = Color::FromArgb(18, 17, 41);
    this->button4->BackColor = Color::FromArgb(18, 17, 41);
    this->fonctionChoisie = 'M';
    this->label12->Show();
    this->naissanceDatePicker->Show();
}
Void GestionClientFormulaire::button3_Click(Object^ sender, EventArgs^ e) {
    this->richTextBox1->Text = " " + this->button3->Text;
    this->button1->ForeColor = Color::FromArgb(192, 188, 251);
    this->button2->ForeColor = Color::FromArgb(153, 209, 219);
    this->button4->ForeColor = Color::FromArgb(239, 159, 118);
    this->button3->ForeColor = Color::FromArgb(255, 255, 255);
    this->button3->BackColor = Color::FromArgb(244, 184, 228);
    this->button1->BackColor = Color::FromArgb(18, 17, 41);
    this->button2->BackColor = Color::FromArgb(18, 17, 41);
    this->button4->BackColor = Color::FromArgb(18, 17, 41);
    this->fonctionChoisie = 'S';
    this->label12->Show();
    this->naissanceDatePicker->Show();
}
Void GestionClientFormulaire::button4_Click(Object^ sender, EventArgs^ e) {
    if (this->idTextBox->Text != "") {
        if (!verifyEntryUint(this->idTextBox->Text)) {
            this->richTextBox1->Text = "Aucun client trouvé";
            return;
        }
        Client^ monClient = this->gestionDesClients->obtenirClient(this->idTextBox->Text);
        if (monClient == nullptr) {
            this->richTextBox1->Text = "Impossible de trouver un client correspondant";
            return;
        }
        else {
            this->richTextBox1->Text = "Client " + this->idTextBox->Text + " : \n\tNom : " + monClient->getNom() + "\n\tPrénom : " + monClient->getPrenom();
        }
    }
    else {
        this->richTextBox1->Clear();
        List<Client^>^ mesClients = this->gestionDesClients->chercherClients(this->nomTextBox->Text, this->prenomTextBox->Text);
        for each (Client ^ i in mesClients) {
            if (i == nullptr) {
                MessageBox::Show("Erreur sur un client");
                continue;
            }
            this->richTextBox1->Text += "Client " + i->getID() + " : \n\tNom : " + i->getNom() + "\n\tPrénom : " + i->getPrenom() + "\n";
        }
        if (mesClients->Count == 0) {
            this->richTextBox1->Text = "Aucun client trouvé";
        }
    }
    this->label12->Show();
    this->naissanceDatePicker->Show();
}
