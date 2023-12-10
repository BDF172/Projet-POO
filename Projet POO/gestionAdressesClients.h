#pragma once

#include "gestionClient.h"
#include "gestionValeurs.h"
#include "Client.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de gestionAdressesClients
	/// </summary>
	public ref class gestionAdressesClients : public System::Windows::Forms::Form
	{
	public:
		gestionAdressesClients(void)
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
		~gestionAdressesClients()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ adressComboBox;

	private: System::Windows::Forms::ComboBox^ villeComboBox;



	private: System::Windows::Forms::ComboBox^ paysComboBox;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button_valider;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ rueTextBox;
	private: System::Windows::Forms::TextBox^ nRueTextBox;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::RadioButton^ lRadioBouton;


	private: System::Windows::Forms::RadioButton^ fRadioBouton;







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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->adressComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->villeComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->paysComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button_valider = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->rueTextBox = (gcnew System::Windows::Forms::TextBox());
			this->nRueTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->lRadioBouton = (gcnew System::Windows::Forms::RadioButton());
			this->fRadioBouton = (gcnew System::Windows::Forms::RadioButton());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Consolas", 16, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->label2->Location = System::Drawing::Point(53, 247);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(180, 26);
			this->label2->TabIndex = 119;
			this->label2->Text = L"Type d\'adresse";
			// 
			// adressComboBox
			// 
			this->adressComboBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->adressComboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->adressComboBox->ForeColor = System::Drawing::Color::White;
			this->adressComboBox->FormattingEnabled = true;
			this->adressComboBox->IntegralHeight = false;
			this->adressComboBox->Location = System::Drawing::Point(59, 506);
			this->adressComboBox->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->adressComboBox->Name = L"adressComboBox";
			this->adressComboBox->Size = System::Drawing::Size(560, 28);
			this->adressComboBox->TabIndex = 123;
			this->adressComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &gestionAdressesClients::adressComboBox_SelectedIndexChanged);
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
			this->villeComboBox->Location = System::Drawing::Point(768, 713);
			this->villeComboBox->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->villeComboBox->Name = L"villeComboBox";
			this->villeComboBox->Size = System::Drawing::Size(558, 28);
			this->villeComboBox->TabIndex = 128;
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
			this->paysComboBox->Location = System::Drawing::Point(768, 506);
			this->paysComboBox->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->paysComboBox->Name = L"paysComboBox";
			this->paysComboBox->Size = System::Drawing::Size(558, 28);
			this->paysComboBox->TabIndex = 127;
			this->paysComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &gestionAdressesClients::paysComboBox_SelectedIndexChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Consolas", 16, System::Drawing::FontStyle::Bold));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->label7->Location = System::Drawing::Point(772, 641);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(72, 26);
			this->label7->TabIndex = 125;
			this->label7->Text = L"Ville";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Consolas", 16, System::Drawing::FontStyle::Bold));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->label8->Location = System::Drawing::Point(772, 439);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(60, 26);
			this->label8->TabIndex = 126;
			this->label8->Text = L"Pays";
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
			this->button_valider->Location = System::Drawing::Point(446, 820);
			this->button_valider->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button_valider->Name = L"button_valider";
			this->button_valider->Size = System::Drawing::Size(512, 87);
			this->button_valider->TabIndex = 129;
			this->button_valider->Text = L"Valider";
			this->button_valider->UseVisualStyleBackColor = false;
			this->button_valider->Click += gcnew System::EventHandler(this, &gestionAdressesClients::button_valider_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Consolas", 16, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->label1->Location = System::Drawing::Point(59, 439);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(228, 26);
			this->label1->TabIndex = 130;
			this->label1->Text = L"Adresse à modifier";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Consolas", 16, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->label3->Location = System::Drawing::Point(772, 247);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(48, 26);
			this->label3->TabIndex = 137;
			this->label3->Text = L"Rue";
			// 
			// rueTextBox
			// 
			this->rueTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->rueTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rueTextBox->ForeColor = System::Drawing::Color::White;
			this->rueTextBox->Location = System::Drawing::Point(768, 338);
			this->rueTextBox->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->rueTextBox->Name = L"rueTextBox";
			this->rueTextBox->Size = System::Drawing::Size(558, 26);
			this->rueTextBox->TabIndex = 136;
			// 
			// nRueTextBox
			// 
			this->nRueTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->nRueTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nRueTextBox->ForeColor = System::Drawing::Color::White;
			this->nRueTextBox->Location = System::Drawing::Point(64, 714);
			this->nRueTextBox->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->nRueTextBox->Name = L"nRueTextBox";
			this->nRueTextBox->Size = System::Drawing::Size(556, 26);
			this->nRueTextBox->TabIndex = 135;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Consolas", 16, System::Drawing::FontStyle::Bold));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->label6->Location = System::Drawing::Point(62, 641);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(120, 26);
			this->label6->TabIndex = 134;
			this->label6->Text = L"N° de rue";
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
			this->button5->Location = System::Drawing::Point(59, 65);
			this->button5->Margin = System::Windows::Forms::Padding(0);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(235, 76);
			this->button5->TabIndex = 138;
			this->button5->Text = L"Retour";
			this->button5->UseVisualStyleBackColor = false;
			// 
			// lRadioBouton
			// 
			this->lRadioBouton->AutoSize = true;
			this->lRadioBouton->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->lRadioBouton->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold));
			this->lRadioBouton->ForeColor = System::Drawing::Color::White;
			this->lRadioBouton->Location = System::Drawing::Point(356, 338);
			this->lRadioBouton->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->lRadioBouton->Name = L"lRadioBouton";
			this->lRadioBouton->Size = System::Drawing::Size(108, 23);
			this->lRadioBouton->TabIndex = 121;
			this->lRadioBouton->TabStop = true;
			this->lRadioBouton->Text = L"Livraison";
			this->lRadioBouton->UseVisualStyleBackColor = true;
			this->lRadioBouton->UseWaitCursor = true;
			this->lRadioBouton->CheckedChanged += gcnew System::EventHandler(this, &gestionAdressesClients::lRadioBouton_CheckedChanged);
			// 
			// fRadioBouton
			// 
			this->fRadioBouton->AutoSize = true;
			this->fRadioBouton->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->fRadioBouton->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold));
			this->fRadioBouton->ForeColor = System::Drawing::Color::White;
			this->fRadioBouton->Location = System::Drawing::Point(68, 338);
			this->fRadioBouton->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->fRadioBouton->Name = L"fRadioBouton";
			this->fRadioBouton->Size = System::Drawing::Size(126, 23);
			this->fRadioBouton->TabIndex = 120;
			this->fRadioBouton->TabStop = true;
			this->fRadioBouton->Text = L"Facturation";
			this->fRadioBouton->UseVisualStyleBackColor = true;
			this->fRadioBouton->UseWaitCursor = true;
			this->fRadioBouton->CheckedChanged += gcnew System::EventHandler(this, &gestionAdressesClients::radioButton1_CheckedChanged);
			// 
			// gestionAdressesClients
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->ClientSize = System::Drawing::Size(1392, 973);
			this->Controls->Add(this->fRadioBouton);
			this->Controls->Add(this->lRadioBouton);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->rueTextBox);
			this->Controls->Add(this->nRueTextBox);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button_valider);
			this->Controls->Add(this->villeComboBox);
			this->Controls->Add(this->paysComboBox);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->adressComboBox);
			this->Controls->Add(this->label2);
			this->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->Name = L"gestionAdressesClients";
			this->Text = L"gestionAdressesClients";
			this->Load += gcnew System::EventHandler(this, &gestionAdressesClients::gestionAdressesClients_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:
		NS_composants::Client^ clientToModify;
		NS_composants::adresseC^ adressToDelete;

	private:
		System::Collections::Generic::Dictionary<String^, String^>^ adressesF;
		System::Collections::Generic::Dictionary<String^, String^>^ adressesL;
		System::Collections::Generic::Dictionary<String^, String^>^ DicoVilles;
		System::Collections::Generic::Dictionary<String^, String^>^ DicoPays;
		NS_composants::adresseC^ tempAddress;
		NS_services::gestionClient^ gestionDesClients;
		NS_services::gestionValeurs^ gestionDesValeurs;

	private:
		System::Void button5_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void gestionAdressesClients_Load(System::Object^ sender, System::EventArgs^ e);
		System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
		System::Void lRadioBouton_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
		System::Void adressComboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
		System::Void button_valider_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void paysComboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
	};
}
