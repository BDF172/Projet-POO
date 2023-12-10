#pragma once
#include "Commande.h"
#include "gestionClient.h"
#include "gestionCommandes.h"
#include "ajouterArticle.h"
#include "supprimerArticle.h"
#include "fonctions.h"
#include "gestionPaiementCommande.h"

namespace ProjetPOO {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// Description résumée de GestionCommandeFormulaire
    /// </summary>
    public ref class GestionCommandeFormulaire : public System::Windows::Forms::Form
    {
    public:
        GestionCommandeFormulaire(void)
        {
            InitializeComponent();
            //
            //TODO: ajoutez ici le code du constructeur
            //
        }

    protected:
        /// <summary>
        /// Nettoyage des ressources utilisées.
        /// </summary>
        ~GestionCommandeFormulaire()
        {
            if (components)
            {
                delete components;
            }
        }

    protected:

    protected:







    private: System::Windows::Forms::TextBox^ reference;


    private: System::Windows::Forms::Button^ button5;



    private: System::Windows::Forms::Button^ button_valider;
    private: System::Windows::Forms::Label^ label14;
    private: System::Windows::Forms::RichTextBox^ mainTextBox;








    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Button^ button4;
    private: System::Windows::Forms::Button^ supprimerBouton;


    private: System::Windows::Forms::Panel^ panel1;




    private: System::Windows::Forms::Button^ button7;
    private: System::Windows::Forms::Button^ button8;

    private: System::Windows::Forms::Label^ label2;

    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::TextBox^ idClientTextBox;

    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::ComboBox^ fComboBox;
    private: System::Windows::Forms::ComboBox^ lComboBox;
    private: System::Windows::Forms::Button^ payerBouton;







    private:
        /// <summary>
        /// Variable nécessaire au concepteur.
        /// </summary>
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        /// <summary>
        /// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
        /// le contenu de cette méthode avec l'éditeur de code.
        /// </summary>
        void InitializeComponent(void)
        {
            this->reference = (gcnew System::Windows::Forms::TextBox());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->button_valider = (gcnew System::Windows::Forms::Button());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->mainTextBox = (gcnew System::Windows::Forms::RichTextBox());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->supprimerBouton = (gcnew System::Windows::Forms::Button());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->fComboBox = (gcnew System::Windows::Forms::ComboBox());
            this->lComboBox = (gcnew System::Windows::Forms::ComboBox());
            this->button8 = (gcnew System::Windows::Forms::Button());
            this->button7 = (gcnew System::Windows::Forms::Button());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->idClientTextBox = (gcnew System::Windows::Forms::TextBox());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->payerBouton = (gcnew System::Windows::Forms::Button());
            this->panel1->SuspendLayout();
            this->SuspendLayout();
            // 
            // reference
            // 
            this->reference->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(41)));
            this->reference->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->reference->ForeColor = System::Drawing::Color::White;
            this->reference->Location = System::Drawing::Point(27, 148);
            this->reference->Margin = System::Windows::Forms::Padding(4);
            this->reference->Name = L"reference";
            this->reference->Size = System::Drawing::Size(561, 26);
            this->reference->TabIndex = 100;
            // 
            // button5
            // 
            this->button5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->button5->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(188)), static_cast<System::Int32>(static_cast<System::Byte>(251)));
            this->button5->FlatAppearance->BorderSize = 2;
            this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button5->Font = (gcnew System::Drawing::Font(L"Consolas", 15, System::Drawing::FontStyle::Bold));
            this->button5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
                static_cast<System::Int32>(static_cast<System::Byte>(251)));
            this->button5->Location = System::Drawing::Point(434, 13);
            this->button5->Margin = System::Windows::Forms::Padding(0);
            this->button5->Name = L"button5";
            this->button5->Size = System::Drawing::Size(166, 66);
            this->button5->TabIndex = 99;
            this->button5->Text = L"Retour";
            this->button5->UseVisualStyleBackColor = false;
            this->button5->Click += gcnew System::EventHandler(this, &GestionCommandeFormulaire::button5_Click);
            // 
            // button_valider
            // 
            this->button_valider->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(41)));
            this->button_valider->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(188)), static_cast<System::Int32>(static_cast<System::Byte>(251)));
            this->button_valider->FlatAppearance->BorderSize = 2;
            this->button_valider->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button_valider->Font = (gcnew System::Drawing::Font(L"Consolas", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button_valider->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
                static_cast<System::Int32>(static_cast<System::Byte>(251)));
            this->button_valider->Location = System::Drawing::Point(27, 888);
            this->button_valider->Margin = System::Windows::Forms::Padding(4);
            this->button_valider->Name = L"button_valider";
            this->button_valider->Size = System::Drawing::Size(568, 96);
            this->button_valider->TabIndex = 62;
            this->button_valider->Text = L"Valider";
            this->button_valider->UseVisualStyleBackColor = false;
            this->button_valider->Click += gcnew System::EventHandler(this, &GestionCommandeFormulaire::button_valider_Click);
            // 
            // label14
            // 
            this->label14->AutoSize = true;
            this->label14->Font = (gcnew System::Drawing::Font(L"Consolas", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
                static_cast<System::Int32>(static_cast<System::Byte>(251)));
            this->label14->Location = System::Drawing::Point(23, 96);
            this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(190, 22);
            this->label14->TabIndex = 47;
            this->label14->Text = L"Référence commande";
            // 
            // mainTextBox
            // 
            this->mainTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                static_cast<System::Int32>(static_cast<System::Byte>(73)));
            this->mainTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->mainTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->mainTextBox->ForeColor = System::Drawing::Color::White;
            this->mainTextBox->Location = System::Drawing::Point(370, 47);
            this->mainTextBox->Margin = System::Windows::Forms::Padding(4);
            this->mainTextBox->Name = L"mainTextBox";
            this->mainTextBox->Size = System::Drawing::Size(926, 1118);
            this->mainTextBox->TabIndex = 111;
            this->mainTextBox->Text = L"";
            // 
            // button1
            // 
            this->button1->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(188)), static_cast<System::Int32>(static_cast<System::Byte>(251)));
            this->button1->FlatAppearance->BorderSize = 2;
            this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button1->Font = (gcnew System::Drawing::Font(L"Consolas", 18, System::Drawing::FontStyle::Bold));
            this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
                static_cast<System::Int32>(static_cast<System::Byte>(251)));
            this->button1->Location = System::Drawing::Point(23, 49);
            this->button1->Margin = System::Windows::Forms::Padding(4);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(279, 245);
            this->button1->TabIndex = 106;
            this->button1->Text = L"Créer commande";
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &GestionCommandeFormulaire::button1_Click);
            // 
            // button4
            // 
            this->button4->BackColor = System::Drawing::Color::Transparent;
            this->button4->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)),
                static_cast<System::Int32>(static_cast<System::Byte>(159)), static_cast<System::Int32>(static_cast<System::Byte>(118)));
            this->button4->FlatAppearance->BorderSize = 2;
            this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button4->Font = (gcnew System::Drawing::Font(L"Consolas", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(159)),
                static_cast<System::Int32>(static_cast<System::Byte>(118)));
            this->button4->Location = System::Drawing::Point(23, 593);
            this->button4->Margin = System::Windows::Forms::Padding(4);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(279, 270);
            this->button4->TabIndex = 110;
            this->button4->Text = L"Afficher commande";
            this->button4->UseVisualStyleBackColor = false;
            this->button4->Click += gcnew System::EventHandler(this, &GestionCommandeFormulaire::button4_Click);
            // 
            // supprimerBouton
            // 
            this->supprimerBouton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(41)));
            this->supprimerBouton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)),
                static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
            this->supprimerBouton->FlatAppearance->BorderSize = 2;
            this->supprimerBouton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->supprimerBouton->Font = (gcnew System::Drawing::Font(L"Consolas", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->supprimerBouton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(209)),
                static_cast<System::Int32>(static_cast<System::Byte>(219)));
            this->supprimerBouton->Location = System::Drawing::Point(23, 311);
            this->supprimerBouton->Margin = System::Windows::Forms::Padding(4);
            this->supprimerBouton->Name = L"supprimerBouton";
            this->supprimerBouton->Size = System::Drawing::Size(279, 260);
            this->supprimerBouton->TabIndex = 107;
            this->supprimerBouton->Text = L"Supprimer commande";
            this->supprimerBouton->UseVisualStyleBackColor = false;
            this->supprimerBouton->Click += gcnew System::EventHandler(this, &GestionCommandeFormulaire::button2_Click);
            // 
            // panel1
            // 
            this->panel1->Controls->Add(this->fComboBox);
            this->panel1->Controls->Add(this->lComboBox);
            this->panel1->Controls->Add(this->button8);
            this->panel1->Controls->Add(this->button7);
            this->panel1->Controls->Add(this->label2);
            this->panel1->Controls->Add(this->label3);
            this->panel1->Controls->Add(this->idClientTextBox);
            this->panel1->Controls->Add(this->label1);
            this->panel1->Controls->Add(this->reference);
            this->panel1->Controls->Add(this->button5);
            this->panel1->Controls->Add(this->button_valider);
            this->panel1->Controls->Add(this->label14);
            this->panel1->Location = System::Drawing::Point(1362, 47);
            this->panel1->Margin = System::Windows::Forms::Padding(4);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(614, 1118);
            this->panel1->TabIndex = 108;
            // 
            // fComboBox
            // 
            this->fComboBox->FormattingEnabled = true;
            this->fComboBox->Location = System::Drawing::Point(27, 414);
            this->fComboBox->Margin = System::Windows::Forms::Padding(2);
            this->fComboBox->Name = L"fComboBox";
            this->fComboBox->Size = System::Drawing::Size(556, 32);
            this->fComboBox->TabIndex = 116;
            // 
            // lComboBox
            // 
            this->lComboBox->FormattingEnabled = true;
            this->lComboBox->Location = System::Drawing::Point(27, 546);
            this->lComboBox->Margin = System::Windows::Forms::Padding(2);
            this->lComboBox->Name = L"lComboBox";
            this->lComboBox->Size = System::Drawing::Size(561, 32);
            this->lComboBox->TabIndex = 115;
            // 
            // button8
            // 
            this->button8->BackColor = System::Drawing::Color::Transparent;
            this->button8->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(243)),
                static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(168)));
            this->button8->FlatAppearance->BorderSize = 2;
            this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button8->Font = (gcnew System::Drawing::Font(L"Consolas", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(243)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
                static_cast<System::Int32>(static_cast<System::Byte>(168)));
            this->button8->Location = System::Drawing::Point(319, 710);
            this->button8->Margin = System::Windows::Forms::Padding(4);
            this->button8->Name = L"button8";
            this->button8->Size = System::Drawing::Size(276, 126);
            this->button8->TabIndex = 113;
            this->button8->Text = L"Supprimer Article";
            this->button8->UseVisualStyleBackColor = false;
            this->button8->Click += gcnew System::EventHandler(this, &GestionCommandeFormulaire::button8_Click);
            // 
            // button7
            // 
            this->button7->BackColor = System::Drawing::Color::Transparent;
            this->button7->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(166)),
                static_cast<System::Int32>(static_cast<System::Byte>(227)), static_cast<System::Int32>(static_cast<System::Byte>(161)));
            this->button7->FlatAppearance->BorderSize = 2;
            this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button7->Font = (gcnew System::Drawing::Font(L"Consolas", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(166)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
                static_cast<System::Int32>(static_cast<System::Byte>(161)));
            this->button7->Location = System::Drawing::Point(27, 710);
            this->button7->Margin = System::Windows::Forms::Padding(4);
            this->button7->Name = L"button7";
            this->button7->Size = System::Drawing::Size(276, 126);
            this->button7->TabIndex = 112;
            this->button7->Text = L"Ajouter article";
            this->button7->UseVisualStyleBackColor = false;
            this->button7->Click += gcnew System::EventHandler(this, &GestionCommandeFormulaire::button7_Click);
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Consolas", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
                static_cast<System::Int32>(static_cast<System::Byte>(251)));
            this->label2->Location = System::Drawing::Point(23, 488);
            this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(210, 22);
            this->label2->TabIndex = 113;
            this->label2->Text = L"Adresse de livraison";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"Consolas", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
                static_cast<System::Int32>(static_cast<System::Byte>(251)));
            this->label3->Location = System::Drawing::Point(23, 358);
            this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(230, 22);
            this->label3->TabIndex = 111;
            this->label3->Text = L"Adresse de facturation";
            // 
            // idClientTextBox
            // 
            this->idClientTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(41)));
            this->idClientTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->idClientTextBox->ForeColor = System::Drawing::Color::White;
            this->idClientTextBox->Location = System::Drawing::Point(27, 278);
            this->idClientTextBox->Margin = System::Windows::Forms::Padding(4);
            this->idClientTextBox->Name = L"idClientTextBox";
            this->idClientTextBox->Size = System::Drawing::Size(561, 26);
            this->idClientTextBox->TabIndex = 110;
            this->idClientTextBox->TextChanged += gcnew System::EventHandler(this, &GestionCommandeFormulaire::idClientTextBox_TextChanged);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Consolas", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
                static_cast<System::Int32>(static_cast<System::Byte>(251)));
            this->label1->Location = System::Drawing::Point(23, 227);
            this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(100, 22);
            this->label1->TabIndex = 109;
            this->label1->Text = L"ID client";
            // 
            // payerBouton
            // 
            this->payerBouton->BackColor = System::Drawing::Color::Transparent;
            this->payerBouton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)),
                static_cast<System::Int32>(static_cast<System::Byte>(159)), static_cast<System::Int32>(static_cast<System::Byte>(118)));
            this->payerBouton->FlatAppearance->BorderSize = 2;
            this->payerBouton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->payerBouton->Font = (gcnew System::Drawing::Font(L"Consolas", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->payerBouton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(159)),
                static_cast<System::Int32>(static_cast<System::Byte>(118)));
            this->payerBouton->Location = System::Drawing::Point(23, 884);
            this->payerBouton->Margin = System::Windows::Forms::Padding(4);
            this->payerBouton->Name = L"payerBouton";
            this->payerBouton->Size = System::Drawing::Size(279, 270);
            this->payerBouton->TabIndex = 112;
            this->payerBouton->Text = L"Payer commande";
            this->payerBouton->UseVisualStyleBackColor = false;
            this->payerBouton->Click += gcnew System::EventHandler(this, &GestionCommandeFormulaire::payerBouton_Click);
            // 
            // GestionCommandeFormulaire
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(41)));
            this->ClientSize = System::Drawing::Size(1997, 1230);
            this->Controls->Add(this->payerBouton);
            this->Controls->Add(this->mainTextBox);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->button4);
            this->Controls->Add(this->supprimerBouton);
            this->Controls->Add(this->panel1);
            this->Margin = System::Windows::Forms::Padding(4);
            this->Name = L"GestionCommandeFormulaire";
            this->Text = L"GestionCommandeFormulaire";
            this->Load += gcnew System::EventHandler(this, &GestionCommandeFormulaire::GestionCommandeFormulaire_Load);
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            this->ResumeLayout(false);

        }
#pragma endregion
        private:
            NS_services::gestionClient^ gestionDuClient;
            NS_services::gestionCommandes^ gestionDeCommande;
            NS_composants::Client^ clientCommande;
            System::Collections::Generic::Dictionary<String^, String^>^ adressesF;
            System::Collections::Generic::Dictionary<String^, String^>^ adressesL;
            NS_composants::articles^ articlesChoisis;
            System::Char fonctionChoisie;
            System::Void GestionCommandeFormulaire_Load(System::Object^ sender, System::EventArgs^ e);
            System::Void button4_Click(System::Object^ sender, System::EventArgs^ e);
            System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
            System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
            System::Void button5_Click(System::Object^ sender, System::EventArgs^ e);
            System::Void button_valider_Click(System::Object^ sender, System::EventArgs^ e);
            System::Void idClientTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e);
            System::Void button7_Click(System::Object^ sender, System::EventArgs^ e);
            System::Void button8_Click(System::Object^ sender, System::EventArgs^ e);
            System::Void payerBouton_Click(System::Object^ sender, System::EventArgs^ e);
};
}