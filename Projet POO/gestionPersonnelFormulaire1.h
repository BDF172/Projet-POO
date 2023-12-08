#pragma once

#include "Personnel.h"
#include "gestionPersonnel.h"

namespace ProjetPOO {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;


    /// <summary>
    /// Description résumée de FormulaireGestionPersonnel
    /// </summary>
    public ref class FormulaireGestionPersonnel : public System::Windows::Forms::Form
    {
    public:
        FormulaireGestionPersonnel(void)
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
        ~FormulaireGestionPersonnel()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::Button^ button1;
    protected:
    private: System::Windows::Forms::Label^ label15;
    private: System::Windows::Forms::TextBox^ idPersonnelTextBox;

    private: System::Windows::Forms::Button^ button_valider;
    private: System::Windows::Forms::Label^ label14;
    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::TextBox^ nomTextBox;

    private: System::Windows::Forms::Button^ button4;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Button^ button3;
    private: System::Windows::Forms::ComboBox^ paysComboBox;

    private: System::Windows::Forms::TextBox^ prenomTextBox;

    private: System::Windows::Forms::Label^ label13;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::Label^ label12;
    private: System::Windows::Forms::TextBox^ villeTextBox;

    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::DateTimePicker^ embaucheTextBox;
    private: System::Windows::Forms::TextBox^ nomRueTextBox;



    private: System::Windows::Forms::Panel^ panel1;


    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::TextBox^ idSuperieurTextBox;

    private: System::Windows::Forms::Button^ button5;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::TextBox^ nRueTextBox;




    protected:


























    protected:




























































    protected:

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
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->idPersonnelTextBox = (gcnew System::Windows::Forms::TextBox());
            this->button_valider = (gcnew System::Windows::Forms::Button());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->nomTextBox = (gcnew System::Windows::Forms::TextBox());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->paysComboBox = (gcnew System::Windows::Forms::ComboBox());
            this->prenomTextBox = (gcnew System::Windows::Forms::TextBox());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->villeTextBox = (gcnew System::Windows::Forms::TextBox());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->embaucheTextBox = (gcnew System::Windows::Forms::DateTimePicker());
            this->nomRueTextBox = (gcnew System::Windows::Forms::TextBox());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->nRueTextBox = (gcnew System::Windows::Forms::TextBox());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->idSuperieurTextBox = (gcnew System::Windows::Forms::TextBox());
            this->panel1->SuspendLayout();
            this->SuspendLayout();
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
            this->button1->Location = System::Drawing::Point(17, 27);
            this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(152, 133);
            this->button1->TabIndex = 92;
            this->button1->Text = L"Créer Personnel";
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &FormulaireGestionPersonnel::button1_Click);
            // 
            // label15
            // 
            this->label15->AutoSize = true;
            this->label15->Font = (gcnew System::Drawing::Font(L"Consolas", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
                static_cast<System::Int32>(static_cast<System::Byte>(251)));
            this->label15->Location = System::Drawing::Point(15, 13);
            this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(130, 22);
            this->label15->TabIndex = 64;
            this->label15->Text = L"ID Personnel";
            // 
            // idPersonnelTextBox
            // 
            this->idPersonnelTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)),
                static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(41)));
            this->idPersonnelTextBox->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->idPersonnelTextBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(188)), static_cast<System::Int32>(static_cast<System::Byte>(251)));
            this->idPersonnelTextBox->Location = System::Drawing::Point(11, 49);
            this->idPersonnelTextBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->idPersonnelTextBox->Name = L"idPersonnelTextBox";
            this->idPersonnelTextBox->Size = System::Drawing::Size(308, 20);
            this->idPersonnelTextBox->TabIndex = 63;
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
            this->button_valider->Location = System::Drawing::Point(7, 554);
            this->button_valider->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->button_valider->Name = L"button_valider";
            this->button_valider->Size = System::Drawing::Size(310, 52);
            this->button_valider->TabIndex = 62;
            this->button_valider->Text = L"Valider";
            this->button_valider->UseVisualStyleBackColor = false;
            this->button_valider->Click += gcnew System::EventHandler(this, &FormulaireGestionPersonnel::button_valider_Click);
            // 
            // label14
            // 
            this->label14->AutoSize = true;
            this->label14->Font = (gcnew System::Drawing::Font(L"Consolas", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
                static_cast<System::Int32>(static_cast<System::Byte>(251)));
            this->label14->Location = System::Drawing::Point(11, 79);
            this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
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
            this->label8->Location = System::Drawing::Point(7, 487);
            this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(50, 22);
            this->label8->TabIndex = 61;
            this->label8->Text = L"Pays";
            // 
            // nomTextBox
            // 
            this->nomTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(41)));
            this->nomTextBox->ForeColor = System::Drawing::Color::White;
            this->nomTextBox->Location = System::Drawing::Point(11, 102);
            this->nomTextBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->nomTextBox->Name = L"nomTextBox";
            this->nomTextBox->Size = System::Drawing::Size(308, 20);
            this->nomTextBox->TabIndex = 46;
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
            this->button4->Location = System::Drawing::Point(17, 494);
            this->button4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(152, 146);
            this->button4->TabIndex = 97;
            this->button4->Text = L"Afficher Personnel";
            this->button4->UseVisualStyleBackColor = false;
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
            this->button2->Location = System::Drawing::Point(17, 176);
            this->button2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(152, 141);
            this->button2->TabIndex = 93;
            this->button2->Text = L" Modifier Personnel";
            this->button2->UseVisualStyleBackColor = false;
            this->button2->Click += gcnew System::EventHandler(this, &FormulaireGestionPersonnel::button2_Click);
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
            this->button3->Location = System::Drawing::Point(17, 337);
            this->button3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(152, 142);
            this->button3->TabIndex = 96;
            this->button3->Text = L"Supprimer Personnel";
            this->button3->UseVisualStyleBackColor = false;
            this->button3->Click += gcnew System::EventHandler(this, &FormulaireGestionPersonnel::button3_Click);
            // 
            // paysComboBox
            // 
            this->paysComboBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(41)));
            this->paysComboBox->ForeColor = System::Drawing::Color::White;
            this->paysComboBox->FormattingEnabled = true;
            this->paysComboBox->IntegralHeight = false;
            this->paysComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"1", L"Belgique", L"Canada" });
            this->paysComboBox->Location = System::Drawing::Point(11, 510);
            this->paysComboBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->paysComboBox->Name = L"paysComboBox";
            this->paysComboBox->Size = System::Drawing::Size(306, 21);
            this->paysComboBox->TabIndex = 60;
            // 
            // prenomTextBox
            // 
            this->prenomTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(41)));
            this->prenomTextBox->ForeColor = System::Drawing::Color::White;
            this->prenomTextBox->Location = System::Drawing::Point(11, 161);
            this->prenomTextBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->prenomTextBox->Name = L"prenomTextBox";
            this->prenomTextBox->Size = System::Drawing::Size(308, 20);
            this->prenomTextBox->TabIndex = 48;
            // 
            // label13
            // 
            this->label13->AutoSize = true;
            this->label13->Font = (gcnew System::Drawing::Font(L"Consolas", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
                static_cast<System::Int32>(static_cast<System::Byte>(251)));
            this->label13->Location = System::Drawing::Point(7, 139);
            this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(70, 22);
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
            this->label7->Location = System::Drawing::Point(5, 432);
            this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(60, 22);
            this->label7->TabIndex = 59;
            this->label7->Text = L"Ville";
            // 
            // label12
            // 
            this->label12->AutoSize = true;
            this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
                static_cast<System::Int32>(static_cast<System::Byte>(251)));
            this->label12->Location = System::Drawing::Point(7, 193);
            this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(320, 24);
            this->label12->TabIndex = 50;
            this->label12->Text = L"Date d\'embauche (YYYY/MM/DD)";
            // 
            // villeTextBox
            // 
            this->villeTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(41)));
            this->villeTextBox->ForeColor = System::Drawing::Color::White;
            this->villeTextBox->Location = System::Drawing::Point(10, 455);
            this->villeTextBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->villeTextBox->Name = L"villeTextBox";
            this->villeTextBox->Size = System::Drawing::Size(308, 20);
            this->villeTextBox->TabIndex = 58;
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Font = (gcnew System::Drawing::Font(L"Consolas", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
                static_cast<System::Int32>(static_cast<System::Byte>(251)));
            this->label6->Location = System::Drawing::Point(7, 378);
            this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(140, 22);
            this->label6->TabIndex = 57;
            this->label6->Text = L"Nom de la rue";
            // 
            // embaucheTextBox
            // 
            this->embaucheTextBox->CalendarMonthBackground = System::Drawing::SystemColors::WindowFrame;
            this->embaucheTextBox->CalendarTitleForeColor = System::Drawing::Color::AliceBlue;
            this->embaucheTextBox->CustomFormat = L"yyyy-MM-dd";
            this->embaucheTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
            this->embaucheTextBox->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
            this->embaucheTextBox->Location = System::Drawing::Point(11, 217);
            this->embaucheTextBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->embaucheTextBox->Name = L"embaucheTextBox";
            this->embaucheTextBox->Size = System::Drawing::Size(308, 26);
            this->embaucheTextBox->TabIndex = 51;
            // 
            // nomRueTextBox
            // 
            this->nomRueTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(41)));
            this->nomRueTextBox->ForeColor = System::Drawing::Color::White;
            this->nomRueTextBox->Location = System::Drawing::Point(11, 400);
            this->nomRueTextBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->nomRueTextBox->Name = L"nomRueTextBox";
            this->nomRueTextBox->Size = System::Drawing::Size(308, 20);
            this->nomRueTextBox->TabIndex = 56;
            // 
            // panel1
            // 
            this->panel1->Controls->Add(this->label1);
            this->panel1->Controls->Add(this->nRueTextBox);
            this->panel1->Controls->Add(this->button5);
            this->panel1->Controls->Add(this->label2);
            this->panel1->Controls->Add(this->idSuperieurTextBox);
            this->panel1->Controls->Add(this->label15);
            this->panel1->Controls->Add(this->idPersonnelTextBox);
            this->panel1->Controls->Add(this->button_valider);
            this->panel1->Controls->Add(this->label14);
            this->panel1->Controls->Add(this->label8);
            this->panel1->Controls->Add(this->nomTextBox);
            this->panel1->Controls->Add(this->paysComboBox);
            this->panel1->Controls->Add(this->prenomTextBox);
            this->panel1->Controls->Add(this->label13);
            this->panel1->Controls->Add(this->label7);
            this->panel1->Controls->Add(this->label12);
            this->panel1->Controls->Add(this->villeTextBox);
            this->panel1->Controls->Add(this->label6);
            this->panel1->Controls->Add(this->embaucheTextBox);
            this->panel1->Controls->Add(this->nomRueTextBox);
            this->panel1->Location = System::Drawing::Point(747, 25);
            this->panel1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(335, 615);
            this->panel1->TabIndex = 95;
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Consolas", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
                static_cast<System::Int32>(static_cast<System::Byte>(251)));
            this->label1->Location = System::Drawing::Point(9, 321);
            this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(140, 22);
            this->label1->TabIndex = 101;
            this->label1->Text = L"Numéro de rue";
            // 
            // nRueTextBox
            // 
            this->nRueTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(41)));
            this->nRueTextBox->ForeColor = System::Drawing::Color::White;
            this->nRueTextBox->Location = System::Drawing::Point(13, 343);
            this->nRueTextBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->nRueTextBox->Name = L"nRueTextBox";
            this->nRueTextBox->Size = System::Drawing::Size(308, 20);
            this->nRueTextBox->TabIndex = 100;
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
            this->button5->Location = System::Drawing::Point(235, 0);
            this->button5->Margin = System::Windows::Forms::Padding(0);
            this->button5->Name = L"button5";
            this->button5->Size = System::Drawing::Size(91, 35);
            this->button5->TabIndex = 99;
            this->button5->Text = L"Retour";
            this->button5->UseVisualStyleBackColor = false;
            this->button5->Click += gcnew System::EventHandler(this, &FormulaireGestionPersonnel::button5_Click_1);
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Consolas", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
                static_cast<System::Int32>(static_cast<System::Byte>(251)));
            this->label2->Location = System::Drawing::Point(9, 260);
            this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(160, 22);
            this->label2->TabIndex = 66;
            this->label2->Text = L"ID du supérieur";
            // 
            // idSuperieurTextBox
            // 
            this->idSuperieurTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)),
                static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(41)));
            this->idSuperieurTextBox->ForeColor = System::Drawing::Color::White;
            this->idSuperieurTextBox->Location = System::Drawing::Point(13, 283);
            this->idSuperieurTextBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->idSuperieurTextBox->Name = L"idSuperieurTextBox";
            this->idSuperieurTextBox->Size = System::Drawing::Size(308, 20);
            this->idSuperieurTextBox->TabIndex = 65;
            // 
            // FormulaireGestionPersonnel
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(41)));
            this->ClientSize = System::Drawing::Size(1089, 575);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->button4);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->button3);
            this->Controls->Add(this->panel1);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
            this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->Name = L"FormulaireGestionPersonnel";
            this->Text = L"FormulaireGestionPersonnel";
            this->Load += gcnew System::EventHandler(this, &FormulaireGestionPersonnel::FormulaireGestionPersonnel_Load);
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            this->ResumeLayout(false);

        }
#pragma endregion

    private:
        NS_services::gestionPersonnel^ gestionDuPersonnel;
        System::Char choixFonction;

    private: System::Void FormulaireGestionPersonnel_Load(System::Object^ sender, System::EventArgs^ e) {
        this->gestionDuPersonnel = gcnew NS_services::gestionPersonnel;
        choixFonction = 'N';
    }
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        this->choixFonction = 'C';
    }
    private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void button5_Click_1(System::Object^ sender, System::EventArgs^ e) {
        this->Close();
    }

    private: System::Void button_valider_Click(System::Object^ sender, System::EventArgs^ e) {
        if (this->choixFonction == 'C') {
            System::Int64 NouvelID = gestionDuPersonnel->createPersonnel(
                this->nomTextBox->Text,
                this->prenomTextBox->Text,
                this->nRueTextBox->Text,
                this->nomRueTextBox->Text,
                this->villeTextBox->Text,
                this->idSuperieurTextBox->Text,
                this->embaucheTextBox->Value.ToString(L"yyyy-MM-dd")
            );
            Console::WriteLine(this->embaucheTextBox->Value.ToString(L"yyyy-MM-dd"));
            if (NouvelID == -1) this->idPersonnelTextBox->Text = "Erreur lors de la création";
            else this->idPersonnelTextBox->Text = NouvelID.ToString();
        }
        else if (this->choixFonction == 'M') {
            if (this->gestionDuPersonnel->modifyPersonnel(
                this->idPersonnelTextBox->Text,
                this->nomTextBox->Text,
                this->prenomTextBox->Text,
                this->idSuperieurTextBox->Text,
                this->embaucheTextBox->Value.ToString(L"yyyy-MM-dd")
            ) && this->gestionDuPersonnel->modifierAdressePersonnel(
                this->idPersonnelTextBox->Text,
                this->nRueTextBox->Text,
                this->nomRueTextBox->Text,
                this->villeTextBox->Text
            ))
                MessageBox::Show("Modification réussie", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
            else
                MessageBox::Show("Echec de la modification");        
        }
        else if (this->choixFonction == 'S') {
            if(this->gestionDuPersonnel->supprimerPersonnel(
                this->idPersonnelTextBox->Text
            ))
                MessageBox::Show("Suppression réussie", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
            else
                MessageBox::Show("Echec de la suppression");
        }
        //personnel.setSuperieur() TO DO 
    }
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
    this->choixFonction = 'M';
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
    this->choixFonction = 'S';
}
};
}
