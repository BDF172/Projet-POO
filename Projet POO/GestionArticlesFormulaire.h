#pragma once

#include "Articles.h"
#include "gestionValeurs.h"
#include "gestionArticles.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de GestionArticlesFormulaire
	/// </summary>
	public ref class GestionArticlesFormulaire : public System::Windows::Forms::Form
	{
	public:
		GestionArticlesFormulaire(void)
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
		~GestionArticlesFormulaire()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;

	private: System::Windows::Forms::Panel^ panel1;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ idTextBox;

	private: System::Windows::Forms::Button^ button_valider;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ nomTextBox;


	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ prixTextBox;


	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::ComboBox^ tvaComboBox;
	private: System::Windows::Forms::TextBox^ coutTextBox;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ seuilTextBox;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ stockTextBox;

	private: System::Windows::Forms::Label^ label4;


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
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->stockTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->coutTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->seuilTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tvaComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->prixTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->idTextBox = (gcnew System::Windows::Forms::TextBox());
			this->button_valider = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->nomTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
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
			this->button1->Location = System::Drawing::Point(17, 18);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(152, 133);
			this->button1->TabIndex = 98;
			this->button1->Text = L"Creer Article";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &GestionArticlesFormulaire::button1_Click);
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
			this->button4->Location = System::Drawing::Point(17, 486);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(152, 146);
			this->button4->TabIndex = 103;
			this->button4->Text = L"Afficher Article";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &GestionArticlesFormulaire::button4_Click);
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
			this->button2->Location = System::Drawing::Point(17, 168);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(152, 141);
			this->button2->TabIndex = 99;
			this->button2->Text = L"Modifier Article";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &GestionArticlesFormulaire::button2_Click);
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
			this->button3->Location = System::Drawing::Point(17, 328);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(152, 142);
			this->button3->TabIndex = 102;
			this->button3->Text = L"Supprimer Article";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &GestionArticlesFormulaire::button3_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->stockTextBox);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->coutTextBox);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->seuilTextBox);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->tvaComboBox);
			this->panel1->Controls->Add(this->prixTextBox);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->label15);
			this->panel1->Controls->Add(this->idTextBox);
			this->panel1->Controls->Add(this->button_valider);
			this->panel1->Controls->Add(this->label14);
			this->panel1->Controls->Add(this->nomTextBox);
			this->panel1->Controls->Add(this->label13);
			this->panel1->Location = System::Drawing::Point(747, 17);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(335, 615);
			this->panel1->TabIndex = 101;
			// 
			// stockTextBox
			// 
			this->stockTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->stockTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stockTextBox->ForeColor = System::Drawing::Color::White;
			this->stockTextBox->Location = System::Drawing::Point(2, 385);
			this->stockTextBox->Margin = System::Windows::Forms::Padding(2);
			this->stockTextBox->Name = L"stockTextBox";
			this->stockTextBox->Size = System::Drawing::Size(308, 26);
			this->stockTextBox->TabIndex = 110;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Consolas", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->label4->Location = System::Drawing::Point(-4, 362);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(340, 22);
			this->label4->TabIndex = 109;
			this->label4->Text = L"Quantite à rajouter dans le stock";
			// 
			// coutTextBox
			// 
			this->coutTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->coutTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->coutTextBox->ForeColor = System::Drawing::Color::White;
			this->coutTextBox->Location = System::Drawing::Point(2, 253);
			this->coutTextBox->Margin = System::Windows::Forms::Padding(2);
			this->coutTextBox->Name = L"coutTextBox";
			this->coutTextBox->Size = System::Drawing::Size(308, 26);
			this->coutTextBox->TabIndex = 108;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Consolas", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->label3->Location = System::Drawing::Point(-2, 230);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(50, 22);
			this->label3->TabIndex = 107;
			this->label3->Text = L"Cout";
			// 
			// seuilTextBox
			// 
			this->seuilTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->seuilTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->seuilTextBox->ForeColor = System::Drawing::Color::White;
			this->seuilTextBox->Location = System::Drawing::Point(2, 320);
			this->seuilTextBox->Margin = System::Windows::Forms::Padding(2);
			this->seuilTextBox->Name = L"seuilTextBox";
			this->seuilTextBox->Size = System::Drawing::Size(308, 26);
			this->seuilTextBox->TabIndex = 106;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Consolas", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->label2->Location = System::Drawing::Point(-2, 297);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(290, 22);
			this->label2->TabIndex = 105;
			this->label2->Text = L"Seuil de réapprovisionnement";
			// 
			// tvaComboBox
			// 
			this->tvaComboBox->FormattingEnabled = true;
			this->tvaComboBox->Location = System::Drawing::Point(2, 454);
			this->tvaComboBox->Margin = System::Windows::Forms::Padding(1);
			this->tvaComboBox->Name = L"tvaComboBox";
			this->tvaComboBox->Size = System::Drawing::Size(307, 21);
			this->tvaComboBox->TabIndex = 104;
			// 
			// prixTextBox
			// 
			this->prixTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->prixTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->prixTextBox->ForeColor = System::Drawing::Color::White;
			this->prixTextBox->Location = System::Drawing::Point(2, 189);
			this->prixTextBox->Margin = System::Windows::Forms::Padding(2);
			this->prixTextBox->Name = L"prixTextBox";
			this->prixTextBox->Size = System::Drawing::Size(308, 26);
			this->prixTextBox->TabIndex = 103;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Consolas", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->label1->Location = System::Drawing::Point(2, 432);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 22);
			this->label1->TabIndex = 101;
			this->label1->Text = L"TVA";
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
			this->button5->Location = System::Drawing::Point(237, 9);
			this->button5->Margin = System::Windows::Forms::Padding(0);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(91, 34);
			this->button5->TabIndex = 99;
			this->button5->Text = L"Retour";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &GestionArticlesFormulaire::button5_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Consolas", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->label15->Location = System::Drawing::Point(-2, 48);
			this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(110, 22);
			this->label15->TabIndex = 64;
			this->label15->Text = L"ID Article";
			// 
			// idTextBox
			// 
			this->idTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->idTextBox->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->idTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->idTextBox->ForeColor = System::Drawing::Color::White;
			this->idTextBox->Location = System::Drawing::Point(2, 71);
			this->idTextBox->Margin = System::Windows::Forms::Padding(2);
			this->idTextBox->Name = L"idTextBox";
			this->idTextBox->Size = System::Drawing::Size(308, 26);
			this->idTextBox->TabIndex = 63;
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
			this->button_valider->Location = System::Drawing::Point(2, 504);
			this->button_valider->Margin = System::Windows::Forms::Padding(2);
			this->button_valider->Name = L"button_valider";
			this->button_valider->Size = System::Drawing::Size(310, 52);
			this->button_valider->TabIndex = 62;
			this->button_valider->Text = L"Valider";
			this->button_valider->UseVisualStyleBackColor = false;
			this->button_valider->Click += gcnew System::EventHandler(this, &GestionArticlesFormulaire::button_valider_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Consolas", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->label14->Location = System::Drawing::Point(-2, 107);
			this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(40, 22);
			this->label14->TabIndex = 47;
			this->label14->Text = L"Nom";
			// 
			// nomTextBox
			// 
			this->nomTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->nomTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nomTextBox->ForeColor = System::Drawing::Color::White;
			this->nomTextBox->Location = System::Drawing::Point(2, 130);
			this->nomTextBox->Margin = System::Windows::Forms::Padding(2);
			this->nomTextBox->Name = L"nomTextBox";
			this->nomTextBox->Size = System::Drawing::Size(308, 26);
			this->nomTextBox->TabIndex = 46;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Consolas", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->label13->Location = System::Drawing::Point(-2, 166);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(50, 22);
			this->label13->TabIndex = 49;
			this->label13->Text = L"Prix";
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->ForeColor = System::Drawing::Color::White;
			this->richTextBox1->Location = System::Drawing::Point(207, 17);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(2);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(505, 606);
			this->richTextBox1->TabIndex = 112;
			this->richTextBox1->Text = L"";
			// 
			// GestionArticlesFormulaire
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->ClientSize = System::Drawing::Size(1089, 666);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"GestionArticlesFormulaire";
			this->Text = L"GestionArticlesFormulaire";
			this->Load += gcnew System::EventHandler(this, &GestionArticlesFormulaire::GestionArticlesFormulaire_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private:
		System::Collections::Generic::Dictionary<System::String^, System::String^>^ DicoTVA;
		NS_services::gestionValeurs^ gestionDesValeurs;
		NS_services::gestionArticles^ gestionDesArticles;
		System::Char choixFonction;

	private:
		System::Void GestionArticlesFormulaire_Load(System::Object^ sender, System::EventArgs^ e);
		System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void button4_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void button_valider_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void button5_Click(System::Object^ sender, System::EventArgs^ e);

};
}
