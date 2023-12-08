#pragma once

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de ajouterArticle
	/// </summary>
	public ref class ajouterArticle : public System::Windows::Forms::Form
	{
	public:
		ajouterArticle(void)
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
		~ajouterArticle()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Button^ button_valider;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button_valider = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->label15);
			this->panel1->Controls->Add(this->textBox7);
			this->panel1->Controls->Add(this->button_valider);
			this->panel1->Location = System::Drawing::Point(958, 23);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(502, 946);
			this->panel1->TabIndex = 107;
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
			this->button_valider->Location = System::Drawing::Point(10, 852);
			this->button_valider->Name = L"button_valider";
			this->button_valider->Size = System::Drawing::Size(465, 80);
			this->button_valider->TabIndex = 62;
			this->button_valider->Text = L"Valider";
			this->button_valider->UseVisualStyleBackColor = false;
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->textBox7->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBox7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->textBox7->Location = System::Drawing::Point(17, 75);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(460, 26);
			this->textBox7->TabIndex = 63;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Consolas", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->label15->Location = System::Drawing::Point(22, 20);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(165, 33);
			this->label15->TabIndex = 64;
			this->label15->Text = L"ID Article";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Consolas", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->label1->Location = System::Drawing::Point(22, 127);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(285, 33);
			this->label1->TabIndex = 101;
			this->label1->Text = L"Quantité à ajouter";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->textBox1->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->textBox1->Location = System::Drawing::Point(17, 182);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(460, 26);
			this->textBox1->TabIndex = 100;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Consolas", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->label2->Location = System::Drawing::Point(22, 252);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(300, 33);
			this->label2->TabIndex = 103;
			this->label2->Text = L"Nature de l\'article";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->textBox2->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->textBox2->Location = System::Drawing::Point(17, 307);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(460, 26);
			this->textBox2->TabIndex = 102;
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->ForeColor = System::Drawing::Color::White;
			this->richTextBox1->Location = System::Drawing::Point(87, 23);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(758, 932);
			this->richTextBox1->TabIndex = 112;
			this->richTextBox1->Text = L"";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Consolas", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->label3->Location = System::Drawing::Point(22, 534);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(285, 33);
			this->label3->TabIndex = 105;
			this->label3->Text = L"Rechercher Article";
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->textBox3->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBox3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->textBox3->Location = System::Drawing::Point(17, 589);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(460, 26);
			this->textBox3->TabIndex = 104;
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
			this->button5->Location = System::Drawing::Point(352, 0);
			this->button5->Margin = System::Windows::Forms::Padding(0);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(136, 53);
			this->button5->TabIndex = 99;
			this->button5->Text = L"Retour";
			this->button5->UseVisualStyleBackColor = false;
			// 
			// ajouterArticle
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->ClientSize = System::Drawing::Size(1489, 995);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->panel1);
			this->Name = L"ajouterArticle";
			this->Text = L"ajouterArticle";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
