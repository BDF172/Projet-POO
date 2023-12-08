#pragma once
#include "Commande.h"
#include "gestionClient.h"
#include "gestionCommandes.h"

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







    private: System::Windows::Forms::RichTextBox^ richTextBox1;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Button^ button4;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Button^ button3;
    private: System::Windows::Forms::Panel^ panel1;




    private: System::Windows::Forms::Button^ button7;
    private: System::Windows::Forms::Button^ button8;

    private: System::Windows::Forms::Label^ label2;

    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::TextBox^ idClientTextBox;

    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::ComboBox^ fComboBox;
    private: System::Windows::Forms::ComboBox^ lComboBox;






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
            this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->fComboBox = (gcnew System::Windows::Forms::ComboBox());
            this->lComboBox = (gcnew System::Windows::Forms::ComboBox());
            this->button8 = (gcnew System::Windows::Forms::Button());
            this->button7 = (gcnew System::Windows::Forms::Button());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->idClientTextBox = (gcnew System::Windows::Forms::TextBox());
            this->label1 = (gcnew System::Windows::Forms::Label());
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
            this->reference->Size = System::Drawing::Size(561, 39);
            this->reference->TabIndex = 100;
            this->reference->TextChanged += gcnew System::EventHandler(this, &GestionCommandeFormulaire::reference_TextChanged);
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
            this->label14->Size = System::Drawing::Size(341, 38);
            this->label14->TabIndex = 47;
            this->label14->Text = L"Référence commande";
            // 
            // richTextBox1
            // 
            this->richTextBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                static_cast<System::Int32>(static_cast<System::Byte>(73)));
            this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->richTextBox1->ForeColor = System::Drawing::Color::White;
            this->richTextBox1->Location = System::Drawing::Point(370, 47);
            this->richTextBox1->Margin = System::Windows::Forms::Padding(4);
            this->richTextBox1->Name = L"richTextBox1";
            this->richTextBox1->Size = System::Drawing::Size(926, 1118);
            this->richTextBox1->TabIndex = 111;
            this->richTextBox1->Text = L"";
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
            this->button1->Text = L"Créer Commande";
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
            this->button4->Location = System::Drawing::Point(23, 912);
            this->button4->Margin = System::Windows::Forms::Padding(4);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(279, 270);
            this->button4->TabIndex = 110;
            this->button4->Text = L"Afficher Commande";
            this->button4->UseVisualStyleBackColor = false;
            this->button4->Click += gcnew System::EventHandler(this, &GestionCommandeFormulaire::button4_Click);
            // 
            // button2
            // 
            this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(41)));
            this->button2->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)),
                static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
            this->button2->FlatAppearance->BorderSize = 2;
            this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button2->Font = (gcnew System::Drawing::Font(L"Consolas", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(209)),
                static_cast<System::Int32>(static_cast<System::Byte>(219)));
            this->button2->Location = System::Drawing::Point(23, 325);
            this->button2->Margin = System::Windows::Forms::Padding(4);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(279, 260);
            this->button2->TabIndex = 107;
            this->button2->Text = L"Modifier Commande";
            this->button2->UseVisualStyleBackColor = false;
            this->button2->Click += gcnew System::EventHandler(this, &GestionCommandeFormulaire::button2_Click);
            // 
            // button3
            // 
            this->button3->BackColor = System::Drawing::Color::Transparent;
            this->button3->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
                static_cast<System::Int32>(static_cast<System::Byte>(184)), static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->button3->FlatAppearance->BorderSize = 2;
            this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button3->Font = (gcnew System::Drawing::Font(L"Consolas", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(184)),
                static_cast<System::Int32>(static_cast<System::Byte>(228)));
            this->button3->Location = System::Drawing::Point(23, 622);
            this->button3->Margin = System::Windows::Forms::Padding(4);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(279, 262);
            this->button3->TabIndex = 109;
            this->button3->Text = L"Supprimer Commande";
            this->button3->UseVisualStyleBackColor = false;
            this->button3->Click += gcnew System::EventHandler(this, &GestionCommandeFormulaire::button3_Click);
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
            this->fComboBox->Name = L"fComboBox";
            this->fComboBox->Size = System::Drawing::Size(557, 32);
            this->fComboBox->TabIndex = 116;
            // 
            // lComboBox
            // 
            this->lComboBox->FormattingEnabled = true;
            this->lComboBox->Location = System::Drawing::Point(27, 546);
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
            this->button8->Location = System::Drawing::Point(319, 711);
            this->button8->Margin = System::Windows::Forms::Padding(4);
            this->button8->Name = L"button8";
            this->button8->Size = System::Drawing::Size(276, 126);
            this->button8->TabIndex = 113;
            this->button8->Text = L"Supprimer Article";
            this->button8->UseVisualStyleBackColor = false;
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
            this->button7->Location = System::Drawing::Point(27, 711);
            this->button7->Margin = System::Windows::Forms::Padding(4);
            this->button7->Name = L"button7";
            this->button7->Size = System::Drawing::Size(276, 126);
            this->button7->TabIndex = 112;
            this->button7->Text = L"Ajouter article";
            this->button7->UseVisualStyleBackColor = false;
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Consolas", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
                static_cast<System::Int32>(static_cast<System::Byte>(251)));
            this->label2->Location = System::Drawing::Point(23, 489);
            this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(377, 38);
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
            this->label3->Size = System::Drawing::Size(413, 38);
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
            this->idClientTextBox->Location = System::Drawing::Point(27, 279);
            this->idClientTextBox->Margin = System::Windows::Forms::Padding(4);
            this->idClientTextBox->Name = L"idClientTextBox";
            this->idClientTextBox->Size = System::Drawing::Size(561, 39);
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
            this->label1->Size = System::Drawing::Size(179, 38);
            this->label1->TabIndex = 109;
            this->label1->Text = L"ID client";
            // 
            // GestionCommandeFormulaire
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(41)));
            this->ClientSize = System::Drawing::Size(1997, 1230);
            this->Controls->Add(this->richTextBox1);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->button4);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->button3);
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

    private: System::Void GestionCommandeFormulaire_Load(System::Object^ sender, System::EventArgs^ e) {
        this->gestionDeCommande = gcnew NS_services::gestionCommandes;
        this->gestionDuClient = gcnew NS_services::gestionClient;
        this->clientCommande = gcnew NS_composants::Client;
        adressesF = gcnew System::Collections::Generic::Dictionary<String^, String^>;
        adressesL = gcnew System::Collections::Generic::Dictionary<String^, String^>;
    }

    private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
        this->richTextBox1->Text = " " + this->button4->Text;
        this->button1->ForeColor = System::Drawing::Color::FromArgb(192, 188, 251);
        this->button3->ForeColor = System::Drawing::Color::FromArgb(244, 184, 228);
        this->button2->ForeColor = System::Drawing::Color::FromArgb(153, 209, 219);
        this->button4->ForeColor = System::Drawing::Color::FromArgb(255, 255, 255);
        this->button4->BackColor = System::Drawing::Color::FromArgb(239, 159, 118);
        this->button1->BackColor = System::Drawing::Color::FromArgb(18, 17, 41);
        this->button3->BackColor = System::Drawing::Color::FromArgb(18, 17, 41);
        this->button2->BackColor = System::Drawing::Color::FromArgb(18, 17, 41);
    }
    private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void dateTimePicker_personnel_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
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
    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
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
    private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
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
    private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
        this->Close();
    }
    private: System::Void button_valider_Click(System::Object^ sender, System::EventArgs^ e) {
        
    }
    private: System::Void dateEmission_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void reference_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void montantCommande_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void moyenPaiement_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
        this->Close();
    }
private: System::Void idClientTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    try {
        clientCommande = gestionDuClient->obtenirClient(this->idClientTextBox->Text);
    }
    catch (Exception^ e) {
        MessageBox::Show("Une erreur s'est produite : " + e->Data);
    }
    if (clientCommande == nullptr)return;
    NS_composants::adresseClient^ adresses = clientCommande->getAdresse();
    while (adresses != nullptr) {
        System::String^ adresseFormatted = adresses->numeroRue + " " + adresses->nomRue 
            + ", " + adresses->nomVille + ", " + adresses->nomPays;
        if (adresses->f_ou_l) this->adressesL->Add(adresseFormatted, adresses->idAdresse);
        else this->adressesF->Add(adresseFormatted, adresses->idAdresse);
        adresses = adresses->suivant;
    }
    for each (String ^ i in this->adressesF->Keys) fComboBox->Items->Add(i);
    for each (String ^ i in this->adressesL->Keys) lComboBox->Items->Add(i);
}   
};
}