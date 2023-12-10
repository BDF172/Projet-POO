#pragma once

#include "CLient.h"
#include "gestionClient.h"
#include "gestionValeurs.h"
#include "gestionAdressesClients.h"
#include "fonctions.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de GestionClientFormulaire
	/// </summary>
	public ref class GestionClientFormulaire : public System::Windows::Forms::Form
	{
	public:
		GestionClientFormulaire(void)
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
		~GestionClientFormulaire()
		{
			if (components)
			{
				delete components;
			}
		}
    private: System::Windows::Forms::Label^ label15;
    protected:

    private: System::Windows::Forms::Button^ button_valider;
    private: System::Windows::Forms::Label^ label14;
    private: System::Windows::Forms::Label^ label8;

    private: System::Windows::Forms::Panel^ panel1;


    private: System::Windows::Forms::Label^ label13;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::Label^ label12;

    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::DateTimePicker^ naissanceDatePicker;



    private: System::Windows::Forms::Button^ button4;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Button^ button3;
    private: System::Windows::Forms::Button^ button1;



    private: System::Windows::Forms::TextBox^ prenomTextBox;
    private: System::Windows::Forms::TextBox^ nRueTextBox;
    private: System::Windows::Forms::TextBox^ idTextBox;



    private: System::Windows::Forms::TextBox^ nomTextBox;
    private: System::Windows::Forms::ComboBox^ paysComboBox;


    private: System::Windows::Forms::Button^ button5;
    private: System::Windows::Forms::RichTextBox^ richTextBox1;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::TextBox^ rueTextBox;
    private: System::Windows::Forms::ComboBox^ villeComboBox;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::RadioButton^ bothTypesBouton;

    private: System::Windows::Forms::RadioButton^ livraisonBouton;

    private: System::Windows::Forms::RadioButton^ facturationBouton;

    private: System::Windows::Forms::Button^ button6;


    protected:

























	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->button_valider = (gcnew System::Windows::Forms::Button());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->bothTypesBouton = (gcnew System::Windows::Forms::RadioButton());
            this->livraisonBouton = (gcnew System::Windows::Forms::RadioButton());
            this->facturationBouton = (gcnew System::Windows::Forms::RadioButton());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->villeComboBox = (gcnew System::Windows::Forms::ComboBox());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->rueTextBox = (gcnew System::Windows::Forms::TextBox());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->paysComboBox = (gcnew System::Windows::Forms::ComboBox());
            this->prenomTextBox = (gcnew System::Windows::Forms::TextBox());
            this->nRueTextBox = (gcnew System::Windows::Forms::TextBox());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->idTextBox = (gcnew System::Windows::Forms::TextBox());
            this->nomTextBox = (gcnew System::Windows::Forms::TextBox());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->naissanceDatePicker = (gcnew System::Windows::Forms::DateTimePicker());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
            this->button6 = (gcnew System::Windows::Forms::Button());
            this->panel1->SuspendLayout();
            this->SuspendLayout();
            // 
            // label15
            // 
            this->label15->AutoSize = true;
            this->label15->Font = (gcnew System::Drawing::Font(L"Consolas", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
                static_cast<System::Int32>(static_cast<System::Byte>(251)));
            this->label15->Location = System::Drawing::Point(17, 62);
            this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(100, 22);
            this->label15->TabIndex = 64;
            this->label15->Text = L"ID Client";
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
            this->button_valider->Location = System::Drawing::Point(18, 1022);
            this->button_valider->Margin = System::Windows::Forms::Padding(4);
            this->button_valider->Name = L"button_valider";
            this->button_valider->Size = System::Drawing::Size(568, 96);
            this->button_valider->TabIndex = 62;
            this->button_valider->Text = L"Valider";
            this->button_valider->UseVisualStyleBackColor = false;
            this->button_valider->Click += gcnew System::EventHandler(this, &GestionClientFormulaire::button_valider_Click);
            // 
            // label14
            // 
            this->label14->AutoSize = true;
            this->label14->Font = (gcnew System::Drawing::Font(L"Consolas", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
                static_cast<System::Int32>(static_cast<System::Byte>(251)));
            this->label14->Location = System::Drawing::Point(17, 173);
            this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(40, 22);
            this->label14->TabIndex = 47;
            this->label14->Text = L"Nom";
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Font = (gcnew System::Drawing::Font(L"Consolas", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
                static_cast<System::Int32>(static_cast<System::Byte>(251)));
            this->label8->Location = System::Drawing::Point(18, 689);
            this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(50, 22);
            this->label8->TabIndex = 61;
            this->label8->Text = L"Pays";
            // 
            // panel1
            // 
            this->panel1->Controls->Add(this->bothTypesBouton);
            this->panel1->Controls->Add(this->livraisonBouton);
            this->panel1->Controls->Add(this->facturationBouton);
            this->panel1->Controls->Add(this->label2);
            this->panel1->Controls->Add(this->villeComboBox);
            this->panel1->Controls->Add(this->label1);
            this->panel1->Controls->Add(this->rueTextBox);
            this->panel1->Controls->Add(this->button5);
            this->panel1->Controls->Add(this->paysComboBox);
            this->panel1->Controls->Add(this->prenomTextBox);
            this->panel1->Controls->Add(this->nRueTextBox);
            this->panel1->Controls->Add(this->label7);
            this->panel1->Controls->Add(this->idTextBox);
            this->panel1->Controls->Add(this->nomTextBox);
            this->panel1->Controls->Add(this->label15);
            this->panel1->Controls->Add(this->button_valider);
            this->panel1->Controls->Add(this->label14);
            this->panel1->Controls->Add(this->label8);
            this->panel1->Controls->Add(this->label13);
            this->panel1->Controls->Add(this->label12);
            this->panel1->Controls->Add(this->label6);
            this->panel1->Controls->Add(this->naissanceDatePicker);
            this->panel1->Location = System::Drawing::Point(1369, 49);
            this->panel1->Margin = System::Windows::Forms::Padding(4);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(598, 1133);
            this->panel1->TabIndex = 101;
            // 
            // bothTypesBouton
            // 
            this->bothTypesBouton->AutoSize = true;
            this->bothTypesBouton->Font = (gcnew System::Drawing::Font(L"Consolas", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->bothTypesBouton->ForeColor = System::Drawing::Color::White;
            this->bothTypesBouton->Location = System::Drawing::Point(390, 962);
            this->bothTypesBouton->Margin = System::Windows::Forms::Padding(4);
            this->bothTypesBouton->Name = L"bothTypesBouton";
            this->bothTypesBouton->Size = System::Drawing::Size(73, 17);
            this->bothTypesBouton->TabIndex = 119;
            this->bothTypesBouton->TabStop = true;
            this->bothTypesBouton->Text = L"Les deux";
            this->bothTypesBouton->UseVisualStyleBackColor = true;
            // 
            // livraisonBouton
            // 
            this->livraisonBouton->AutoSize = true;
            this->livraisonBouton->Font = (gcnew System::Drawing::Font(L"Consolas", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->livraisonBouton->ForeColor = System::Drawing::Color::White;
            this->livraisonBouton->Location = System::Drawing::Point(222, 962);
            this->livraisonBouton->Margin = System::Windows::Forms::Padding(4);
            this->livraisonBouton->Name = L"livraisonBouton";
            this->livraisonBouton->Size = System::Drawing::Size(79, 17);
            this->livraisonBouton->TabIndex = 118;
            this->livraisonBouton->TabStop = true;
            this->livraisonBouton->Text = L"Livraison";
            this->livraisonBouton->UseVisualStyleBackColor = true;
            // 
            // facturationBouton
            // 
            this->facturationBouton->AutoSize = true;
            this->facturationBouton->Font = (gcnew System::Drawing::Font(L"Consolas", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->facturationBouton->ForeColor = System::Drawing::Color::White;
            this->facturationBouton->Location = System::Drawing::Point(33, 962);
            this->facturationBouton->Margin = System::Windows::Forms::Padding(4);
            this->facturationBouton->Name = L"facturationBouton";
            this->facturationBouton->Size = System::Drawing::Size(91, 17);
            this->facturationBouton->TabIndex = 117;
            this->facturationBouton->TabStop = true;
            this->facturationBouton->Text = L"Facturation";
            this->facturationBouton->UseVisualStyleBackColor = true;
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Consolas", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
                static_cast<System::Int32>(static_cast<System::Byte>(251)));
            this->label2->Location = System::Drawing::Point(17, 902);
            this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(150, 22);
            this->label2->TabIndex = 116;
            this->label2->Text = L"Type d\'adresse";
            // 
            // villeComboBox
            // 
            this->villeComboBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(41)));
            this->villeComboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->villeComboBox->ForeColor = System::Drawing::Color::White;
            this->villeComboBox->FormattingEnabled = true;
            this->villeComboBox->IntegralHeight = false;
            this->villeComboBox->Location = System::Drawing::Point(21, 842);
            this->villeComboBox->Margin = System::Windows::Forms::Padding(4);
            this->villeComboBox->Name = L"villeComboBox";
            this->villeComboBox->Size = System::Drawing::Size(558, 28);
            this->villeComboBox->TabIndex = 115;
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Consolas", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
                static_cast<System::Int32>(static_cast<System::Byte>(251)));
            this->label1->Location = System::Drawing::Point(22, 589);
            this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(40, 22);
            this->label1->TabIndex = 114;
            this->label1->Text = L"Rue";
            // 
            // rueTextBox
            // 
            this->rueTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(41)));
            this->rueTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->rueTextBox->ForeColor = System::Drawing::Color::White;
            this->rueTextBox->Location = System::Drawing::Point(20, 632);
            this->rueTextBox->Margin = System::Windows::Forms::Padding(4);
            this->rueTextBox->Name = L"rueTextBox";
            this->rueTextBox->Size = System::Drawing::Size(561, 26);
            this->rueTextBox->TabIndex = 113;
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
            this->button5->Location = System::Drawing::Point(414, 17);
            this->button5->Margin = System::Windows::Forms::Padding(0);
            this->button5->Name = L"button5";
            this->button5->Size = System::Drawing::Size(166, 64);
            this->button5->TabIndex = 112;
            this->button5->Text = L"Retour";
            this->button5->UseVisualStyleBackColor = false;
            this->button5->Click += gcnew System::EventHandler(this, &GestionClientFormulaire::button5_Click);
            // 
            // paysComboBox
            // 
            this->paysComboBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(41)));
            this->paysComboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->paysComboBox->ForeColor = System::Drawing::Color::White;
            this->paysComboBox->FormattingEnabled = true;
            this->paysComboBox->IntegralHeight = false;
            this->paysComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"1", L"Belgique", L"Canada" });
            this->paysComboBox->Location = System::Drawing::Point(21, 732);
            this->paysComboBox->Margin = System::Windows::Forms::Padding(4);
            this->paysComboBox->Name = L"paysComboBox";
            this->paysComboBox->Size = System::Drawing::Size(558, 28);
            this->paysComboBox->TabIndex = 111;
            this->paysComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &GestionClientFormulaire::paysComboBox_SelectedIndexChanged);
            // 
            // prenomTextBox
            // 
            this->prenomTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(41)));
            this->prenomTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->prenomTextBox->ForeColor = System::Drawing::Color::White;
            this->prenomTextBox->Location = System::Drawing::Point(18, 319);
            this->prenomTextBox->Margin = System::Windows::Forms::Padding(4);
            this->prenomTextBox->Name = L"prenomTextBox";
            this->prenomTextBox->Size = System::Drawing::Size(561, 26);
            this->prenomTextBox->TabIndex = 109;
            // 
            // nRueTextBox
            // 
            this->nRueTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(41)));
            this->nRueTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->nRueTextBox->ForeColor = System::Drawing::Color::White;
            this->nRueTextBox->Location = System::Drawing::Point(18, 539);
            this->nRueTextBox->Margin = System::Windows::Forms::Padding(4);
            this->nRueTextBox->Name = L"nRueTextBox";
            this->nRueTextBox->Size = System::Drawing::Size(561, 26);
            this->nRueTextBox->TabIndex = 108;
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Font = (gcnew System::Drawing::Font(L"Consolas", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
                static_cast<System::Int32>(static_cast<System::Byte>(251)));
            this->label7->Location = System::Drawing::Point(20, 799);
            this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(60, 22);
            this->label7->TabIndex = 59;
            this->label7->Text = L"Ville";
            // 
            // idTextBox
            // 
            this->idTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(41)));
            this->idTextBox->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->idTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->idTextBox->ForeColor = System::Drawing::Color::White;
            this->idTextBox->Location = System::Drawing::Point(18, 106);
            this->idTextBox->Margin = System::Windows::Forms::Padding(4);
            this->idTextBox->Name = L"idTextBox";
            this->idTextBox->Size = System::Drawing::Size(561, 26);
            this->idTextBox->TabIndex = 107;
            // 
            // nomTextBox
            // 
            this->nomTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(41)));
            this->nomTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->nomTextBox->ForeColor = System::Drawing::Color::White;
            this->nomTextBox->Location = System::Drawing::Point(20, 216);
            this->nomTextBox->Margin = System::Windows::Forms::Padding(4);
            this->nomTextBox->Name = L"nomTextBox";
            this->nomTextBox->Size = System::Drawing::Size(561, 26);
            this->nomTextBox->TabIndex = 106;
            // 
            // label13
            // 
            this->label13->AutoSize = true;
            this->label13->Font = (gcnew System::Drawing::Font(L"Consolas", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
                static_cast<System::Int32>(static_cast<System::Byte>(251)));
            this->label13->Location = System::Drawing::Point(11, 276);
            this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(70, 22);
            this->label13->TabIndex = 49;
            this->label13->Text = L"Prénom";
            // 
            // label12
            // 
            this->label12->AutoSize = true;
            this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
                static_cast<System::Int32>(static_cast<System::Byte>(251)));
            this->label12->Location = System::Drawing::Point(13, 389);
            this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(182, 24);
            this->label12->TabIndex = 50;
            this->label12->Text = L"Date de naissance";
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Font = (gcnew System::Drawing::Font(L"Consolas", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
                static_cast<System::Int32>(static_cast<System::Byte>(251)));
            this->label6->Location = System::Drawing::Point(20, 496);
            this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(100, 22);
            this->label6->TabIndex = 57;
            this->label6->Text = L"N° de rue";
            // 
            // naissanceDatePicker
            // 
            this->naissanceDatePicker->CalendarMonthBackground = System::Drawing::SystemColors::WindowFrame;
            this->naissanceDatePicker->CalendarTitleForeColor = System::Drawing::Color::AliceBlue;
            this->naissanceDatePicker->CustomFormat = L"yyyy-MM-dd";
            this->naissanceDatePicker->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
            this->naissanceDatePicker->ImeMode = System::Windows::Forms::ImeMode::NoControl;
            this->naissanceDatePicker->Location = System::Drawing::Point(21, 432);
            this->naissanceDatePicker->Margin = System::Windows::Forms::Padding(4);
            this->naissanceDatePicker->Name = L"naissanceDatePicker";
            this->naissanceDatePicker->Size = System::Drawing::Size(561, 26);
            this->naissanceDatePicker->TabIndex = 51;
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
            this->button4->Location = System::Drawing::Point(31, 912);
            this->button4->Margin = System::Windows::Forms::Padding(4);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(279, 270);
            this->button4->TabIndex = 103;
            this->button4->Text = L"Afficher Client";
            this->button4->UseVisualStyleBackColor = false;
            this->button4->Click += gcnew System::EventHandler(this, &GestionClientFormulaire::button4_Click);
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
            this->button2->Location = System::Drawing::Point(31, 325);
            this->button2->Margin = System::Windows::Forms::Padding(4);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(279, 260);
            this->button2->TabIndex = 99;
            this->button2->Text = L"Modifier Client";
            this->button2->UseVisualStyleBackColor = false;
            this->button2->Click += gcnew System::EventHandler(this, &GestionClientFormulaire::button2_Click);
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
            this->button3->Location = System::Drawing::Point(31, 622);
            this->button3->Margin = System::Windows::Forms::Padding(4);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(279, 262);
            this->button3->TabIndex = 102;
            this->button3->Text = L"Supprimer Client";
            this->button3->UseVisualStyleBackColor = false;
            this->button3->Click += gcnew System::EventHandler(this, &GestionClientFormulaire::button3_Click);
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
            this->button1->Location = System::Drawing::Point(31, 49);
            this->button1->Margin = System::Windows::Forms::Padding(4);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(279, 245);
            this->button1->TabIndex = 98;
            this->button1->Text = L"Créer Client";
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &GestionClientFormulaire::button1_Click);
            // 
            // richTextBox1
            // 
            this->richTextBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                static_cast<System::Int32>(static_cast<System::Byte>(73)));
            this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->richTextBox1->ForeColor = System::Drawing::Color::White;
            this->richTextBox1->Location = System::Drawing::Point(380, 49);
            this->richTextBox1->Margin = System::Windows::Forms::Padding(4);
            this->richTextBox1->Name = L"richTextBox1";
            this->richTextBox1->Size = System::Drawing::Size(926, 990);
            this->richTextBox1->TabIndex = 104;
            this->richTextBox1->Text = L"";
            // 
            // button6
            // 
            this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(41)));
            this->button6->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)),
                static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(175)));
            this->button6->FlatAppearance->BorderSize = 2;
            this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button6->Font = (gcnew System::Drawing::Font(L"Consolas", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(175)));
            this->button6->Location = System::Drawing::Point(380, 1072);
            this->button6->Margin = System::Windows::Forms::Padding(4);
            this->button6->Name = L"button6";
            this->button6->Size = System::Drawing::Size(926, 96);
            this->button6->TabIndex = 120;
            this->button6->Text = L"Gérer adresses";
            this->button6->UseVisualStyleBackColor = false;
            this->button6->Click += gcnew System::EventHandler(this, &GestionClientFormulaire::button6_Click);
            // 
            // GestionClientFormulaire
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(41)));
            this->ClientSize = System::Drawing::Size(1997, 1230);
            this->Controls->Add(this->button6);
            this->Controls->Add(this->richTextBox1);
            this->Controls->Add(this->panel1);
            this->Controls->Add(this->button4);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->button3);
            this->Controls->Add(this->button1);
            this->Margin = System::Windows::Forms::Padding(4);
            this->Name = L"GestionClientFormulaire";
            this->Text = L"GestionClientFormulaire";
            this->Load += gcnew System::EventHandler(this, &GestionClientFormulaire::GestionClientFormulaire_Load);
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            this->ResumeLayout(false);

        }
#pragma endregion
    private:
        System::Char fonctionChoisie;
        NS_services::gestionClient^ gestionDesClients;
        NS_services::gestionValeurs^ gestionDesValeurs;
        NS_composants::Client^ monClient;
        System::Collections::Generic::Dictionary<System::String^, System::String^>^ DicoPays;
        System::Collections::Generic::Dictionary<System::String^, System::String^>^ DicoVilles;

    private: System::Void GestionClientFormulaire_Load(System::Object^ sender, System::EventArgs^ e);
    private: System::Void paysComboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
    private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void button_valider_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e);

};
}
