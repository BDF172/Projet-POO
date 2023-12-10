#include "ajouterArticle.h"
#include "fonctions.h"

using namespace ProjetPOO;
using namespace NS_services;
using namespace NS_composants;
using namespace System::Windows::Forms;
using namespace System;
using namespace System::Collections::Generic;

// Définition de la méthode button5_Click
System::Void ajouterArticle::button5_Click(System::Object^ sender, System::EventArgs^ e) {
    this->Close();
}

// Définition de la méthode button_valider_Click
System::Void ajouterArticle::button_valider_Click(System::Object^ sender, System::EventArgs^ e) {
    if (verifySqlInjection(this->quantiteTextBox->Text + this->rechercheTextBox->Text + this->idTextBox->Text)) {
        MessageBox::Show("Veuillez éviter les caractéres spéciaux");
        return;
    }
    if (this->idTextBox->Text == "" || this->quantiteTextBox->Text == "") {
        MessageBox::Show("Veuillez remplir les champs nécessaires");
        return;
    }

    if (!(this->gestionDesArticles->verifierStock(this->idTextBox->Text, this->quantiteTextBox->Text))) {
        MessageBox::Show("Erreur d'entrée dans l'article ou stock épuisées");
        return;
    }

    NS_composants::Articles^ articleChoisi = this->gestionDesArticles->obtenirArticle(this->idTextBox->Text);
    if (articleChoisi == nullptr) {
        MessageBox::Show("Article non trouvé");
        return;
    }

    this->choixUtilisateur = gcnew NS_composants::articles;
    this->choixUtilisateur->idEntrepot = "1";
    this->choixUtilisateur->idArticle = articleChoisi->getidArticles();
    this->choixUtilisateur->quantite = this->quantiteTextBox->Text;
    this->choixUtilisateur->nom = articleChoisi->getNom();
    this->choixUtilisateur->prix = (articleChoisi->getPrix() * Convert::ToInt64(this->quantiteTextBox->Text)).ToString();
    this->Close();
}

// Définition de la méthode ajouterArticle_Load
System::Void ajouterArticle::ajouterArticle_Load(System::Object^ sender, System::EventArgs^ e) {
    this->choixUtilisateur = nullptr;
    this->articlesList = nullptr;
    this->gestionDesArticles = gcnew NS_services::gestionArticles;
}

// Définition de la méthode rechercheTextBox_TextChanged
System::Void ajouterArticle::rechercheTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    if (verifySqlInjection(this->quantiteTextBox->Text + this->rechercheTextBox->Text + this->idTextBox->Text)) {
        MessageBox::Show("Veuillez éviter les caractéres spéciaux");
        return;
    }
    this->richTextBox1->Text = "";
    this->articlesList = this->gestionDesArticles->rechercherArticle(this->rechercheTextBox->Text);
    if (this->articlesList == nullptr) {
        this->richTextBox1->Text = "Aucun article trouvé";
        return;
    }
    for each (NS_composants::articles ^ i in this->articlesList) {
        this->richTextBox1->Text += "ID : " + i->idArticle + ", Nom d'article : " + i->nom + "\n\tprix : " + i->prix + "\n\tstock : " + i->quantite + "\n\n";
    }
}
