#pragma once

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
			textBox1->Visible = false;
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
	private: System::Windows::Forms::RadioButton^ fRadioBouton;
	private: System::Windows::Forms::RadioButton^ lRadioBouton;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button_valider;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button5;
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
			this->fRadioBouton = (gcnew System::Windows::Forms::RadioButton());
			this->lRadioBouton = (gcnew System::Windows::Forms::RadioButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button_valider = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// reference
			// 
			this->reference->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->reference->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->reference->ForeColor = System::Drawing::Color::White;
			this->reference->Location = System::Drawing::Point(23, 68);
			this->reference->Margin = System::Windows::Forms::Padding(2);
			this->reference->Name = L"reference";
			this->reference->Size = System::Drawing::Size(308, 26);
			this->reference->TabIndex = 141;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Consolas", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->label14->Location = System::Drawing::Point(21, 40);
			this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(190, 22);
			this->label14->TabIndex = 140;
			this->label14->Text = L"Référence commande";
			this->label14->Click += gcnew System::EventHandler(this, &gestionPaiementCommande::label14_Click);
			// 
			// fRadioBouton
			// 
			this->fRadioBouton->AutoSize = true;
			this->fRadioBouton->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->fRadioBouton->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold));
			this->fRadioBouton->ForeColor = System::Drawing::Color::White;
			this->fRadioBouton->Location = System::Drawing::Point(28, 172);
			this->fRadioBouton->Margin = System::Windows::Forms::Padding(2);
			this->fRadioBouton->Name = L"fRadioBouton";
			this->fRadioBouton->Size = System::Drawing::Size(153, 23);
			this->fRadioBouton->TabIndex = 143;
			this->fRadioBouton->TabStop = true;
			this->fRadioBouton->Text = L"Payer le reste";
			this->fRadioBouton->UseVisualStyleBackColor = true;
			this->fRadioBouton->UseWaitCursor = true;
			this->fRadioBouton->CheckedChanged += gcnew System::EventHandler(this, &gestionPaiementCommande::fRadioBouton_CheckedChanged);
			// 
			// lRadioBouton
			// 
			this->lRadioBouton->AutoSize = true;
			this->lRadioBouton->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->lRadioBouton->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold));
			this->lRadioBouton->ForeColor = System::Drawing::Color::White;
			this->lRadioBouton->Location = System::Drawing::Point(199, 172);
			this->lRadioBouton->Margin = System::Windows::Forms::Padding(2);
			this->lRadioBouton->Name = L"lRadioBouton";
			this->lRadioBouton->Size = System::Drawing::Size(234, 23);
			this->lRadioBouton->TabIndex = 144;
			this->lRadioBouton->TabStop = true;
			this->lRadioBouton->Text = L"Payer un montant choisi";
			this->lRadioBouton->UseVisualStyleBackColor = true;
			this->lRadioBouton->UseWaitCursor = true;
			this->lRadioBouton->CheckedChanged += gcnew System::EventHandler(this, &gestionPaiementCommande::lRadioBouton_CheckedChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Consolas", 16, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->label2->Location = System::Drawing::Point(20, 123);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(108, 26);
			this->label2->TabIndex = 142;
			this->label2->Text = L"Paiement";
			this->label2->Click += gcnew System::EventHandler(this, &gestionPaiementCommande::label2_Click);
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
			this->button_valider->Location = System::Drawing::Point(123, 313);
			this->button_valider->Margin = System::Windows::Forms::Padding(2);
			this->button_valider->Name = L"button_valider";
			this->button_valider->Size = System::Drawing::Size(310, 52);
			this->button_valider->TabIndex = 145;
			this->button_valider->Text = L"Valider";
			this->button_valider->UseVisualStyleBackColor = false;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::White;
			this->textBox1->Location = System::Drawing::Point(26, 248);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(308, 26);
			this->textBox1->TabIndex = 147;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Consolas", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->label1->Location = System::Drawing::Point(24, 220);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(180, 22);
			this->label1->TabIndex = 146;
			this->label1->Text = L"Montant à rentrer";
			this->label1->Click += gcnew System::EventHandler(this, &gestionPaiementCommande::label1_Click);
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
			this->button5->Location = System::Drawing::Point(442, 21);
			this->button5->Margin = System::Windows::Forms::Padding(0);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(128, 37);
			this->button5->TabIndex = 148;
			this->button5->Text = L"Retour";
			this->button5->UseVisualStyleBackColor = false;
			// 
			// gestionPaiementCommande
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->ClientSize = System::Drawing::Size(593, 398);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button_valider);
			this->Controls->Add(this->fRadioBouton);
			this->Controls->Add(this->lRadioBouton);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->reference);
			this->Controls->Add(this->label14);
			this->Name = L"gestionPaiementCommande";
			this->Text = L"gestionPaiementCommande";
			this->Load += gcnew System::EventHandler(this, &gestionPaiementCommande::gestionPaiementCommande_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void lRadioBouton_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		label1->Visible = true;
		textBox1->Visible = true;
	}
private: System::Void gestionPaiementCommande_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void fRadioBouton_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	label1->Visible = false;
	textBox1->Visible = false;
}
};
}
