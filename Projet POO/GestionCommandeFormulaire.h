#pragma once

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de GestionCommandeFormulaire
	/// </summary>
	public ref class GestionCommandeFormulaire : public System::Windows::Forms::Form
	{
	public:
		GestionCommandeFormulaire(void)
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
		~GestionCommandeFormulaire()
		{
			if (components)
			{
				delete components;
			}
		}

    protected:

    private: System::Windows::Forms::TextBox^ textBox5;


    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::TextBox^ textBox7;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::Button^ button5;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label15;
    private: System::Windows::Forms::Button^ button_valider;
    private: System::Windows::Forms::Label^ label14;

    private: System::Windows::Forms::Label^ label13;

    private: System::Windows::Forms::Label^ label12;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::DateTimePicker^ dateTimePicker_personnel;
    private: System::Windows::Forms::RichTextBox^ richTextBox1;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Button^ button4;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Button^ button3;
    private: System::Windows::Forms::Panel^ panel1;
    private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
    private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;

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
            this->textBox5 = (gcnew System::Windows::Forms::TextBox());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->textBox7 = (gcnew System::Windows::Forms::TextBox());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->button_valider = (gcnew System::Windows::Forms::Button());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->dateTimePicker_personnel = (gcnew System::Windows::Forms::DateTimePicker());
            this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
            this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
            this->panel1->SuspendLayout();
            this->SuspendLayout();
            // 
            // textBox5
            // 
            this->textBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(41)));
            this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox5->ForeColor = System::Drawing::Color::White;
            this->textBox5->Location = System::Drawing::Point(17, 646);
            this->textBox5->Name = L"textBox5";
            this->textBox5->Size = System::Drawing::Size(460, 35);
            this->textBox5->TabIndex = 105;
            // 
            // textBox2
            // 
            this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(41)));
            this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox2->ForeColor = System::Drawing::Color::White;
            this->textBox2->Location = System::Drawing::Point(17, 446);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(460, 35);
            this->textBox2->TabIndex = 102;
            // 
            // textBox7
            // 
            this->textBox7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(41)));
            this->textBox7->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox7->ForeColor = System::Drawing::Color::White;
            this->textBox7->Location = System::Drawing::Point(16, 70);
            this->textBox7->Name = L"textBox7";
            this->textBox7->Size = System::Drawing::Size(460, 35);
            this->textBox7->TabIndex = 101;
            // 
            // textBox1
            // 
            this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(41)));
            this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox1->ForeColor = System::Drawing::Color::White;
            this->textBox1->Location = System::Drawing::Point(16, 152);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(460, 35);
            this->textBox1->TabIndex = 100;
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
            this->button5->Click += gcnew System::EventHandler(this, &GestionCommandeFormulaire::button5_Click);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Consolas", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
                static_cast<System::Int32>(static_cast<System::Byte>(251)));
            this->label1->Location = System::Drawing::Point(11, 494);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(345, 33);
            this->label1->TabIndex = 68;
            this->label1->Text = L"Date paiement commande";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Consolas", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
                static_cast<System::Int32>(static_cast<System::Byte>(251)));
            this->label2->Location = System::Drawing::Point(13, 400);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(345, 33);
            this->label2->TabIndex = 66;
            this->label2->Text = L"Montant de la commande";
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
            this->label15->Size = System::Drawing::Size(180, 33);
            this->label15->TabIndex = 64;
            this->label15->Text = L"ID Commande";
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
            // label14
            // 
            this->label14->AutoSize = true;
            this->label14->Font = (gcnew System::Drawing::Font(L"Consolas", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
                static_cast<System::Int32>(static_cast<System::Byte>(251)));
            this->label14->Location = System::Drawing::Point(13, 108);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(285, 33);
            this->label14->TabIndex = 47;
            this->label14->Text = L"Référence commande";
            // 
            // label13
            // 
            this->label13->AutoSize = true;
            this->label13->Font = (gcnew System::Drawing::Font(L"Consolas", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
                static_cast<System::Int32>(static_cast<System::Byte>(251)));
            this->label13->Location = System::Drawing::Point(13, 202);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(345, 33);
            this->label13->TabIndex = 49;
            this->label13->Text = L"Date émission commande";
            this->label13->Click += gcnew System::EventHandler(this, &GestionCommandeFormulaire::label13_Click);
            // 
            // label12
            // 
            this->label12->AutoSize = true;
            this->label12->Font = (gcnew System::Drawing::Font(L"Consolas", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
                static_cast<System::Int32>(static_cast<System::Byte>(251)));
            this->label12->Location = System::Drawing::Point(11, 306);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(270, 33);
            this->label12->TabIndex = 50;
            this->label12->Text = L"Date de livraison";
            this->label12->Click += gcnew System::EventHandler(this, &GestionCommandeFormulaire::label12_Click);
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Font = (gcnew System::Drawing::Font(L"Consolas", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
                static_cast<System::Int32>(static_cast<System::Byte>(251)));
            this->label6->Location = System::Drawing::Point(11, 596);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(270, 33);
            this->label6->TabIndex = 57;
            this->label6->Text = L"Moyen de paiement";
            this->label6->Click += gcnew System::EventHandler(this, &GestionCommandeFormulaire::label6_Click);
            // 
            // dateTimePicker_personnel
            // 
            this->dateTimePicker_personnel->CalendarMonthBackground = System::Drawing::SystemColors::WindowFrame;
            this->dateTimePicker_personnel->CalendarTitleForeColor = System::Drawing::Color::AliceBlue;
            this->dateTimePicker_personnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
            this->dateTimePicker_personnel->Location = System::Drawing::Point(17, 353);
            this->dateTimePicker_personnel->Name = L"dateTimePicker_personnel";
            this->dateTimePicker_personnel->Size = System::Drawing::Size(460, 35);
            this->dateTimePicker_personnel->TabIndex = 51;
            this->dateTimePicker_personnel->ValueChanged += gcnew System::EventHandler(this, &GestionCommandeFormulaire::dateTimePicker_personnel_ValueChanged);
            // 
            // richTextBox1
            // 
            this->richTextBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                static_cast<System::Int32>(static_cast<System::Byte>(73)));
            this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->richTextBox1->ForeColor = System::Drawing::Color::White;
            this->richTextBox1->Location = System::Drawing::Point(303, 39);
            this->richTextBox1->Name = L"richTextBox1";
            this->richTextBox1->Size = System::Drawing::Size(758, 932);
            this->richTextBox1->TabIndex = 111;
            this->richTextBox1->Text = L"";
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
            this->button1->Location = System::Drawing::Point(19, 41);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(228, 204);
            this->button1->TabIndex = 106;
            this->button1->Text = L"Créer Commande";
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &GestionCommandeFormulaire::button1_Click);
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
            this->button4->Location = System::Drawing::Point(19, 760);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(228, 225);
            this->button4->TabIndex = 110;
            this->button4->Text = L"Afficher Commande";
            this->button4->UseVisualStyleBackColor = false;
            this->button4->Click += gcnew System::EventHandler(this, &GestionCommandeFormulaire::button4_Click);
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
            this->button2->Location = System::Drawing::Point(19, 271);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(228, 217);
            this->button2->TabIndex = 107;
            this->button2->Text = L"Modifier Commande";
            this->button2->UseVisualStyleBackColor = false;
            this->button2->Click += gcnew System::EventHandler(this, &GestionCommandeFormulaire::button2_Click);
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
            this->button3->Location = System::Drawing::Point(19, 518);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(228, 218);
            this->button3->TabIndex = 109;
            this->button3->Text = L"Supprimer Commande";
            this->button3->UseVisualStyleBackColor = false;
            this->button3->Click += gcnew System::EventHandler(this, &GestionCommandeFormulaire::button3_Click);
            // 
            // panel1
            // 
            this->panel1->Controls->Add(this->dateTimePicker2);
            this->panel1->Controls->Add(this->dateTimePicker1);
            this->panel1->Controls->Add(this->textBox5);
            this->panel1->Controls->Add(this->textBox2);
            this->panel1->Controls->Add(this->textBox7);
            this->panel1->Controls->Add(this->textBox1);
            this->panel1->Controls->Add(this->button5);
            this->panel1->Controls->Add(this->label1);
            this->panel1->Controls->Add(this->label2);
            this->panel1->Controls->Add(this->label15);
            this->panel1->Controls->Add(this->button_valider);
            this->panel1->Controls->Add(this->label14);
            this->panel1->Controls->Add(this->label13);
            this->panel1->Controls->Add(this->label12);
            this->panel1->Controls->Add(this->label6);
            this->panel1->Controls->Add(this->dateTimePicker_personnel);
            this->panel1->Location = System::Drawing::Point(1114, 39);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(502, 946);
            this->panel1->TabIndex = 108;
            // 
            // dateTimePicker2
            // 
            this->dateTimePicker2->CalendarMonthBackground = System::Drawing::SystemColors::WindowFrame;
            this->dateTimePicker2->CalendarTitleForeColor = System::Drawing::Color::AliceBlue;
            this->dateTimePicker2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
            this->dateTimePicker2->Location = System::Drawing::Point(15, 543);
            this->dateTimePicker2->Name = L"dateTimePicker2";
            this->dateTimePicker2->Size = System::Drawing::Size(460, 35);
            this->dateTimePicker2->TabIndex = 107;
            // 
            // dateTimePicker1
            // 
            this->dateTimePicker1->CalendarMonthBackground = System::Drawing::SystemColors::WindowFrame;
            this->dateTimePicker1->CalendarTitleForeColor = System::Drawing::Color::AliceBlue;
            this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
            this->dateTimePicker1->Location = System::Drawing::Point(15, 252);
            this->dateTimePicker1->Name = L"dateTimePicker1";
            this->dateTimePicker1->Size = System::Drawing::Size(460, 35);
            this->dateTimePicker1->TabIndex = 106;
            // 
            // GestionCommandeFormulaire
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(41)));
            this->ClientSize = System::Drawing::Size(1634, 1025);
            this->Controls->Add(this->richTextBox1);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->button4);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->button3);
            this->Controls->Add(this->panel1);
            this->Name = L"GestionCommandeFormulaire";
            this->Text = L"GestionCommandeFormulaire";
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            this->ResumeLayout(false);

        }
#pragma endregion
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e){
    this->richTextBox1->Text = " " + this->button4->Text;
}
private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dateTimePicker_personnel_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
    this->richTextBox1->Text = " " + this->button1->Text;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
    this->richTextBox1->Text = " " + this->button2->Text;

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
    this->richTextBox1->Text = " " + this->button3->Text;

}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
    this->Close();
}
};
}
