#pragma once

#include "CLient.h"
#include "gestionClient.h"

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
    private: System::Windows::Forms::TextBox^ villeTextBox;


    private: System::Windows::Forms::TextBox^ prenomTextBox;
    private: System::Windows::Forms::TextBox^ nRueTextBox;
    private: System::Windows::Forms::TextBox^ idTextBox;



    private: System::Windows::Forms::TextBox^ nomTextBox;
    private: System::Windows::Forms::ComboBox^ paysComboBox;


    private: System::Windows::Forms::Button^ button5;
    private: System::Windows::Forms::RichTextBox^ richTextBox1;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::TextBox^ rueTextBox;


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
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->rueTextBox = (gcnew System::Windows::Forms::TextBox());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->paysComboBox = (gcnew System::Windows::Forms::ComboBox());
            this->villeTextBox = (gcnew System::Windows::Forms::TextBox());
            this->prenomTextBox = (gcnew System::Windows::Forms::TextBox());
            this->nRueTextBox = (gcnew System::Windows::Forms::TextBox());
            this->idTextBox = (gcnew System::Windows::Forms::TextBox());
            this->nomTextBox = (gcnew System::Windows::Forms::TextBox());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->naissanceDatePicker = (gcnew System::Windows::Forms::DateTimePicker());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
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
            this->label15->Size = System::Drawing::Size(179, 38);
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
            this->button_valider->Location = System::Drawing::Point(12, 1022);
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
            this->label14->Size = System::Drawing::Size(71, 38);
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
            this->label8->Location = System::Drawing::Point(17, 876);
            this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(89, 38);
            this->label8->TabIndex = 61;
            this->label8->Text = L"Pays";
            // 
            // panel1
            // 
            this->panel1->Controls->Add(this->label1);
            this->panel1->Controls->Add(this->rueTextBox);
            this->panel1->Controls->Add(this->button5);
            this->panel1->Controls->Add(this->paysComboBox);
            this->panel1->Controls->Add(this->villeTextBox);
            this->panel1->Controls->Add(this->prenomTextBox);
            this->panel1->Controls->Add(this->nRueTextBox);
            this->panel1->Controls->Add(this->idTextBox);
            this->panel1->Controls->Add(this->nomTextBox);
            this->panel1->Controls->Add(this->label15);
            this->panel1->Controls->Add(this->button_valider);
            this->panel1->Controls->Add(this->label14);
            this->panel1->Controls->Add(this->label8);
            this->panel1->Controls->Add(this->label13);
            this->panel1->Controls->Add(this->label7);
            this->panel1->Controls->Add(this->label12);
            this->panel1->Controls->Add(this->label6);
            this->panel1->Controls->Add(this->naissanceDatePicker);
            this->panel1->Location = System::Drawing::Point(1369, 49);
            this->panel1->Margin = System::Windows::Forms::Padding(4);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(598, 1133);
            this->panel1->TabIndex = 101;
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Consolas", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
                static_cast<System::Int32>(static_cast<System::Byte>(251)));
            this->label1->Location = System::Drawing::Point(24, 622);
            this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(71, 38);
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
            this->rueTextBox->Location = System::Drawing::Point(18, 676);
            this->rueTextBox->Margin = System::Windows::Forms::Padding(4);
            this->rueTextBox->Name = L"rueTextBox";
            this->rueTextBox->Size = System::Drawing::Size(561, 39);
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
            this->paysComboBox->FormattingEnabled = true;
            this->paysComboBox->IntegralHeight = false;
            this->paysComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"1", L"Belgique", L"Canada" });
            this->paysComboBox->Location = System::Drawing::Point(18, 933);
            this->paysComboBox->Margin = System::Windows::Forms::Padding(4);
            this->paysComboBox->Name = L"paysComboBox";
            this->paysComboBox->Size = System::Drawing::Size(558, 40);
            this->paysComboBox->TabIndex = 111;
            // 
            // villeTextBox
            // 
            this->villeTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(41)));
            this->villeTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->villeTextBox->ForeColor = System::Drawing::Color::White;
            this->villeTextBox->Location = System::Drawing::Point(20, 796);
            this->villeTextBox->Margin = System::Windows::Forms::Padding(4);
            this->villeTextBox->Name = L"villeTextBox";
            this->villeTextBox->Size = System::Drawing::Size(561, 39);
            this->villeTextBox->TabIndex = 110;
            this->villeTextBox->TextChanged += gcnew System::EventHandler(this, &GestionClientFormulaire::textBox4_TextChanged);
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
            this->prenomTextBox->Size = System::Drawing::Size(561, 39);
            this->prenomTextBox->TabIndex = 109;
            this->prenomTextBox->TextChanged += gcnew System::EventHandler(this, &GestionClientFormulaire::textBox3_TextChanged);
            // 
            // nRueTextBox
            // 
            this->nRueTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(41)));
            this->nRueTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->nRueTextBox->ForeColor = System::Drawing::Color::White;
            this->nRueTextBox->Location = System::Drawing::Point(20, 559);
            this->nRueTextBox->Margin = System::Windows::Forms::Padding(4);
            this->nRueTextBox->Name = L"nRueTextBox";
            this->nRueTextBox->Size = System::Drawing::Size(561, 39);
            this->nRueTextBox->TabIndex = 108;
            this->nRueTextBox->TextChanged += gcnew System::EventHandler(this, &GestionClientFormulaire::textBox2_TextChanged);
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
            this->idTextBox->Size = System::Drawing::Size(561, 39);
            this->idTextBox->TabIndex = 107;
            this->idTextBox->TextChanged += gcnew System::EventHandler(this, &GestionClientFormulaire::textBox7_TextChanged_1);
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
            this->nomTextBox->Size = System::Drawing::Size(561, 39);
            this->nomTextBox->TabIndex = 106;
            this->nomTextBox->TextChanged += gcnew System::EventHandler(this, &GestionClientFormulaire::textBox1_TextChanged);
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
            this->label13->Size = System::Drawing::Size(125, 38);
            this->label13->TabIndex = 49;
            this->label13->Text = L"Prénom";
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Font = (gcnew System::Drawing::Font(L"Consolas", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
                static_cast<System::Int32>(static_cast<System::Byte>(251)));
            this->label7->Location = System::Drawing::Point(17, 742);
            this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(107, 38);
            this->label7->TabIndex = 59;
            this->label7->Text = L"Ville";
            this->label7->Click += gcnew System::EventHandler(this, &GestionClientFormulaire::label7_Click);
            // 
            // label12
            // 
            this->label12->AutoSize = true;
            this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
                static_cast<System::Int32>(static_cast<System::Byte>(251)));
            this->label12->Location = System::Drawing::Point(11, 383);
            this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(305, 38);
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
            this->label6->Location = System::Drawing::Point(17, 498);
            this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(179, 38);
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
            this->naissanceDatePicker->Location = System::Drawing::Point(18, 426);
            this->naissanceDatePicker->Margin = System::Windows::Forms::Padding(4);
            this->naissanceDatePicker->Name = L"naissanceDatePicker";
            this->naissanceDatePicker->Size = System::Drawing::Size(561, 39);
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
            this->richTextBox1->Size = System::Drawing::Size(926, 1118);
            this->richTextBox1->TabIndex = 104;
            this->richTextBox1->Text = L"";
            // 
            // GestionClientFormulaire
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(41)));
            this->ClientSize = System::Drawing::Size(1997, 1230);
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
    private: System::Void GestionClientFormulaire_Load(System::Object^ sender, System::EventArgs^ e) {
        this->fonctionChoisie = 'N';
    }
    private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
    }
private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
private: System::Void textBox7_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
    this->Close();

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
    this->fonctionChoisie = 'C';
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
private: System::Void button_valider_Click(System::Object^ sender, System::EventArgs^ e) {
    DateTime selectedDate = this->naissanceDatePicker->Value;
    if (this->fonctionChoisie == 'C') {
        Int64 resultID = this->gestionDesClients.createClient(
            this->nomTextBox->Text,
            this->prenomTextBox->Text,
            selectedDate.ToString(L"yyyy-MM-dd"),
            this->nRueTextBox->Text,
            this->rueTextBox->Text,
            this->paysComboBox->Text
        );
        if (resultID == -1) this->idTextBox->Text = "Erreur lors de la création du client";
        else this->idTextBox->Text = resultID.ToString();
    }
    else if (this->fonctionChoisie = 'M') {
        
    }
}
private: 
    System::Char fonctionChoisie;
    NS_services::gestionClient gestionDesClients;
};
}
