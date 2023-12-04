#pragma once

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de gestionP
	/// </summary>
	public ref class gestionP : public System::Windows::Forms::Form
	{
	public:
		gestionP(void)
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
		~gestionP()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button_retour_personnel;
	private: System::Windows::Forms::Button^ button_creer_personnel;
	private: System::Windows::Forms::Button^ button_modifier_personnel;
	private: System::Windows::Forms::Button^ button_supprimer_personnel;
	private: System::Windows::Forms::Button^ button_afficher_personnel;




	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::SplitContainer^ splitContainer1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker_personnel;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button_valider;



	protected:

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
			this->button_retour_personnel = (gcnew System::Windows::Forms::Button());
			this->button_creer_personnel = (gcnew System::Windows::Forms::Button());
			this->button_modifier_personnel = (gcnew System::Windows::Forms::Button());
			this->button_supprimer_personnel = (gcnew System::Windows::Forms::Button());
			this->button_afficher_personnel = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->button_valider = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker_personnel = (gcnew System::Windows::Forms::DateTimePicker());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button_retour_personnel
			// 
			this->button_retour_personnel->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button_retour_personnel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_retour_personnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->button_retour_personnel->Location = System::Drawing::Point(12, 12);
			this->button_retour_personnel->Name = L"button_retour_personnel";
			this->button_retour_personnel->Size = System::Drawing::Size(50, 50);
			this->button_retour_personnel->TabIndex = 0;
			this->button_retour_personnel->Text = L"<";
			this->button_retour_personnel->UseVisualStyleBackColor = false;
			this->button_retour_personnel->Click += gcnew System::EventHandler(this, &gestionP::button_retour_personnel_Click);
			// 
			// button_creer_personnel
			// 
			this->button_creer_personnel->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button_creer_personnel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_creer_personnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->button_creer_personnel->Location = System::Drawing::Point(36, 103);
			this->button_creer_personnel->Name = L"button_creer_personnel";
			this->button_creer_personnel->Size = System::Drawing::Size(231, 112);
			this->button_creer_personnel->TabIndex = 1;
			this->button_creer_personnel->Text = L"Créer Personnel";
			this->button_creer_personnel->UseVisualStyleBackColor = false;
			this->button_creer_personnel->Click += gcnew System::EventHandler(this, &gestionP::button_creer_personnel_Click);
			// 
			// button_modifier_personnel
			// 
			this->button_modifier_personnel->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button_modifier_personnel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_modifier_personnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->button_modifier_personnel->Location = System::Drawing::Point(36, 261);
			this->button_modifier_personnel->Name = L"button_modifier_personnel";
			this->button_modifier_personnel->Size = System::Drawing::Size(231, 112);
			this->button_modifier_personnel->TabIndex = 2;
			this->button_modifier_personnel->Text = L"Modifier Personnel";
			this->button_modifier_personnel->UseVisualStyleBackColor = false;
			this->button_modifier_personnel->Click += gcnew System::EventHandler(this, &gestionP::button_modifier_personnel_Click_1);
			// 
			// button_supprimer_personnel
			// 
			this->button_supprimer_personnel->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button_supprimer_personnel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_supprimer_personnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->button_supprimer_personnel->Location = System::Drawing::Point(36, 422);
			this->button_supprimer_personnel->Name = L"button_supprimer_personnel";
			this->button_supprimer_personnel->Size = System::Drawing::Size(231, 112);
			this->button_supprimer_personnel->TabIndex = 3;
			this->button_supprimer_personnel->Text = L"Supprimer Personnel";
			this->button_supprimer_personnel->UseVisualStyleBackColor = false;
			this->button_supprimer_personnel->Click += gcnew System::EventHandler(this, &gestionP::button_supprimer_personnel_Click_1);
			// 
			// button_afficher_personnel
			// 
			this->button_afficher_personnel->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button_afficher_personnel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_afficher_personnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->button_afficher_personnel->Location = System::Drawing::Point(36, 582);
			this->button_afficher_personnel->Name = L"button_afficher_personnel";
			this->button_afficher_personnel->Size = System::Drawing::Size(231, 112);
			this->button_afficher_personnel->TabIndex = 4;
			this->button_afficher_personnel->Text = L"Afficher Personnel";
			this->button_afficher_personnel->UseVisualStyleBackColor = false;
			this->button_afficher_personnel->Click += gcnew System::EventHandler(this, &gestionP::button_afficher_personnel_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::ControlDark;
			this->groupBox1->Controls->Add(this->splitContainer1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->groupBox1->Location = System::Drawing::Point(313, 22);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1320, 682);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Visionnage";
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(3, 35);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->button_valider);
			this->splitContainer1->Panel1->Controls->Add(this->label8);
			this->splitContainer1->Panel1->Controls->Add(this->comboBox1);
			this->splitContainer1->Panel1->Controls->Add(this->label7);
			this->splitContainer1->Panel1->Controls->Add(this->textBox6);
			this->splitContainer1->Panel1->Controls->Add(this->label6);
			this->splitContainer1->Panel1->Controls->Add(this->textBox5);
			this->splitContainer1->Panel1->Controls->Add(this->label5);
			this->splitContainer1->Panel1->Controls->Add(this->textBox4);
			this->splitContainer1->Panel1->Controls->Add(this->label4);
			this->splitContainer1->Panel1->Controls->Add(this->textBox3);
			this->splitContainer1->Panel1->Controls->Add(this->dateTimePicker_personnel);
			this->splitContainer1->Panel1->Controls->Add(this->label3);
			this->splitContainer1->Panel1->Controls->Add(this->label2);
			this->splitContainer1->Panel1->Controls->Add(this->textBox2);
			this->splitContainer1->Panel1->Controls->Add(this->label1);
			this->splitContainer1->Panel1->Controls->Add(this->textBox1);
			this->splitContainer1->Panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &gestionP::splitContainer1_Panel1_Paint);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->BackColor = System::Drawing::SystemColors::Control;
			this->splitContainer1->Panel2->Controls->Add(this->dataGridView1);
			this->splitContainer1->Size = System::Drawing::Size(1314, 644);
			this->splitContainer1->SplitterDistance = 671;
			this->splitContainer1->TabIndex = 0;
			// 
			// button_valider
			// 
			this->button_valider->BackColor = System::Drawing::SystemColors::Control;
			this->button_valider->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_valider->Location = System::Drawing::Point(480, 588);
			this->button_valider->Name = L"button_valider";
			this->button_valider->Size = System::Drawing::Size(176, 45);
			this->button_valider->TabIndex = 17;
			this->button_valider->Text = L"Valider";
			this->button_valider->UseVisualStyleBackColor = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(10, 544);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(78, 32);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Pays";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"France", L"Belgique", L"Canada" });
			this->comboBox1->Location = System::Drawing::Point(13, 588);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(397, 40);
			this->comboBox1->TabIndex = 15;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &gestionP::comboBox1_SelectedIndexChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(7, 445);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(71, 32);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Ville";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(16, 491);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(398, 39);
			this->textBox6->TabIndex = 13;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(10, 344);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(219, 32);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Rue et n° de rue";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(12, 390);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(398, 39);
			this->textBox5->TabIndex = 11;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(7, 247);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(444, 32);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Prénom du supérieur hiérarchique";
			this->label5->Click += gcnew System::EventHandler(this, &gestionP::label5_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(13, 293);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(398, 39);
			this->textBox4->TabIndex = 9;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &gestionP::textBox4_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(7, 165);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(404, 32);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Nom du supérieur hiérarchique";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(13, 204);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(398, 39);
			this->textBox3->TabIndex = 7;
			// 
			// dateTimePicker_personnel
			// 
			this->dateTimePicker_personnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->dateTimePicker_personnel->Location = System::Drawing::Point(13, 127);
			this->dateTimePicker_personnel->Name = L"dateTimePicker_personnel";
			this->dateTimePicker_personnel->Size = System::Drawing::Size(385, 35);
			this->dateTimePicker_personnel->TabIndex = 6;
			this->dateTimePicker_personnel->ValueChanged += gcnew System::EventHandler(this, &gestionP::dateTimePicker1_ValueChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(7, 92);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(236, 32);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Date d\'embauche";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(221, 11);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(114, 32);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Prénom";
			this->label2->Click += gcnew System::EventHandler(this, &gestionP::label2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(227, 50);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(171, 39);
			this->textBox2->TabIndex = 2;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &gestionP::textBox2_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(7, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(74, 32);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Nom";
			this->label1->Click += gcnew System::EventHandler(this, &gestionP::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(13, 50);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(171, 39);
			this->textBox1->TabIndex = 0;
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(3, 4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(633, 640);
			this->dataGridView1->TabIndex = 0;
			// 
			// gestionP
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1636, 1135);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button_afficher_personnel);
			this->Controls->Add(this->button_supprimer_personnel);
			this->Controls->Add(this->button_modifier_personnel);
			this->Controls->Add(this->button_creer_personnel);
			this->Controls->Add(this->button_retour_personnel);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"gestionP";
			this->Text = L"gestion_personnel";
			this->groupBox1->ResumeLayout(false);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel1->PerformLayout();
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button_retour_personnel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void button_creer_personnel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->groupBox1->Text = this->button_creer_personnel->Text;
	}
	private: System::Void button_afficher_personnel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->groupBox1->Text = this->button_afficher_personnel->Text;
	}
	private: System::Void button_modifier_personnel_Click_1(System::Object^ sender, System::EventArgs^ e) {
		this->groupBox1->Text = this->button_modifier_personnel->Text;
	}
	private: System::Void button_supprimer_personnel_Click_1(System::Object^ sender, System::EventArgs^ e) {
		this->groupBox1->Text = this->button_supprimer_personnel->Text;
	}

private: System::Void splitContainer1_Panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}

};
}
