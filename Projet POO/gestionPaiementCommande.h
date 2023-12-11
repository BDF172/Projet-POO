#pragma once

#include "gestionCommandes.h"
#include "gestionValeurs.h"
#include "fonctions.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de gestionPaiementCommande
	/// </summary>
	public ref class gestionPaiementCommande : public System::Windows::Forms::Form
	{
	public:
		gestionPaiementCommande(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
			label1->Visible = false;
			montantTextBox->Visible = false;
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~gestionPaiementCommande()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TextBox^ reference;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::RadioButton^ entierRadioBouton;
	private: System::Windows::Forms::RadioButton^ partielRadioBouton;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button_valider;
	private: System::Windows::Forms::TextBox^ montantTextBox;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ montantLabel;
	private: System::Windows::Forms::ComboBox^ comboBox1;

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
			this->reference = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->entierRadioBouton = (gcnew System::Windows::Forms::RadioButton());
			this->partielRadioBouton = (gcnew System::Windows::Forms::RadioButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button_valider = (gcnew System::Windows::Forms::Button());
			this->montantTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->montantLabel = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// reference
			// 
			this->reference->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->reference->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->reference->ForeColor = System::Drawing::Color::White;
			this->reference->Location = System::Drawing::Point(42, 126);
			this->reference->Margin = System::Windows::Forms::Padding(4);
			this->reference->Name = L"reference";
			this->reference->Size = System::Drawing::Size(561, 26);
			this->reference->TabIndex = 141;
			this->reference->TextChanged += gcnew System::EventHandler(this, &gestionPaiementCommande::reference_TextChanged);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Consolas", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->label14->Location = System::Drawing::Point(39, 74);
			this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(190, 22);
			this->label14->TabIndex = 140;
			this->label14->Text = L"Référence commande";
			// 
			// entierRadioBouton
			// 
			this->entierRadioBouton->AutoSize = true;
			this->entierRadioBouton->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->entierRadioBouton->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold));
			this->entierRadioBouton->ForeColor = System::Drawing::Color::White;
			this->entierRadioBouton->Location = System::Drawing::Point(42, 295);
			this->entierRadioBouton->Margin = System::Windows::Forms::Padding(4);
			this->entierRadioBouton->Name = L"entierRadioBouton";
			this->entierRadioBouton->Size = System::Drawing::Size(153, 23);
			this->entierRadioBouton->TabIndex = 143;
			this->entierRadioBouton->TabStop = true;
			this->entierRadioBouton->Text = L"Payer le reste";
			this->entierRadioBouton->UseVisualStyleBackColor = true;
			this->entierRadioBouton->UseWaitCursor = true;
			this->entierRadioBouton->CheckedChanged += gcnew System::EventHandler(this, &gestionPaiementCommande::fRadioBouton_CheckedChanged);
			// 
			// partielRadioBouton
			// 
			this->partielRadioBouton->AutoSize = true;
			this->partielRadioBouton->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->partielRadioBouton->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold));
			this->partielRadioBouton->ForeColor = System::Drawing::Color::White;
			this->partielRadioBouton->Location = System::Drawing::Point(42, 336);
			this->partielRadioBouton->Margin = System::Windows::Forms::Padding(4);
			this->partielRadioBouton->Name = L"partielRadioBouton";
			this->partielRadioBouton->Size = System::Drawing::Size(234, 23);
			this->partielRadioBouton->TabIndex = 144;
			this->partielRadioBouton->TabStop = true;
			this->partielRadioBouton->Text = L"Payer un montant choisi";
			this->partielRadioBouton->UseVisualStyleBackColor = true;
			this->partielRadioBouton->UseWaitCursor = true;
			this->partielRadioBouton->CheckedChanged += gcnew System::EventHandler(this, &gestionPaiementCommande::lRadioBouton_CheckedChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Consolas", 16, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->label2->Location = System::Drawing::Point(37, 227);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(108, 26);
			this->label2->TabIndex = 142;
			this->label2->Text = L"Paiement";
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
			this->button_valider->Location = System::Drawing::Point(388, 571);
			this->button_valider->Margin = System::Windows::Forms::Padding(4);
			this->button_valider->Name = L"button_valider";
			this->button_valider->Size = System::Drawing::Size(568, 96);
			this->button_valider->TabIndex = 145;
			this->button_valider->Text = L"Valider";
			this->button_valider->UseVisualStyleBackColor = false;
			this->button_valider->Click += gcnew System::EventHandler(this, &gestionPaiementCommande::button_valider_Click);
			// 
			// montantTextBox
			// 
			this->montantTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->montantTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->montantTextBox->ForeColor = System::Drawing::Color::White;
			this->montantTextBox->Location = System::Drawing::Point(48, 458);
			this->montantTextBox->Margin = System::Windows::Forms::Padding(4);
			this->montantTextBox->Name = L"montantTextBox";
			this->montantTextBox->Size = System::Drawing::Size(561, 26);
			this->montantTextBox->TabIndex = 147;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Consolas", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->label1->Location = System::Drawing::Point(44, 406);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(180, 22);
			this->label1->TabIndex = 146;
			this->label1->Text = L"Montant à rentrer";
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
			this->button5->Location = System::Drawing::Point(983, 39);
			this->button5->Margin = System::Windows::Forms::Padding(0);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(311, 68);
			this->button5->TabIndex = 148;
			this->button5->Text = L"Retour";
			this->button5->UseVisualStyleBackColor = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Consolas", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->label3->Location = System::Drawing::Point(653, 420);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(180, 22);
			this->label3->TabIndex = 149;
			this->label3->Text = L"Montant à payer :";
			// 
			// montantLabel
			// 
			this->montantLabel->AutoSize = true;
			this->montantLabel->Font = (gcnew System::Drawing::Font(L"Consolas", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->montantLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->montantLabel->Location = System::Drawing::Point(653, 461);
			this->montantLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->montantLabel->Name = L"montantLabel";
			this->montantLabel->Size = System::Drawing::Size(320, 22);
			this->montantLabel->TabIndex = 150;
			this->montantLabel->Text = L"*Veuillez entrer une référence*";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(657, 286);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(399, 32);
			this->comboBox1->TabIndex = 151;
			// 
			// gestionPaiementCommande
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->ClientSize = System::Drawing::Size(1336, 735);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->montantLabel);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->montantTextBox);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button_valider);
			this->Controls->Add(this->entierRadioBouton);
			this->Controls->Add(this->partielRadioBouton);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->reference);
			this->Controls->Add(this->label14);
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"gestionPaiementCommande";
			this->Text = L"gestionPaiementCommande";
			this->Load += gcnew System::EventHandler(this, &gestionPaiementCommande::gestionPaiementCommande_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		NS_services::gestionCommandes^ gestionDesCommandes;
		NS_services::gestionValeurs^ gestionDesValeurs;
		System::Collections::Generic::Dictionary<String^, String^>^ DicoMoyens;

private:
	System::Void button5_Click(System::Object^ sender, System::EventArgs^ e);
	System::Void lRadioBouton_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	System::Void gestionPaiementCommande_Load(System::Object^ sender, System::EventArgs^ e);
	System::Void fRadioBouton_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	System::Void button_valider_Click(System::Object^ sender, System::EventArgs^ e);
	System::Void reference_TextChanged(System::Object^ sender, System::EventArgs^ e);
};
}
