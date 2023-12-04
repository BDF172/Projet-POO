#pragma once

#include "gestion_personnel.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de principal
	/// </summary>
	public ref class principal : public System::Windows::Forms::Form
	{
	public:
		principal(void)
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
		~principal()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:






	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ gestion_personnel;
	private: System::Windows::Forms::TabPage^ gestion_client;
	private: System::Windows::Forms::TabPage^ gestion_commande;
	private: System::Windows::Forms::TabPage^ gestion_stock;
	private: System::Windows::Forms::TabPage^ gestion_statistique;
	private: System::Windows::Forms::Button^ button_afficher_personnel;
	private: System::Windows::Forms::Button^ button_supprimer_personnel;
	private: System::Windows::Forms::Button^ button_modifier_personnel;

	private: System::Windows::Forms::SplitContainer^ splitContainer1;
	private: System::Windows::Forms::Button^ button_valider;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker_personnel;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button1;


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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->gestion_personnel = (gcnew System::Windows::Forms::TabPage());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->button_valider = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker_personnel = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button_afficher_personnel = (gcnew System::Windows::Forms::Button());
			this->button_supprimer_personnel = (gcnew System::Windows::Forms::Button());
			this->button_modifier_personnel = (gcnew System::Windows::Forms::Button());
			this->gestion_client = (gcnew System::Windows::Forms::TabPage());
			this->gestion_commande = (gcnew System::Windows::Forms::TabPage());
			this->gestion_stock = (gcnew System::Windows::Forms::TabPage());
			this->gestion_statistique = (gcnew System::Windows::Forms::TabPage());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->gestion_personnel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->gestion_personnel);
			this->tabControl1->Controls->Add(this->gestion_client);
			this->tabControl1->Controls->Add(this->gestion_commande);
			this->tabControl1->Controls->Add(this->gestion_stock);
			this->tabControl1->Controls->Add(this->gestion_statistique);
			this->tabControl1->ImeMode = System::Windows::Forms::ImeMode::Off;
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1880, 1132);
			this->tabControl1->TabIndex = 5;
			// 
			// gestion_personnel
			// 
			this->gestion_personnel->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->gestion_personnel->Controls->Add(this->button1);
			this->gestion_personnel->Controls->Add(this->splitContainer1);
			this->gestion_personnel->Controls->Add(this->button_afficher_personnel);
			this->gestion_personnel->Controls->Add(this->button_supprimer_personnel);
			this->gestion_personnel->Controls->Add(this->button_modifier_personnel);
			this->gestion_personnel->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->gestion_personnel->Location = System::Drawing::Point(4, 29);
			this->gestion_personnel->Name = L"gestion_personnel";
			this->gestion_personnel->Padding = System::Windows::Forms::Padding(3);
			this->gestion_personnel->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->gestion_personnel->Size = System::Drawing::Size(1872, 1099);
			this->gestion_personnel->TabIndex = 0;
			this->gestion_personnel->Text = L"Gestion Personnel";
			// 
			// splitContainer1
			// 
			this->splitContainer1->Location = System::Drawing::Point(360, 20);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->splitContainer1->Panel1->Controls->Add(this->button_valider);
			this->splitContainer1->Panel1->Controls->Add(this->label1);
			this->splitContainer1->Panel1->Controls->Add(this->label8);
			this->splitContainer1->Panel1->Controls->Add(this->textBox1);
			this->splitContainer1->Panel1->Controls->Add(this->comboBox1);
			this->splitContainer1->Panel1->Controls->Add(this->textBox2);
			this->splitContainer1->Panel1->Controls->Add(this->label7);
			this->splitContainer1->Panel1->Controls->Add(this->label2);
			this->splitContainer1->Panel1->Controls->Add(this->textBox6);
			this->splitContainer1->Panel1->Controls->Add(this->label3);
			this->splitContainer1->Panel1->Controls->Add(this->label6);
			this->splitContainer1->Panel1->Controls->Add(this->dateTimePicker_personnel);
			this->splitContainer1->Panel1->Controls->Add(this->textBox5);
			this->splitContainer1->Panel1->Controls->Add(this->textBox3);
			this->splitContainer1->Panel1->Controls->Add(this->label5);
			this->splitContainer1->Panel1->Controls->Add(this->label4);
			this->splitContainer1->Panel1->Controls->Add(this->textBox4);
			this->splitContainer1->Panel1->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->splitContainer1->Panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &principal::splitContainer1_Panel1_Paint_1);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->BackColor = System::Drawing::SystemColors::ControlDark;
			this->splitContainer1->Panel2->Controls->Add(this->dataGridView1);
			this->splitContainer1->Panel2->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->splitContainer1->Size = System::Drawing::Size(1499, 1065);
			this->splitContainer1->SplitterDistance = 499;
			this->splitContainer1->TabIndex = 26;
			// 
			// button_valider
			// 
			this->button_valider->BackColor = System::Drawing::SystemColors::Control;
			this->button_valider->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_valider->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button_valider->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_valider->Location = System::Drawing::Point(15, 969);
			this->button_valider->Name = L"button_valider";
			this->button_valider->Size = System::Drawing::Size(465, 80);
			this->button_valider->TabIndex = 43;
			this->button_valider->Text = L"Valider";
			this->button_valider->UseVisualStyleBackColor = false;
			this->button_valider->Click += gcnew System::EventHandler(this, &principal::button_valider_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label1->Location = System::Drawing::Point(23, 103);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(74, 32);
			this->label1->TabIndex = 28;
			this->label1->Text = L"Nom";
			this->label1->Click += gcnew System::EventHandler(this, &principal::label1_Click_1);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label8->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label8->Location = System::Drawing::Point(17, 754);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(78, 32);
			this->label8->TabIndex = 42;
			this->label8->Text = L"Pays";
			this->label8->Click += gcnew System::EventHandler(this, &principal::label8_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(15, 147);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(460, 26);
			this->textBox1->TabIndex = 27;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &principal::textBox1_TextChanged);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->IntegralHeight = false;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"France", L"Belgique", L"Canada" });
			this->comboBox1->Location = System::Drawing::Point(18, 801);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(457, 28);
			this->comboBox1->TabIndex = 41;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &principal::comboBox1_SelectedIndexChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(15, 235);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(460, 26);
			this->textBox2->TabIndex = 29;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &principal::textBox2_TextChanged_1);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label7->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label7->Location = System::Drawing::Point(17, 656);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(71, 32);
			this->label7->TabIndex = 40;
			this->label7->Text = L"Ville";
			this->label7->Click += gcnew System::EventHandler(this, &principal::label7_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label2->Location = System::Drawing::Point(21, 194);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(114, 32);
			this->label2->TabIndex = 30;
			this->label2->Text = L"Prénom";
			this->label2->Click += gcnew System::EventHandler(this, &principal::label2_Click_1);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(15, 708);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(460, 26);
			this->textBox6->TabIndex = 39;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &principal::textBox6_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label3->Location = System::Drawing::Point(19, 278);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(236, 32);
			this->label3->TabIndex = 31;
			this->label3->Text = L"Date d\'embauche";
			this->label3->Click += gcnew System::EventHandler(this, &principal::label3_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label6->Location = System::Drawing::Point(17, 564);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(219, 32);
			this->label6->TabIndex = 38;
			this->label6->Text = L"Rue et n° de rue";
			this->label6->Click += gcnew System::EventHandler(this, &principal::label6_Click);
			// 
			// dateTimePicker_personnel
			// 
			this->dateTimePicker_personnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->dateTimePicker_personnel->Location = System::Drawing::Point(15, 332);
			this->dateTimePicker_personnel->Name = L"dateTimePicker_personnel";
			this->dateTimePicker_personnel->Size = System::Drawing::Size(460, 35);
			this->dateTimePicker_personnel->TabIndex = 32;
			this->dateTimePicker_personnel->ValueChanged += gcnew System::EventHandler(this, &principal::dateTimePicker_personnel_ValueChanged);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(15, 617);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(460, 26);
			this->textBox5->TabIndex = 37;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &principal::textBox5_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(15, 434);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(460, 26);
			this->textBox3->TabIndex = 33;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &principal::textBox3_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label5->Location = System::Drawing::Point(17, 481);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(444, 32);
			this->label5->TabIndex = 36;
			this->label5->Text = L"Prénom du supérieur hiérarchique";
			this->label5->Click += gcnew System::EventHandler(this, &principal::label5_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label4->Location = System::Drawing::Point(17, 388);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(404, 32);
			this->label4->TabIndex = 34;
			this->label4->Text = L"Nom du supérieur hiérarchique";
			this->label4->Click += gcnew System::EventHandler(this, &principal::label4_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(15, 516);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(460, 26);
			this->textBox4->TabIndex = 35;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &principal::textBox4_TextChanged);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AccessibleRole = System::Windows::Forms::AccessibleRole::Sound;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(3, 3);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(990, 1059);
			this->dataGridView1->TabIndex = 1;
			// 
			// button_afficher_personnel
			// 
			this->button_afficher_personnel->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button_afficher_personnel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_afficher_personnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->button_afficher_personnel->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_afficher_personnel->Location = System::Drawing::Point(17, 821);
			this->button_afficher_personnel->Name = L"button_afficher_personnel";
			this->button_afficher_personnel->Size = System::Drawing::Size(319, 264);
			this->button_afficher_personnel->TabIndex = 25;
			this->button_afficher_personnel->Text = L"Afficher Personnel";
			this->button_afficher_personnel->UseVisualStyleBackColor = false;
			// 
			// button_supprimer_personnel
			// 
			this->button_supprimer_personnel->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button_supprimer_personnel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_supprimer_personnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->button_supprimer_personnel->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_supprimer_personnel->Location = System::Drawing::Point(17, 552);
			this->button_supprimer_personnel->Name = L"button_supprimer_personnel";
			this->button_supprimer_personnel->Size = System::Drawing::Size(319, 254);
			this->button_supprimer_personnel->TabIndex = 23;
			this->button_supprimer_personnel->Text = L"Supprimer Personnel";
			this->button_supprimer_personnel->UseVisualStyleBackColor = false;
			// 
			// button_modifier_personnel
			// 
			this->button_modifier_personnel->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button_modifier_personnel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_modifier_personnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->button_modifier_personnel->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_modifier_personnel->Location = System::Drawing::Point(17, 280);
			this->button_modifier_personnel->Name = L"button_modifier_personnel";
			this->button_modifier_personnel->Size = System::Drawing::Size(319, 255);
			this->button_modifier_personnel->TabIndex = 21;
			this->button_modifier_personnel->Text = L"Modifier Personnel";
			this->button_modifier_personnel->UseVisualStyleBackColor = false;
			// 
			// gestion_client
			// 
			this->gestion_client->Location = System::Drawing::Point(4, 29);
			this->gestion_client->Name = L"gestion_client";
			this->gestion_client->Padding = System::Windows::Forms::Padding(3);
			this->gestion_client->Size = System::Drawing::Size(1872, 1099);
			this->gestion_client->TabIndex = 1;
			this->gestion_client->Text = L"Gestion Client";
			this->gestion_client->UseVisualStyleBackColor = true;
			this->gestion_client->Click += gcnew System::EventHandler(this, &principal::gestion_client_Click);
			// 
			// gestion_commande
			// 
			this->gestion_commande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->gestion_commande->Location = System::Drawing::Point(4, 29);
			this->gestion_commande->Name = L"gestion_commande";
			this->gestion_commande->Size = System::Drawing::Size(1872, 1099);
			this->gestion_commande->TabIndex = 2;
			this->gestion_commande->Text = L"Gestion Commande";
			this->gestion_commande->UseVisualStyleBackColor = true;
			// 
			// gestion_stock
			// 
			this->gestion_stock->Location = System::Drawing::Point(4, 29);
			this->gestion_stock->Name = L"gestion_stock";
			this->gestion_stock->Size = System::Drawing::Size(1872, 1099);
			this->gestion_stock->TabIndex = 3;
			this->gestion_stock->Text = L"Gestion Stock";
			this->gestion_stock->UseVisualStyleBackColor = true;
			// 
			// gestion_statistique
			// 
			this->gestion_statistique->Location = System::Drawing::Point(4, 29);
			this->gestion_statistique->Name = L"gestion_statistique";
			this->gestion_statistique->Size = System::Drawing::Size(1872, 1099);
			this->gestion_statistique->TabIndex = 4;
			this->gestion_statistique->Text = L"Gestion Statistique";
			this->gestion_statistique->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button1->Location = System::Drawing::Point(17, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(319, 249);
			this->button1->TabIndex = 27;
			this->button1->Text = L"Créer Personnel";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// principal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1887, 1138);
			this->Controls->Add(this->tabControl1);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"principal";
			this->Text = L"principal";
			this->tabControl1->ResumeLayout(false);
			this->gestion_personnel->ResumeLayout(false);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel1->PerformLayout();
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void button_personnel_Click(System::Object^ sender, System::EventArgs^ e) {
	ProjetPOO::gestionP pageGestionPersonnel;
	Application::EnableVisualStyles();
	pageGestionPersonnel.ShowDialog();
}
private: System::Void button_afficher_personnel_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button_supprimer_personnel_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button_modifier_personnel_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button_creer_personnel_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button_creer_personnel_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
};
}
