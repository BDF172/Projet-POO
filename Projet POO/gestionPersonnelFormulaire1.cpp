#include "gestionPersonnelFormulaire1.h"

using namespace ProjetPOO;

System::Void FormulaireGestionPersonnel::FormulaireGestionPersonnel_Load(System::Object^ sender, System::EventArgs^ e) {
        this->gestionDuPersonnel = gcnew NS_services::gestionPersonnel;
        this->gestionDesValeurs = gcnew NS_services::gestionValeurs;
        choixFonction = 'N';
        this->paysComboBox->Items->Clear();
        this->paysComboBox->Text = "Veuillez choisir un pays";
        DicoPays = this->gestionDesValeurs->obtenirPays();
        if (this->DicoPays == nullptr) return;
        for each (System::String ^ i in DicoPays->Keys) {
            this->paysComboBox->Items->Add(i);
        }
    }

System::Void FormulaireGestionPersonnel::paysComboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
        this->villeComboBox->Items->Clear();
        this->villeComboBox->Text = "Veuillez choisir une ville";
        try {
            String^ idChoisi = this->DicoPays[this->paysComboBox->Text];
            DicoVilles = this->gestionDesValeurs->obtenirVilles(idChoisi);
            for each (System::String ^ i in DicoVilles->Keys) {
                this->villeComboBox->Items->Add(i);
            }
        }
        catch (Exception^ e) {
            MessageBox::Show("Erreur :" + e->Data);
        }
    }

System::Void FormulaireGestionPersonnel::button1_Click(System::Object^ sender, System::EventArgs^ e) {
        this->choixFonction = 'C';
        this->richTextBox1->Text = " " + this->button1->Text;
        this->button2->ForeColor = System::Drawing::Color::FromArgb(153, 209, 219);
        this->button3->ForeColor = System::Drawing::Color::FromArgb(244, 184, 228);
        this->button4->ForeColor = System::Drawing::Color::FromArgb(239, 159, 118);
        this->button1->ForeColor = System::Drawing::Color::FromArgb(255, 255, 255);
        this->button1->BackColor = System::Drawing::Color::FromArgb(192, 188, 251);
        this->button2->BackColor = System::Drawing::Color::FromArgb(18, 17, 41);
        this->button3->BackColor = System::Drawing::Color::FromArgb(18, 17, 41);
        this->button4->BackColor = System::Drawing::Color::FromArgb(18, 17, 41);
    }

System::Void FormulaireGestionPersonnel::button5_Click_1(System::Object^ sender, System::EventArgs^ e) {
        this->Close();
    }

System::Void FormulaireGestionPersonnel::button_valider_Click(System::Object^ sender, System::EventArgs^ e) {
        if (this->choixFonction == 'C') {
            System::Int64 NouvelID;
            try {
                if (verifySqlInjection(
                    this->nomTextBox->Text +
                    this->prenomTextBox->Text +
                    this->nRueTextBox->Text +
                    this->nomRueTextBox->Text +
                    this->idSuperieurTextBox->Text +
                    this->embaucheTextBox->Value.ToString(L"yyyy-MM-dd")
                )) {
                    MessageBox::Show("Impossible de valider la commande.");
                    return;
                }
                NouvelID = gestionDuPersonnel->createPersonnel(
                    this->nomTextBox->Text,
                    this->prenomTextBox->Text,
                    this->nRueTextBox->Text,
                    this->nomRueTextBox->Text,
                    this->DicoVilles[this->villeComboBox->Text],
                    this->idSuperieurTextBox->Text,
                    this->embaucheTextBox->Value.ToString(L"yyyy-MM-dd")
                );
            }
            catch (Exception^ e) {
                MessageBox::Show("Impossible de créer le personnel : " + e->Data);
                return;
            }
            if (NouvelID == -1) MessageBox::Show("Impossible de créer le personnel");
            else this->idPersonnelTextBox->Text = NouvelID.ToString();
        }
        else if (this->choixFonction == 'M') {
            Boolean result;
            try {
                if (verifySqlInjection(
                    this->idPersonnelTextBox->Text +
                    this->nomTextBox->Text +
                    this->prenomTextBox->Text +
                    this->nRueTextBox->Text +
                    this->nomRueTextBox->Text +
                    this->idSuperieurTextBox->Text +
                    this->embaucheTextBox->Value.ToString(L"yyyy-MM-dd")
                )) {
                    MessageBox::Show("Impossible de valider la commande.");
                    return;
                }
                result = this->gestionDuPersonnel->modifyPersonnel(
                    this->idPersonnelTextBox->Text,
                    this->nomTextBox->Text,
                    this->prenomTextBox->Text,
                    this->idSuperieurTextBox->Text,
                    this->embaucheTextBox->Value.ToString(L"yyyy-MM-dd")
                ) && this->gestionDuPersonnel->modifierAdressePersonnel(
                    this->idPersonnelTextBox->Text,
                    this->nRueTextBox->Text,
                    this->nomRueTextBox->Text,
                    this->DicoVilles[this->villeComboBox->Text]
                );
            }
            catch (Exception^ e) {
                MessageBox::Show("Echec de la modification : " + e->Data);
            }
            if (result)
                MessageBox::Show("Modification réussie", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
            else
                MessageBox::Show("Echec de la modification");
        }
        else if (this->choixFonction == 'S') {
            try {
                if (verifySqlInjection(this->idPersonnelTextBox->Text)) {
                    MessageBox::Show("Impossible de valider la commande.");
                    return;
                }
                if (this->gestionDuPersonnel->supprimerPersonnel(
                    this->idPersonnelTextBox->Text
                ))
                    MessageBox::Show("Suppression réussie", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
                else
                    MessageBox::Show("Echec de la suppression");
            }
            catch (Exception^ e) {
                MessageBox::Show("Une erreur s'est produite : " + e->Data);
                return;
            }
            
        }
    }
System::Void FormulaireGestionPersonnel::button2_Click(System::Object^ sender, System::EventArgs^ e) {
    this->choixFonction = 'M';
    this->richTextBox1->Text = " " + this->button2->Text;
    this->button1->ForeColor = System::Drawing::Color::FromArgb(192, 188, 251);
    this->button3->ForeColor = System::Drawing::Color::FromArgb(244, 184, 228);
    this->button4->ForeColor = System::Drawing::Color::FromArgb(239, 159, 118);
    this->button2->ForeColor = System::Drawing::Color::FromArgb(255, 255, 255);
    this->button2->BackColor = System::Drawing::Color::FromArgb(153, 209, 219);
    this->button1->BackColor = System::Drawing::Color::FromArgb(18, 17, 41);
    this->button3->BackColor = System::Drawing::Color::FromArgb(18, 17, 41);
    this->button4->BackColor = System::Drawing::Color::FromArgb(18, 17, 41);
}
System::Void FormulaireGestionPersonnel::button3_Click(System::Object^ sender, System::EventArgs^ e) {
    this->choixFonction = 'S';
    this->richTextBox1->Text = " " + this->button3->Text;
    this->button1->ForeColor = System::Drawing::Color::FromArgb(192, 188, 251);
    this->button2->ForeColor = System::Drawing::Color::FromArgb(153, 209, 219);
    this->button4->ForeColor = System::Drawing::Color::FromArgb(239, 159, 118);
    this->button3->ForeColor = System::Drawing::Color::FromArgb(255, 255, 255);
    this->button3->BackColor = System::Drawing::Color::FromArgb(244, 184, 228);
    this->button1->BackColor = System::Drawing::Color::FromArgb(18, 17, 41);
    this->button2->BackColor = System::Drawing::Color::FromArgb(18, 17, 41);
    this->button4->BackColor = System::Drawing::Color::FromArgb(18, 17, 41);
}

System::Void FormulaireGestionPersonnel::button4_Click(System::Object^ sender, System::EventArgs^ e) {
    this->button1->ForeColor = System::Drawing::Color::FromArgb(192, 188, 251);
    this->button3->ForeColor = System::Drawing::Color::FromArgb(244, 184, 228);
    this->button2->ForeColor = System::Drawing::Color::FromArgb(153, 209, 219);
    this->button4->ForeColor = System::Drawing::Color::FromArgb(255, 255, 255);
    this->button4->BackColor = System::Drawing::Color::FromArgb(239, 159, 118);
    this->button1->BackColor = System::Drawing::Color::FromArgb(18, 17, 41);
    this->button3->BackColor = System::Drawing::Color::FromArgb(18, 17, 41);
    this->button2->BackColor = System::Drawing::Color::FromArgb(18, 17, 41);
    if (this->idPersonnelTextBox->Text == "") {
        if (verifySqlInjection(this->prenomTextBox->Text + this->nomTextBox->Text)) {
            MessageBox::Show("Veuillez éviter les caractères spéciaux");
            return;
        }
        else {
            System::Collections::Generic::List<NS_composants::Personnel^>^ liste =
                this->gestionDuPersonnel->rechercherPersonnel(this->nomTextBox->Text, this->prenomTextBox->Text);
            this->richTextBox1->Text = (liste->Count != 0 ? "Personnels : " : "Aucun personnel trouvé");
            for each (NS_composants::Personnel ^ i in liste) {
                this->richTextBox1->Text +=
                    "\nPersonnel " + i->getId() +
                    "\n\tNom : " + i->getNom() +
                    "\n\tPrenom : " + i->getPrenom() +
                    "\n\tAdresse : " + i->getNumeroRue() + " " + i->getNomRue() + ", " +
                    "\n\t" + i->getNomVille() + " " + i->getNomPays();
            }

            return;
        }
    }
    if (!verifyEntryUint(this->idPersonnelTextBox->Text)) {
        MessageBox::Show("Veuillez entrer un identifiant valide");
        return;
    }
    NS_composants::Personnel^ personnelCherche = this->gestionDuPersonnel->obtenirPersonnel(this->idPersonnelTextBox->Text);
    if (personnelCherche == nullptr) {
        MessageBox::Show("Aucun personnel ne correspond à cet identifiant");
        return;
    }
    this->nomTextBox->Text = personnelCherche->getNom();
    this->prenomTextBox->Text = personnelCherche->getPrenom();
    this->nRueTextBox->Text = personnelCherche->getNumeroRue();
    this->villeComboBox->Text = personnelCherche->getNomVille();
    this->paysComboBox->Text = personnelCherche->getNomPays();
    this->nomRueTextBox->Text = personnelCherche->getNomRue();
    this->embaucheTextBox->Text = personnelCherche->getDateEmbauche();
    this->idSuperieurTextBox->Text = personnelCherche->getSuperieur();
}