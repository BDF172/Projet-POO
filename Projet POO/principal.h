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

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::SplitContainer^ splitContainer2;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ textBox12;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label15;

	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::SplitContainer^ splitContainer3;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::Label^ label20;

	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::Button^ button10;


private: System::Windows::Forms::Button^ button11;
private: System::Windows::Forms::DateTimePicker^ dateTimePicker3;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::Button^ button15;
private: System::Windows::Forms::Button^ button14;
private: System::Windows::Forms::Button^ button13;
private: System::Windows::Forms::Button^ button12;
private: System::Windows::Forms::Label^ label37;
private: System::Windows::Forms::TextBox^ textBox30;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::TextBox^ textBox18;
private: System::Windows::Forms::SplitContainer^ splitContainer4;
private: System::Windows::Forms::ComboBox^ comboBox4;
private: System::Windows::Forms::Button^ button16;
private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::TextBox^ textBox29;
private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::TextBox^ textBox27;
private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::TextBox^ textBox28;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::TextBox^ textBox23;
private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::TextBox^ textBox24;
private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::TextBox^ textBox25;
private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::TextBox^ textBox21;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::TextBox^ textBox22;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::TextBox^ textBox20;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::TextBox^ textBox19;

private: System::Windows::Forms::Button^ button17;
private: System::Windows::Forms::SplitContainer^ splitContainer5;

private: System::Windows::Forms::Button^ button25;
private: System::Windows::Forms::Button^ button24;
private: System::Windows::Forms::Button^ button23;
private: System::Windows::Forms::Button^ button22;
private: System::Windows::Forms::Button^ button21;
private: System::Windows::Forms::Button^ button20;
private: System::Windows::Forms::Button^ button19;
private: System::Windows::Forms::Button^ button18;
private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::CheckBox^ checkBox3;
private: System::Windows::Forms::CheckBox^ checkBox2;
private: System::Windows::Forms::CheckBox^ checkBox1;
private: System::Windows::Forms::CheckBox^ checkBox4;
private: System::Windows::Forms::CheckBox^ checkBox5;
private: System::Windows::Forms::CheckBox^ checkBox6;
private: System::Windows::Forms::Label^ label39;
private: System::Windows::Forms::CheckBox^ checkBox7;
private: System::Windows::Forms::CheckBox^ checkBox8;
private: System::Windows::Forms::Label^ label40;
private: System::Windows::Forms::Button^ button26;
private: System::Windows::Forms::CheckBox^ checkBox9;
private: System::Windows::Forms::CheckBox^ checkBox10;
private: System::Windows::Forms::CheckBox^ checkBox11;
private: System::Windows::Forms::Label^ label41;
private: System::Windows::Forms::RichTextBox^ richTextBox1;
private: System::Windows::Forms::RichTextBox^ richTextBox2;
private: System::Windows::Forms::RichTextBox^ richTextBox3;
private: System::Windows::Forms::RichTextBox^ richTextBox4;
private: System::Windows::Forms::RichTextBox^ richTextBox5;
private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
private: System::ComponentModel::IContainer^ components;




	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->gestion_personnel = (gcnew System::Windows::Forms::TabPage());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
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
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button_afficher_personnel = (gcnew System::Windows::Forms::Button());
			this->button_supprimer_personnel = (gcnew System::Windows::Forms::Button());
			this->button_modifier_personnel = (gcnew System::Windows::Forms::Button());
			this->gestion_client = (gcnew System::Windows::Forms::TabPage());
			this->splitContainer2 = (gcnew System::Windows::Forms::SplitContainer());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->gestion_commande = (gcnew System::Windows::Forms::TabPage());
			this->splitContainer3 = (gcnew System::Windows::Forms::SplitContainer());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker3 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->gestion_stock = (gcnew System::Windows::Forms::TabPage());
			this->splitContainer4 = (gcnew System::Windows::Forms::SplitContainer());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox4 = (gcnew System::Windows::Forms::RichTextBox());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->gestion_statistique = (gcnew System::Windows::Forms::TabPage());
			this->splitContainer5 = (gcnew System::Windows::Forms::SplitContainer());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->checkBox9 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox10 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox11 = (gcnew System::Windows::Forms::CheckBox());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox8 = (gcnew System::Windows::Forms::CheckBox());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->richTextBox5 = (gcnew System::Windows::Forms::RichTextBox());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->gestion_personnel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->gestion_client->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->BeginInit();
			this->splitContainer2->Panel1->SuspendLayout();
			this->splitContainer2->Panel2->SuspendLayout();
			this->splitContainer2->SuspendLayout();
			this->gestion_commande->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer3))->BeginInit();
			this->splitContainer3->Panel1->SuspendLayout();
			this->splitContainer3->Panel2->SuspendLayout();
			this->splitContainer3->SuspendLayout();
			this->gestion_stock->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer4))->BeginInit();
			this->splitContainer4->Panel1->SuspendLayout();
			this->splitContainer4->Panel2->SuspendLayout();
			this->splitContainer4->SuspendLayout();
			this->gestion_statistique->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer5))->BeginInit();
			this->splitContainer5->Panel1->SuspendLayout();
			this->splitContainer5->Panel2->SuspendLayout();
			this->splitContainer5->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->gestion_personnel);
			this->tabControl1->Controls->Add(this->gestion_client);
			this->tabControl1->Controls->Add(this->gestion_commande);
			this->tabControl1->Controls->Add(this->gestion_stock);
			this->tabControl1->Controls->Add(this->gestion_statistique);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->tabControl1->ImeMode = System::Windows::Forms::ImeMode::Off;
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1879, 1136);
			this->tabControl1->TabIndex = 5;
			this->tabControl1->SelectedIndexChanged += gcnew System::EventHandler(this, &principal::tabControl1_SelectedIndexChanged);
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
			this->gestion_personnel->Location = System::Drawing::Point(4, 38);
			this->gestion_personnel->Name = L"gestion_personnel";
			this->gestion_personnel->Padding = System::Windows::Forms::Padding(3);
			this->gestion_personnel->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->gestion_personnel->Size = System::Drawing::Size(1871, 1094);
			this->gestion_personnel->TabIndex = 0;
			this->gestion_personnel->Text = L"Gestion Personnel";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button1->Location = System::Drawing::Point(17, 10);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(319, 249);
			this->button1->TabIndex = 27;
			this->button1->Text = L"Créer Personnel";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &principal::button1_Click);
			// 
			// splitContainer1
			// 
			this->splitContainer1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->splitContainer1->Location = System::Drawing::Point(360, 20);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->splitContainer1->Panel1->Controls->Add(this->label9);
			this->splitContainer1->Panel1->Controls->Add(this->textBox7);
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
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->splitContainer1->Panel2->Controls->Add(this->richTextBox1);
			this->splitContainer1->Panel2->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->splitContainer1->Size = System::Drawing::Size(1499, 1065);
			this->splitContainer1->SplitterDistance = 499;
			this->splitContainer1->TabIndex = 26;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label9->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label9->Location = System::Drawing::Point(21, 23);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(178, 32);
			this->label9->TabIndex = 45;
			this->label9->Text = L"ID Personnel";
			this->label9->Click += gcnew System::EventHandler(this, &principal::label9_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(13, 67);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(460, 35);
			this->textBox7->TabIndex = 44;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &principal::textBox7_TextChanged);
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
			this->textBox1->Size = System::Drawing::Size(460, 35);
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
			this->comboBox1->Size = System::Drawing::Size(457, 37);
			this->comboBox1->TabIndex = 41;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &principal::comboBox1_SelectedIndexChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(15, 235);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(460, 35);
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
			this->textBox6->Size = System::Drawing::Size(460, 35);
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
			this->textBox5->Size = System::Drawing::Size(460, 35);
			this->textBox5->TabIndex = 37;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &principal::textBox5_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(15, 434);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(460, 35);
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
			this->textBox4->Size = System::Drawing::Size(460, 35);
			this->textBox4->TabIndex = 35;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &principal::textBox4_TextChanged);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->richTextBox1->Location = System::Drawing::Point(14, 15);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(964, 1034);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// button_afficher_personnel
			// 
			this->button_afficher_personnel->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button_afficher_personnel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_afficher_personnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->button_afficher_personnel->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_afficher_personnel->Location = System::Drawing::Point(17, 816);
			this->button_afficher_personnel->Name = L"button_afficher_personnel";
			this->button_afficher_personnel->Size = System::Drawing::Size(319, 264);
			this->button_afficher_personnel->TabIndex = 25;
			this->button_afficher_personnel->Text = L"Afficher Personnel";
			this->button_afficher_personnel->UseVisualStyleBackColor = false;
			this->button_afficher_personnel->Click += gcnew System::EventHandler(this, &principal::button_afficher_personnel_Click);
			// 
			// button_supprimer_personnel
			// 
			this->button_supprimer_personnel->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button_supprimer_personnel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_supprimer_personnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->button_supprimer_personnel->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_supprimer_personnel->Location = System::Drawing::Point(17, 548);
			this->button_supprimer_personnel->Name = L"button_supprimer_personnel";
			this->button_supprimer_personnel->Size = System::Drawing::Size(319, 254);
			this->button_supprimer_personnel->TabIndex = 23;
			this->button_supprimer_personnel->Text = L"Supprimer Personnel";
			this->button_supprimer_personnel->UseVisualStyleBackColor = false;
			this->button_supprimer_personnel->Click += gcnew System::EventHandler(this, &principal::button_supprimer_personnel_Click);
			// 
			// button_modifier_personnel
			// 
			this->button_modifier_personnel->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button_modifier_personnel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_modifier_personnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->button_modifier_personnel->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_modifier_personnel->Location = System::Drawing::Point(17, 275);
			this->button_modifier_personnel->Name = L"button_modifier_personnel";
			this->button_modifier_personnel->Size = System::Drawing::Size(319, 255);
			this->button_modifier_personnel->TabIndex = 21;
			this->button_modifier_personnel->Text = L"Modifier Personnel";
			this->button_modifier_personnel->UseVisualStyleBackColor = false;
			this->button_modifier_personnel->Click += gcnew System::EventHandler(this, &principal::button_modifier_personnel_Click);
			// 
			// gestion_client
			// 
			this->gestion_client->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->gestion_client->Controls->Add(this->splitContainer2);
			this->gestion_client->Controls->Add(this->button5);
			this->gestion_client->Controls->Add(this->button4);
			this->gestion_client->Controls->Add(this->button3);
			this->gestion_client->Controls->Add(this->button2);
			this->gestion_client->Location = System::Drawing::Point(4, 38);
			this->gestion_client->Name = L"gestion_client";
			this->gestion_client->Padding = System::Windows::Forms::Padding(3);
			this->gestion_client->Size = System::Drawing::Size(1871, 1094);
			this->gestion_client->TabIndex = 1;
			this->gestion_client->Text = L"Gestion Client";
			this->gestion_client->Click += gcnew System::EventHandler(this, &principal::gestion_client_Click);
			// 
			// splitContainer2
			// 
			this->splitContainer2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->splitContainer2->Location = System::Drawing::Point(373, 24);
			this->splitContainer2->Name = L"splitContainer2";
			// 
			// splitContainer2.Panel1
			// 
			this->splitContainer2->Panel1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->splitContainer2->Panel1->Controls->Add(this->label37);
			this->splitContainer2->Panel1->Controls->Add(this->textBox30);
			this->splitContainer2->Panel1->Controls->Add(this->button10);
			this->splitContainer2->Panel1->Controls->Add(this->dateTimePicker1);
			this->splitContainer2->Panel1->Controls->Add(this->label15);
			this->splitContainer2->Panel1->Controls->Add(this->label13);
			this->splitContainer2->Panel1->Controls->Add(this->comboBox2);
			this->splitContainer2->Panel1->Controls->Add(this->label14);
			this->splitContainer2->Panel1->Controls->Add(this->textBox11);
			this->splitContainer2->Panel1->Controls->Add(this->label16);
			this->splitContainer2->Panel1->Controls->Add(this->textBox12);
			this->splitContainer2->Panel1->Controls->Add(this->label10);
			this->splitContainer2->Panel1->Controls->Add(this->textBox8);
			this->splitContainer2->Panel1->Controls->Add(this->label11);
			this->splitContainer2->Panel1->Controls->Add(this->textBox9);
			this->splitContainer2->Panel1->Controls->Add(this->textBox10);
			this->splitContainer2->Panel1->Controls->Add(this->label12);
			this->splitContainer2->Panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &principal::splitContainer2_Panel1_Paint);
			// 
			// splitContainer2.Panel2
			// 
			this->splitContainer2->Panel2->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->splitContainer2->Panel2->Controls->Add(this->richTextBox2);
			this->splitContainer2->Panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &principal::splitContainer2_Panel2_Paint);
			this->splitContainer2->Size = System::Drawing::Size(1486, 1060);
			this->splitContainer2->SplitterDistance = 495;
			this->splitContainer2->TabIndex = 4;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label37->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label37->Location = System::Drawing::Point(20, 673);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(299, 32);
			this->label37->TabIndex = 69;
			this->label37->Text = L"Référence Commande";
			// 
			// textBox30
			// 
			this->textBox30->Location = System::Drawing::Point(12, 717);
			this->textBox30->Name = L"textBox30";
			this->textBox30->Size = System::Drawing::Size(460, 35);
			this->textBox30->TabIndex = 68;
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::Control;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button10->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button10->Location = System::Drawing::Point(12, 962);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(465, 80);
			this->button10->TabIndex = 67;
			this->button10->Text = L"Valider";
			this->button10->UseVisualStyleBackColor = false;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(12, 627);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(457, 35);
			this->dateTimePicker1->TabIndex = 66;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &principal::dateTimePicker1_ValueChanged);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label15->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label15->Location = System::Drawing::Point(18, 570);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(250, 32);
			this->label15->TabIndex = 65;
			this->label15->Text = L"Date de naissance";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label13->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label13->Location = System::Drawing::Point(11, 466);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(78, 32);
			this->label13->TabIndex = 63;
			this->label13->Text = L"Pays";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->IntegralHeight = false;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"France", L"Belgique", L"Canada" });
			this->comboBox2->Location = System::Drawing::Point(12, 513);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(457, 37);
			this->comboBox2->TabIndex = 62;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label14->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label14->Location = System::Drawing::Point(11, 368);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(71, 32);
			this->label14->TabIndex = 61;
			this->label14->Text = L"Ville";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(9, 420);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(460, 35);
			this->textBox11->TabIndex = 60;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label16->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label16->Location = System::Drawing::Point(11, 276);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(219, 32);
			this->label16->TabIndex = 59;
			this->label16->Text = L"Rue et n° de rue";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(9, 329);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(460, 35);
			this->textBox12->TabIndex = 58;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label10->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label10->Location = System::Drawing::Point(15, 21);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(123, 32);
			this->label10->TabIndex = 51;
			this->label10->Text = L"ID Client";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(7, 65);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(460, 35);
			this->textBox8->TabIndex = 50;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label11->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label11->Location = System::Drawing::Point(17, 101);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(74, 32);
			this->label11->TabIndex = 47;
			this->label11->Text = L"Nom";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(9, 145);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(460, 35);
			this->textBox9->TabIndex = 46;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(9, 233);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(460, 35);
			this->textBox10->TabIndex = 48;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label12->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label12->Location = System::Drawing::Point(15, 192);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(114, 32);
			this->label12->TabIndex = 49;
			this->label12->Text = L"Prénom";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->richTextBox2->Location = System::Drawing::Point(10, 12);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(964, 1034);
			this->richTextBox2->TabIndex = 1;
			this->richTextBox2->Text = L"";
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->button5->Location = System::Drawing::Point(20, 836);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(319, 249);
			this->button5->TabIndex = 3;
			this->button5->Text = L"Afficher Client";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &principal::button5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->button4->Location = System::Drawing::Point(20, 567);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(319, 249);
			this->button4->TabIndex = 2;
			this->button4->Text = L"Supprimer Client";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &principal::button4_Click_1);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->button3->Location = System::Drawing::Point(20, 296);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(319, 249);
			this->button3->TabIndex = 1;
			this->button3->Text = L"Modifier Client";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &principal::button3_Click_1);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->button2->Location = System::Drawing::Point(20, 24);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(319, 249);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Créer Client";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &principal::button2_Click);
			// 
			// gestion_commande
			// 
			this->gestion_commande->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->gestion_commande->Controls->Add(this->splitContainer3);
			this->gestion_commande->Controls->Add(this->button9);
			this->gestion_commande->Controls->Add(this->button8);
			this->gestion_commande->Controls->Add(this->button7);
			this->gestion_commande->Controls->Add(this->button6);
			this->gestion_commande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->gestion_commande->Location = System::Drawing::Point(4, 38);
			this->gestion_commande->Name = L"gestion_commande";
			this->gestion_commande->Size = System::Drawing::Size(1871, 1094);
			this->gestion_commande->TabIndex = 2;
			this->gestion_commande->Text = L"Gestion Commande";
			this->gestion_commande->Click += gcnew System::EventHandler(this, &principal::gestion_commande_Click);
			// 
			// splitContainer3
			// 
			this->splitContainer3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->splitContainer3->Location = System::Drawing::Point(367, 22);
			this->splitContainer3->Name = L"splitContainer3";
			// 
			// splitContainer3.Panel1
			// 
			this->splitContainer3->Panel1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->splitContainer3->Panel1->Controls->Add(this->label25);
			this->splitContainer3->Panel1->Controls->Add(this->textBox18);
			this->splitContainer3->Panel1->Controls->Add(this->button11);
			this->splitContainer3->Panel1->Controls->Add(this->dateTimePicker3);
			this->splitContainer3->Panel1->Controls->Add(this->label24);
			this->splitContainer3->Panel1->Controls->Add(this->comboBox3);
			this->splitContainer3->Panel1->Controls->Add(this->label23);
			this->splitContainer3->Panel1->Controls->Add(this->textBox17);
			this->splitContainer3->Panel1->Controls->Add(this->label22);
			this->splitContainer3->Panel1->Controls->Add(this->textBox16);
			this->splitContainer3->Panel1->Controls->Add(this->label21);
			this->splitContainer3->Panel1->Controls->Add(this->dateTimePicker2);
			this->splitContainer3->Panel1->Controls->Add(this->label17);
			this->splitContainer3->Panel1->Controls->Add(this->label18);
			this->splitContainer3->Panel1->Controls->Add(this->textBox13);
			this->splitContainer3->Panel1->Controls->Add(this->label19);
			this->splitContainer3->Panel1->Controls->Add(this->textBox14);
			this->splitContainer3->Panel1->Controls->Add(this->textBox15);
			this->splitContainer3->Panel1->Controls->Add(this->label20);
			// 
			// splitContainer3.Panel2
			// 
			this->splitContainer3->Panel2->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->splitContainer3->Panel2->Controls->Add(this->richTextBox3);
			this->splitContainer3->Size = System::Drawing::Size(1502, 1065);
			this->splitContainer3->SplitterDistance = 500;
			this->splitContainer3->TabIndex = 4;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label25->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label25->Location = System::Drawing::Point(25, 839);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(265, 32);
			this->label25->TabIndex = 86;
			this->label25->Text = L"Montant commande";
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(19, 887);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(460, 39);
			this->textBox18->TabIndex = 85;
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::Control;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button11->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button11->Location = System::Drawing::Point(15, 971);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(465, 80);
			this->button11->TabIndex = 84;
			this->button11->Text = L"Valider";
			this->button11->UseVisualStyleBackColor = false;
			// 
			// dateTimePicker3
			// 
			this->dateTimePicker3->Location = System::Drawing::Point(19, 771);
			this->dateTimePicker3->Name = L"dateTimePicker3";
			this->dateTimePicker3->Size = System::Drawing::Size(457, 39);
			this->dateTimePicker3->TabIndex = 83;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label24->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label24->Location = System::Drawing::Point(25, 719);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(374, 32);
			this->label24->TabIndex = 82;
			this->label24->Text = L"Date de livraison commande";
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->IntegralHeight = false;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"France", L"Belgique", L"Canada" });
			this->comboBox3->Location = System::Drawing::Point(20, 542);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(457, 40);
			this->comboBox3->TabIndex = 81;
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &principal::comboBox3_SelectedIndexChanged);
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label23->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label23->Location = System::Drawing::Point(25, 491);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(78, 32);
			this->label23->TabIndex = 80;
			this->label23->Text = L"Pays";
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(19, 433);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(460, 39);
			this->textBox17->TabIndex = 77;
			this->textBox17->TextChanged += gcnew System::EventHandler(this, &principal::textBox17_TextChanged);
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label22->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label22->Location = System::Drawing::Point(25, 392);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(71, 32);
			this->label22->TabIndex = 78;
			this->label22->Text = L"Ville";
			this->label22->Click += gcnew System::EventHandler(this, &principal::label22_Click);
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(19, 337);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(460, 39);
			this->textBox16->TabIndex = 75;
			this->textBox16->TextChanged += gcnew System::EventHandler(this, &principal::textBox16_TextChanged);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label21->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label21->Location = System::Drawing::Point(25, 296);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(219, 32);
			this->label21->TabIndex = 76;
			this->label21->Text = L"Rue et n° de rue";
			this->label21->Click += gcnew System::EventHandler(this, &principal::label21_Click);
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point(19, 648);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(457, 39);
			this->dateTimePicker2->TabIndex = 74;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label17->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label17->Location = System::Drawing::Point(25, 596);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(363, 32);
			this->label17->TabIndex = 73;
			this->label17->Text = L"Date d\'émission commande";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label18->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label18->Location = System::Drawing::Point(21, 12);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(293, 32);
			this->label18->TabIndex = 72;
			this->label18->Text = L"Référence commande";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(15, 60);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(460, 39);
			this->textBox13->TabIndex = 71;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label19->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label19->Location = System::Drawing::Point(25, 111);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(149, 32);
			this->label19->TabIndex = 68;
			this->label19->Text = L"Nom client";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(17, 155);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(460, 39);
			this->textBox14->TabIndex = 67;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(17, 243);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(460, 39);
			this->textBox15->TabIndex = 69;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label20->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label20->Location = System::Drawing::Point(23, 202);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(189, 32);
			this->label20->TabIndex = 70;
			this->label20->Text = L"Prénom client";
			// 
			// richTextBox3
			// 
			this->richTextBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->richTextBox3->Location = System::Drawing::Point(16, 14);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->Size = System::Drawing::Size(964, 1034);
			this->richTextBox3->TabIndex = 1;
			this->richTextBox3->Text = L"";
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->button9->Location = System::Drawing::Point(17, 839);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(319, 249);
			this->button9->TabIndex = 3;
			this->button9->Text = L"Afficher Commande";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &principal::button9_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->button8->Location = System::Drawing::Point(17, 565);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(319, 249);
			this->button8->TabIndex = 2;
			this->button8->Text = L"Supprimer Commande";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &principal::button8_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->button7->Location = System::Drawing::Point(17, 289);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(319, 249);
			this->button7->TabIndex = 1;
			this->button7->Text = L"Modifier Commande";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &principal::button7_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->button6->Location = System::Drawing::Point(17, 16);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(319, 249);
			this->button6->TabIndex = 0;
			this->button6->Text = L"Créer Commande";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &principal::button6_Click);
			// 
			// gestion_stock
			// 
			this->gestion_stock->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->gestion_stock->Controls->Add(this->splitContainer4);
			this->gestion_stock->Controls->Add(this->button15);
			this->gestion_stock->Controls->Add(this->button14);
			this->gestion_stock->Controls->Add(this->button13);
			this->gestion_stock->Controls->Add(this->button12);
			this->gestion_stock->Location = System::Drawing::Point(4, 38);
			this->gestion_stock->Name = L"gestion_stock";
			this->gestion_stock->Size = System::Drawing::Size(1871, 1094);
			this->gestion_stock->TabIndex = 3;
			this->gestion_stock->Text = L"Gestion Stock";
			// 
			// splitContainer4
			// 
			this->splitContainer4->Location = System::Drawing::Point(365, 20);
			this->splitContainer4->Name = L"splitContainer4";
			// 
			// splitContainer4.Panel1
			// 
			this->splitContainer4->Panel1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->splitContainer4->Panel1->Controls->Add(this->comboBox4);
			this->splitContainer4->Panel1->Controls->Add(this->button16);
			this->splitContainer4->Panel1->Controls->Add(this->label36);
			this->splitContainer4->Panel1->Controls->Add(this->textBox29);
			this->splitContainer4->Panel1->Controls->Add(this->label34);
			this->splitContainer4->Panel1->Controls->Add(this->textBox27);
			this->splitContainer4->Panel1->Controls->Add(this->label35);
			this->splitContainer4->Panel1->Controls->Add(this->textBox28);
			this->splitContainer4->Panel1->Controls->Add(this->label30);
			this->splitContainer4->Panel1->Controls->Add(this->textBox23);
			this->splitContainer4->Panel1->Controls->Add(this->label31);
			this->splitContainer4->Panel1->Controls->Add(this->textBox24);
			this->splitContainer4->Panel1->Controls->Add(this->label32);
			this->splitContainer4->Panel1->Controls->Add(this->textBox25);
			this->splitContainer4->Panel1->Controls->Add(this->label33);
			this->splitContainer4->Panel1->Controls->Add(this->label28);
			this->splitContainer4->Panel1->Controls->Add(this->textBox21);
			this->splitContainer4->Panel1->Controls->Add(this->label29);
			this->splitContainer4->Panel1->Controls->Add(this->textBox22);
			this->splitContainer4->Panel1->Controls->Add(this->label27);
			this->splitContainer4->Panel1->Controls->Add(this->textBox20);
			this->splitContainer4->Panel1->Controls->Add(this->label26);
			this->splitContainer4->Panel1->Controls->Add(this->textBox19);
			// 
			// splitContainer4.Panel2
			// 
			this->splitContainer4->Panel2->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->splitContainer4->Panel2->Controls->Add(this->richTextBox4);
			this->splitContainer4->Size = System::Drawing::Size(1494, 1055);
			this->splitContainer4->SplitterDistance = 498;
			this->splitContainer4->TabIndex = 4;
			// 
			// comboBox4
			// 
			this->comboBox4->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(3) { L"[TVA 1]", L"[TVA 2]", L"[TVA 3]" });
			this->comboBox4->ContextMenuStrip = this->contextMenuStrip1;
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->IntegralHeight = false;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"[TVA 1]", L"[TVA 2]", L"[TVA 3]" });
			this->comboBox4->Location = System::Drawing::Point(14, 399);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(457, 37);
			this->comboBox4->TabIndex = 96;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::SystemColors::Control;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button16->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button16->Location = System::Drawing::Point(14, 975);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(465, 80);
			this->button16->TabIndex = 95;
			this->button16->Text = L"Valider";
			this->button16->UseVisualStyleBackColor = false;
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label36->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label36->Location = System::Drawing::Point(19, 884);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(167, 29);
			this->label36->TabIndex = 94;
			this->label36->Text = L"ID Commande";
			// 
			// textBox29
			// 
			this->textBox29->Location = System::Drawing::Point(14, 925);
			this->textBox29->Name = L"textBox29";
			this->textBox29->Size = System::Drawing::Size(460, 35);
			this->textBox29->TabIndex = 93;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label34->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label34->Location = System::Drawing::Point(19, 795);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(240, 29);
			this->label34->TabIndex = 92;
			this->label34->Text = L"Prix HT après remise";
			// 
			// textBox27
			// 
			this->textBox27->Location = System::Drawing::Point(14, 836);
			this->textBox27->Name = L"textBox27";
			this->textBox27->Size = System::Drawing::Size(460, 35);
			this->textBox27->TabIndex = 91;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label35->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label35->Location = System::Drawing::Point(19, 708);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(180, 29);
			this->label35->TabIndex = 90;
			this->label35->Text = L"Nom de l\'article";
			// 
			// textBox28
			// 
			this->textBox28->Location = System::Drawing::Point(14, 749);
			this->textBox28->Name = L"textBox28";
			this->textBox28->Size = System::Drawing::Size(460, 35);
			this->textBox28->TabIndex = 89;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label30->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label30->Location = System::Drawing::Point(19, 617);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(63, 29);
			this->label30->TabIndex = 88;
			this->label30->Text = L"Coût";
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(14, 658);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(460, 35);
			this->textBox23->TabIndex = 87;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label31->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label31->Location = System::Drawing::Point(19, 530);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(296, 29);
			this->label31->TabIndex = 86;
			this->label31->Text = L"Seuil de réaprisionnement";
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(14, 571);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(460, 35);
			this->textBox24->TabIndex = 85;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label32->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label32->Location = System::Drawing::Point(19, 442);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(153, 29);
			this->label32->TabIndex = 84;
			this->label32->Text = L"Montant TTC";
			// 
			// textBox25
			// 
			this->textBox25->Location = System::Drawing::Point(14, 483);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(460, 35);
			this->textBox25->TabIndex = 83;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label33->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label33->Location = System::Drawing::Point(19, 355);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(59, 29);
			this->label33->TabIndex = 82;
			this->label33->Text = L"TVA";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label28->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label28->Location = System::Drawing::Point(19, 273);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(93, 29);
			this->label28->TabIndex = 80;
			this->label28->Text = L"Prix HT";
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(14, 314);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(460, 35);
			this->textBox21->TabIndex = 79;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label29->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label29->Location = System::Drawing::Point(19, 186);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(73, 29);
			this->label29->TabIndex = 78;
			this->label29->Text = L"Stock";
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(14, 227);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(460, 35);
			this->textBox22->TabIndex = 77;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label27->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label27->Location = System::Drawing::Point(19, 98);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(196, 29);
			this->label27->TabIndex = 76;
			this->label27->Text = L"Référence article";
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(14, 139);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(460, 35);
			this->textBox20->TabIndex = 75;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label26->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label26->Location = System::Drawing::Point(19, 11);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(109, 29);
			this->label26->TabIndex = 74;
			this->label26->Text = L"ID Article";
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(14, 52);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(460, 35);
			this->textBox19->TabIndex = 73;
			// 
			// richTextBox4
			// 
			this->richTextBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->richTextBox4->Location = System::Drawing::Point(14, 10);
			this->richTextBox4->Name = L"richTextBox4";
			this->richTextBox4->Size = System::Drawing::Size(964, 1034);
			this->richTextBox4->TabIndex = 1;
			this->richTextBox4->Text = L"";
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->button15->Location = System::Drawing::Point(13, 827);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(319, 249);
			this->button15->TabIndex = 3;
			this->button15->Text = L"Afficher Article";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &principal::button15_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->button14->Location = System::Drawing::Point(13, 557);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(319, 249);
			this->button14->TabIndex = 2;
			this->button14->Text = L"Supprimer Article";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &principal::button14_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->button13->Location = System::Drawing::Point(13, 286);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(319, 249);
			this->button13->TabIndex = 1;
			this->button13->Text = L"Modifier Article";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &principal::button13_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->button12->Location = System::Drawing::Point(13, 15);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(319, 249);
			this->button12->TabIndex = 0;
			this->button12->Text = L"Créer Article";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &principal::button12_Click);
			// 
			// gestion_statistique
			// 
			this->gestion_statistique->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->gestion_statistique->Controls->Add(this->splitContainer5);
			this->gestion_statistique->Controls->Add(this->button25);
			this->gestion_statistique->Controls->Add(this->button24);
			this->gestion_statistique->Controls->Add(this->button23);
			this->gestion_statistique->Controls->Add(this->button22);
			this->gestion_statistique->Controls->Add(this->button21);
			this->gestion_statistique->Controls->Add(this->button20);
			this->gestion_statistique->Controls->Add(this->button19);
			this->gestion_statistique->Controls->Add(this->button18);
			this->gestion_statistique->Controls->Add(this->button17);
			this->gestion_statistique->Location = System::Drawing::Point(4, 38);
			this->gestion_statistique->Name = L"gestion_statistique";
			this->gestion_statistique->Size = System::Drawing::Size(1871, 1094);
			this->gestion_statistique->TabIndex = 4;
			this->gestion_statistique->Text = L"Gestion Statistique";
			// 
			// splitContainer5
			// 
			this->splitContainer5->Location = System::Drawing::Point(361, 23);
			this->splitContainer5->Name = L"splitContainer5";
			// 
			// splitContainer5.Panel1
			// 
			this->splitContainer5->Panel1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->splitContainer5->Panel1->Controls->Add(this->button26);
			this->splitContainer5->Panel1->Controls->Add(this->checkBox9);
			this->splitContainer5->Panel1->Controls->Add(this->checkBox10);
			this->splitContainer5->Panel1->Controls->Add(this->checkBox11);
			this->splitContainer5->Panel1->Controls->Add(this->label41);
			this->splitContainer5->Panel1->Controls->Add(this->checkBox7);
			this->splitContainer5->Panel1->Controls->Add(this->checkBox8);
			this->splitContainer5->Panel1->Controls->Add(this->label40);
			this->splitContainer5->Panel1->Controls->Add(this->checkBox4);
			this->splitContainer5->Panel1->Controls->Add(this->checkBox5);
			this->splitContainer5->Panel1->Controls->Add(this->checkBox6);
			this->splitContainer5->Panel1->Controls->Add(this->label39);
			this->splitContainer5->Panel1->Controls->Add(this->checkBox3);
			this->splitContainer5->Panel1->Controls->Add(this->checkBox2);
			this->splitContainer5->Panel1->Controls->Add(this->checkBox1);
			this->splitContainer5->Panel1->Controls->Add(this->label38);
			// 
			// splitContainer5.Panel2
			// 
			this->splitContainer5->Panel2->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->splitContainer5->Panel2->Controls->Add(this->richTextBox5);
			this->splitContainer5->Size = System::Drawing::Size(1498, 1053);
			this->splitContainer5->SplitterDistance = 499;
			this->splitContainer5->TabIndex = 9;
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::SystemColors::Control;
			this->button26->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button26->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button26->Location = System::Drawing::Point(18, 960);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(465, 80);
			this->button26->TabIndex = 96;
			this->button26->Text = L"Valider";
			this->button26->UseVisualStyleBackColor = false;
			// 
			// checkBox9
			// 
			this->checkBox9->AutoSize = true;
			this->checkBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->checkBox9->Location = System::Drawing::Point(220, 378);
			this->checkBox9->Name = L"checkBox9";
			this->checkBox9->Size = System::Drawing::Size(67, 29);
			this->checkBox9->TabIndex = 87;
			this->checkBox9->Text = L"5%";
			this->checkBox9->UseVisualStyleBackColor = true;
			this->checkBox9->CheckedChanged += gcnew System::EventHandler(this, &principal::checkBox9_CheckedChanged);
			// 
			// checkBox10
			// 
			this->checkBox10->AutoSize = true;
			this->checkBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->checkBox10->Location = System::Drawing::Point(109, 378);
			this->checkBox10->Name = L"checkBox10";
			this->checkBox10->Size = System::Drawing::Size(67, 29);
			this->checkBox10->TabIndex = 86;
			this->checkBox10->Text = L"3%";
			this->checkBox10->UseVisualStyleBackColor = true;
			this->checkBox10->CheckedChanged += gcnew System::EventHandler(this, &principal::checkBox10_CheckedChanged);
			// 
			// checkBox11
			// 
			this->checkBox11->AutoSize = true;
			this->checkBox11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->checkBox11->Location = System::Drawing::Point(13, 378);
			this->checkBox11->Name = L"checkBox11";
			this->checkBox11->Size = System::Drawing::Size(67, 29);
			this->checkBox11->TabIndex = 85;
			this->checkBox11->Text = L"2%";
			this->checkBox11->UseVisualStyleBackColor = true;
			this->checkBox11->CheckedChanged += gcnew System::EventHandler(this, &principal::checkBox11_CheckedChanged);
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label41->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label41->Location = System::Drawing::Point(12, 330);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(271, 32);
			this->label41->TabIndex = 84;
			this->label41->Text = L"Démarque inconnue";
			// 
			// checkBox7
			// 
			this->checkBox7->AutoSize = true;
			this->checkBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->checkBox7->Location = System::Drawing::Point(109, 275);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(67, 29);
			this->checkBox7->TabIndex = 83;
			this->checkBox7->Text = L"6%";
			this->checkBox7->UseVisualStyleBackColor = true;
			this->checkBox7->CheckedChanged += gcnew System::EventHandler(this, &principal::checkBox7_CheckedChanged);
			// 
			// checkBox8
			// 
			this->checkBox8->AutoSize = true;
			this->checkBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->checkBox8->Location = System::Drawing::Point(13, 275);
			this->checkBox8->Name = L"checkBox8";
			this->checkBox8->Size = System::Drawing::Size(67, 29);
			this->checkBox8->TabIndex = 82;
			this->checkBox8->Text = L"5%";
			this->checkBox8->UseVisualStyleBackColor = true;
			this->checkBox8->CheckedChanged += gcnew System::EventHandler(this, &principal::checkBox8_CheckedChanged);
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label40->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label40->Location = System::Drawing::Point(12, 227);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(279, 32);
			this->label40->TabIndex = 81;
			this->label40->Text = L"Remise commerciale";
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->checkBox4->Location = System::Drawing::Point(220, 170);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(78, 29);
			this->checkBox4->TabIndex = 80;
			this->checkBox4->Text = L"15%";
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &principal::checkBox4_CheckedChanged);
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->checkBox5->Location = System::Drawing::Point(109, 170);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(78, 29);
			this->checkBox5->TabIndex = 79;
			this->checkBox5->Text = L"10%";
			this->checkBox5->UseVisualStyleBackColor = true;
			this->checkBox5->CheckedChanged += gcnew System::EventHandler(this, &principal::checkBox5_CheckedChanged);
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->checkBox6->Location = System::Drawing::Point(13, 170);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(67, 29);
			this->checkBox6->TabIndex = 78;
			this->checkBox6->Text = L"5%";
			this->checkBox6->UseVisualStyleBackColor = true;
			this->checkBox6->CheckedChanged += gcnew System::EventHandler(this, &principal::checkBox6_CheckedChanged);
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label39->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label39->Location = System::Drawing::Point(12, 122);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(263, 32);
			this->label39->TabIndex = 77;
			this->label39->Text = L"Marge commerciale";
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->checkBox3->Location = System::Drawing::Point(356, 60);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(102, 29);
			this->checkBox3->TabIndex = 76;
			this->checkBox3->Text = L"[TVA3]";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &principal::checkBox3_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->checkBox2->Location = System::Drawing::Point(169, 60);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(102, 29);
			this->checkBox2->TabIndex = 75;
			this->checkBox2->Text = L"[TVA2]";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &principal::checkBox2_CheckedChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->checkBox1->Location = System::Drawing::Point(13, 60);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(102, 29);
			this->checkBox1->TabIndex = 74;
			this->checkBox1->Text = L"[TVA1]";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &principal::checkBox1_CheckedChanged);
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label38->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label38->Location = System::Drawing::Point(12, 12);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(70, 32);
			this->label38->TabIndex = 73;
			this->label38->Text = L"TVA";
			this->label38->Click += gcnew System::EventHandler(this, &principal::label38_Click);
			// 
			// richTextBox5
			// 
			this->richTextBox5->Location = System::Drawing::Point(15, 9);
			this->richTextBox5->Name = L"richTextBox5";
			this->richTextBox5->Size = System::Drawing::Size(964, 1034);
			this->richTextBox5->TabIndex = 1;
			this->richTextBox5->Text = L"";
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->button25->Location = System::Drawing::Point(13, 976);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(319, 100);
			this->button25->TabIndex = 8;
			this->button25->Text = L"Simuler variation valeur commerciale";
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &principal::button25_Click);
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->button24->Location = System::Drawing::Point(13, 854);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(319, 100);
			this->button24->TabIndex = 7;
			this->button24->Text = L"Montant valeur d\'achat du stock";
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &principal::button24_Click);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->button23->Location = System::Drawing::Point(13, 733);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(319, 100);
			this->button23->TabIndex = 6;
			this->button23->Text = L"Montant valeur commerciale stock";
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &principal::button23_Click);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->button22->Location = System::Drawing::Point(13, 611);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(319, 100);
			this->button22->TabIndex = 5;
			this->button22->Text = L"10 articles les moins vendus";
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &principal::button22_Click);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->button21->Location = System::Drawing::Point(13, 490);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(319, 100);
			this->button21->TabIndex = 4;
			this->button21->Text = L"10 articles les plus vendus";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &principal::button21_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->button20->Location = System::Drawing::Point(13, 369);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(319, 100);
			this->button20->TabIndex = 3;
			this->button20->Text = L"Montant total achat d\'un client";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &principal::button20_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->button19->Location = System::Drawing::Point(13, 250);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(319, 100);
			this->button19->TabIndex = 2;
			this->button19->Text = L"Produits sous seuil réaprisionnement";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &principal::button19_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->button18->Location = System::Drawing::Point(13, 132);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(319, 100);
			this->button18->TabIndex = 1;
			this->button18->Text = L"Montant chiffre d\'affaire";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &principal::button18_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->button17->Location = System::Drawing::Point(13, 16);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(319, 100);
			this->button17->TabIndex = 0;
			this->button17->Text = L"Montant panier moyen";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &principal::button17_Click);
			// 
			// principal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(1908, 1189);
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
			this->gestion_client->ResumeLayout(false);
			this->splitContainer2->Panel1->ResumeLayout(false);
			this->splitContainer2->Panel1->PerformLayout();
			this->splitContainer2->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->EndInit();
			this->splitContainer2->ResumeLayout(false);
			this->gestion_commande->ResumeLayout(false);
			this->splitContainer3->Panel1->ResumeLayout(false);
			this->splitContainer3->Panel1->PerformLayout();
			this->splitContainer3->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer3))->EndInit();
			this->splitContainer3->ResumeLayout(false);
			this->gestion_stock->ResumeLayout(false);
			this->splitContainer4->Panel1->ResumeLayout(false);
			this->splitContainer4->Panel1->PerformLayout();
			this->splitContainer4->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer4))->EndInit();
			this->splitContainer4->ResumeLayout(false);
			this->gestion_statistique->ResumeLayout(false);
			this->splitContainer5->Panel1->ResumeLayout(false);
			this->splitContainer5->Panel1->PerformLayout();
			this->splitContainer5->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer5))->EndInit();
			this->splitContainer5->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button_personnel_Click(System::Object^ sender, System::EventArgs^ e) {
		ProjetPOO::gestionP pageGestionPersonnel;
		Application::EnableVisualStyles();
		pageGestionPersonnel.ShowDialog();
	}
	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button_valider_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dateTimePicker_personnel_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void gestion_client_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void tabControl1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox14_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void splitContainer2_Panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void splitContainer2_Panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void gestion_commande_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	this->richTextBox3->Text = this->button7->Text;
}
private: System::Void label21_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox16_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label22_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox17_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	this->richTextBox4->Text = this->button12->Text;
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	this->richTextBox5->Text = this->button17->Text;
}
private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
	this->richTextBox5->Text = this->button25->Text;
}
private: System::Void label38_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->checkBox2->Checked == true) {
		this->checkBox2->Checked = false;
	} else if (this->checkBox3->Checked == true) {
		this->checkBox3->Checked = false;
	}
}
private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->checkBox1->Checked == true) {
		this->checkBox1->Checked = false;
	}
	else if (this->checkBox3->Checked == true) {
		this->checkBox3->Checked = false;
	}
}
private: System::Void checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->checkBox2->Checked == true) {
		this->checkBox2->Checked = false;
	}
	else if (this->checkBox1->Checked == true) {
		this->checkBox1->Checked = false;
	}
}
private: System::Void checkBox6_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->checkBox5->Checked == true) {
		this->checkBox5->Checked = false;
	}
	else if (this->checkBox4->Checked == true) {
		this->checkBox4->Checked = false;
	}
}
private: System::Void checkBox5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->checkBox6->Checked == true) {
		this->checkBox6->Checked = false;
	}
	else if (this->checkBox4->Checked == true) {
		this->checkBox4->Checked = false;
	}
}
private: System::Void checkBox4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->checkBox5->Checked == true) {
		this->checkBox5->Checked = false;
	}
	else if (this->checkBox6->Checked == true) {
		this->checkBox6->Checked = false;
	}
}
private: System::Void checkBox8_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->checkBox7->Checked == true) {
		this->checkBox7->Checked = false;
	}
}
private: System::Void checkBox7_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->checkBox8->Checked == true) {
		this->checkBox8->Checked = false;
	}
}
private: System::Void checkBox11_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->checkBox10->Checked == true) {
		this->checkBox10->Checked = false;
	}
	else if (this->checkBox9->Checked == true) {
		this->checkBox9->Checked = false;
	}
}
private: System::Void checkBox10_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->checkBox11->Checked == true) {
		this->checkBox11->Checked = false;
	}
	else if (this->checkBox9->Checked == true) {
		this->checkBox9->Checked = false;
	}
}
private: System::Void checkBox9_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->checkBox11->Checked == true) {
		this->checkBox11->Checked = false;
	}
	else if (this->checkBox10->Checked == true) {
		this->checkBox10->Checked = false;
	}
}
	   
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->richTextBox1->Text = this->button1->Text;
}

private: System::Void button_modifier_personnel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->richTextBox1->Text = this->button_modifier_personnel->Text;

}
private: System::Void button_supprimer_personnel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->richTextBox1->Text = this->button_supprimer_personnel->Text;
}

private: System::Void button_afficher_personnel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->richTextBox1->Text = this->button_afficher_personnel->Text;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->richTextBox2->Text = this->button2->Text;
}
private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->richTextBox2->Text = this->button3->Text;
}
private: System::Void button4_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->richTextBox2->Text = this->button4->Text;
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	this->richTextBox2->Text = this->button5->Text;
}

private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	this->richTextBox3->Text = this->button6->Text;
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	this->richTextBox3->Text = this->button8->Text;
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	this->richTextBox3->Text = this->button9->Text;
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	this->richTextBox4->Text = this->button13->Text;
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	this->richTextBox4->Text = this->button14->Text;
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	this->richTextBox4->Text = this->button15->Text;
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	this->richTextBox5->Text = this->button18->Text;
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	this->richTextBox5->Text = this->button19->Text;
}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
	this->richTextBox5->Text = this->button20->Text;
}
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
	this->richTextBox5->Text = this->button21->Text;
}

private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
	this->richTextBox5->Text = this->button22->Text;
}
private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
	this->richTextBox5->Text = this->button23->Text;
}
private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
	this->richTextBox5->Text = this->button24->Text;
}
};
}
