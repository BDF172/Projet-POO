#include "GestionArticlesFormulaire.h"
#include "fonctions.h"

using namespace ProjetPOO;
using namespace NS_services;
using namespace System::Windows::Forms;
using namespace System;
using namespace System::Collections::Generic;

System::Void GestionArticlesFormulaire::GestionArticlesFormulaire_Load(System::Object^ sender, System::EventArgs^ e) {
    this->choixFonction = 'N';
    this->gestionDesValeurs = gcnew NS_services::gestionValeurs;
    this->gestionDesArticles = gcnew NS_services::gestionArticles;
    this->tvaComboBox->Items->Clear();
    this->tvaComboBox->Text = "Veuillez choisir une TVA";
    DicoTVA = this->gestionDesValeurs->obtenirTVA();
    if (this->DicoTVA == nullptr) return;
    for each (System::String ^ i in DicoTVA->Keys) {
        this->tvaComboBox->Items->Add(i);
    }
}

Void GestionArticlesFormulaire::button1_Click(Object^ sender, EventArgs^ e) {
    this->richTextBox1->Text = " " + this->button1->Text;
    this->button2->ForeColor = Color::FromArgb(153, 209, 219);
    this->button3->ForeColor = Color::FromArgb(244, 184, 228);
    this->button4->ForeColor = Color::FromArgb(239, 159, 118);
    this->button1->ForeColor = Color::FromArgb(255, 255, 255);
    this->button1->BackColor = Color::FromArgb(192, 188, 251);
    this->button2->BackColor = Color::FromArgb(18, 17, 41);
    this->button3->BackColor = Color::FromArgb(18, 17, 41);
    this->button4->BackColor = Color::FromArgb(18, 17, 41);
    this->choixFonction = 'C';
}

Void GestionArticlesFormulaire::button2_Click(Object^ sender, EventArgs^ e) {
    this->richTextBox1->Text = " " + this->button2->Text;
    this->button1->ForeColor = Color::FromArgb(192, 188, 251);
    this->button3->ForeColor = Color::FromArgb(244, 184, 228);
    this->button4->ForeColor = Color::FromArgb(239, 159, 118);
    this->button2->ForeColor = Color::FromArgb(255, 255, 255);
    this->button2->BackColor = Color::FromArgb(153, 209, 219);
    this->button1->BackColor = Color::FromArgb(18, 17, 41);
    this->button3->BackColor = Color::FromArgb(18, 17, 41);
    this->button4->BackColor = Color::FromArgb(18, 17, 41);
    this->choixFonction = 'M';
}

Void GestionArticlesFormulaire::button3_Click(Object^ sender, EventArgs^ e) {
    this->button1->ForeColor = Color::FromArgb(192, 188, 251);
    this->button2->ForeColor = Color::FromArgb(153, 209, 219);
    this->button4->ForeColor = Color::FromArgb(239, 159, 118);
    this->button3->ForeColor = Color::FromArgb(255, 255, 255);
    this->richTextBox1->Text = " " + this->button3->Text;
    this->button3->BackColor = Color::FromArgb(244, 184, 228);
    this->button1->BackColor = Color::FromArgb(18, 17, 41);
    this->button2->BackColor = Color::FromArgb(18, 17, 41);
    this->button4->BackColor = Color::FromArgb(18, 17, 41);
    this->choixFonction = 'S';
}

Void GestionArticlesFormulaire::button4_Click(Object^ sender, EventArgs^ e) {
    this->richTextBox1->Text = " " + this->button4->Text;
    this->button1->ForeColor = Color::FromArgb(192, 188, 251);
    this->button3->ForeColor = Color::FromArgb(244, 184, 228);
    this->button2->ForeColor = Color::FromArgb(153, 209, 219);
    this->button4->ForeColor = Color::FromArgb(255, 255, 255);
    this->button4->BackColor = Color::FromArgb(239, 159, 118);
    this->button1->BackColor = Color::FromArgb(18, 17, 41);
    this->button3->BackColor = Color::FromArgb(18, 17, 41);
    this->button2->BackColor = Color::FromArgb(18, 17, 41);
}

Void GestionArticlesFormulaire::button_valider_Click(Object^ sender, EventArgs^ e) {
    if (verifySqlInjection(this->idTextBox->Text + this->nomTextBox->Text + this->prixTextBox->Text + seuilTextBox->Text + this->stockTextBox->Text)) {
        MessageBox::Show("Veuillez ne pas entrer de caractères spéciaux");
        return;
    }
    Int64 resultID;
    switch (this->choixFonction) {
    case 'N':
        MessageBox::Show("Veuillez sélectionner une action");
        break;
    case 'C':
        resultID = this->gestionDesArticles->ajouterArticle(
            this->nomTextBox->Text,
            this->prixTextBox->Text,
            this->DicoTVA[this->tvaComboBox->Text],
            this->seuilTextBox->Text,
            this->coutTextBox->Text,
            this->stockTextBox->Text
        );
        if (resultID == -1) {
            MessageBox::Show("Impossible d'ajouter l'article");
        }
        else {
            this->idTextBox->Text = resultID.ToString();
        }
        break;
    case 'S':
        if (this->gestionDesArticles->supprimerArticle(this->idTextBox->Text))
            MessageBox::Show("L'article a bien été supprimé");
        else
            MessageBox::Show("Echec de la suppression");
        break;
    case 'M':
        if (this->gestionDesArticles->modifierArticle(
            this->idTextBox->Text,
            this->nomTextBox->Text,
            this->prixTextBox->Text,
            this->DicoTVA[this->tvaComboBox->Text],
            this->seuilTextBox->Text,
            this->coutTextBox->Text,
            this->stockTextBox->Text
        ))
            MessageBox::Show("Modification réussie");
        else
            MessageBox::Show("Echec de la modification");
        break;
    }
}

Void GestionArticlesFormulaire::button5_Click(Object^ sender, EventArgs^ e) {
    this->Close();
}