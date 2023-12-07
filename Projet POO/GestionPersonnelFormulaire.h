#pragma once

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description r�sum�e de FormulaireGestionPersonnel
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
		/// Nettoyage des ressources utilis�es.
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

    private: System::Windows::Forms::Button^ button_valider;
    private: System::Windows::Forms::Label^ label14;
    private: System::Windows::Forms::Label^ label8;

    private: System::Windows::Forms::Button^ button4;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Button^ button3;


    private: System::Windows::Forms::Label^ label13;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::Label^ label12;

    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::DateTimePicker^ dateTimePicker_personnel;


    private: System::Windows::Forms::Panel^ panel1;
    private: System::Windows::Forms::Label^ label1;

    private: System::Windows::Forms::Label^ label2;

    private: System::Windows::Forms::Button^ button5;
    private: System::Windows::Forms::TextBox^ textBox6;
    private: System::Windows::Forms::TextBox^ textBox5;
    private: System::Windows::Forms::TextBox^ textBox4;
    private: System::Windows::Forms::TextBox^ textBox3;
    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::TextBox^ textBox7;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::ComboBox^ comboBox1;
    private: System::Windows::Forms::RichTextBox^ richTextBox1;



	protected:


























	protected:




























































	protected:

	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->button_valider = (gcnew System::Windows::Forms::Button());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->dateTimePicker_personnel = (gcnew System::Windows::Forms::DateTimePicker());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
            this->textBox6 = (gcnew System::Windows::Forms::TextBox());
            this->textBox5 = (gcnew System::Windows::Forms::TextBox());
            this->textBox4 = (gcnew System::Windows::Forms::TextBox());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->textBox7 = (gcnew System::Windows::Forms::TextBox());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
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
            this->button1->Location = System::Drawing::Point(25, 41);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(228, 204);
            this->button1->TabIndex = 92;
            this->button1->Text = L"Cr�er Personnel";
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
            this->label15->Location = System::Drawing::Point(22, 20);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(195, 33);
            this->label15->TabIndex = 64;
            this->label15->Text = L"ID Personnel";
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
            this->label14->Location = System::Drawing::Point(22, 108);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(60, 33);
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
            this->label8->Location = System::Drawing::Point(11, 749);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(75, 33);
            this->label8->TabIndex = 61;
            this->label8->Text = L"Pays";
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
            this->button4->Location = System::Drawing::Point(25, 760);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(228, 225);
            this->button4->TabIndex = 97;
            this->button4->Text = L"Afficher Personnel";
            this->button4->UseVisualStyleBackColor = false;
            this->button4->Click += gcnew System::EventHandler(this, &FormulaireGestionPersonnel::button4_Click);
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
            this->button2->Location = System::Drawing::Point(25, 271);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(228, 217);
            this->button2->TabIndex = 93;
            this->button2->Text = L"Modifier Personnel";
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
            this->button3->Location = System::Drawing::Point(25, 518);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(228, 218);
            this->button3->TabIndex = 96;
            this->button3->Text = L"Supprimer Personnel";
            this->button3->UseVisualStyleBackColor = false;
            this->button3->Click += gcnew System::EventHandler(this, &FormulaireGestionPersonnel::button3_Click);
            // 
            // label13
            // 
            this->label13->AutoSize = true;
            this->label13->Font = (gcnew System::Drawing::Font(L"Consolas", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
                static_cast<System::Int32>(static_cast<System::Byte>(251)));
            this->label13->Location = System::Drawing::Point(22, 199);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(105, 33);
            this->label13->TabIndex = 49;
            this->label13->Text = L"Pr�nom";
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Font = (gcnew System::Drawing::Font(L"Consolas", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
                static_cast<System::Int32>(static_cast<System::Byte>(251)));
            this->label7->Location = System::Drawing::Point(8, 665);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(90, 33);
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
            this->label12->Location = System::Drawing::Point(11, 297);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(251, 32);
            this->label12->TabIndex = 50;
            this->label12->Text = L"Date d\'embauche";
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Font = (gcnew System::Drawing::Font(L"Consolas", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
                static_cast<System::Int32>(static_cast<System::Byte>(251)));
            this->label6->Location = System::Drawing::Point(11, 581);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(255, 33);
            this->label6->TabIndex = 57;
            this->label6->Text = L"Rue et n� de rue";
            // 
            // dateTimePicker_personnel
            // 
            this->dateTimePicker_personnel->CalendarMonthBackground = System::Drawing::SystemColors::WindowFrame;
            this->dateTimePicker_personnel->CalendarTitleForeColor = System::Drawing::Color::AliceBlue;
            this->dateTimePicker_personnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
            this->dateTimePicker_personnel->Location = System::Drawing::Point(17, 342);
            this->dateTimePicker_personnel->Name = L"dateTimePicker_personnel";
            this->dateTimePicker_personnel->Size = System::Drawing::Size(460, 35);
            this->dateTimePicker_personnel->TabIndex = 51;
            // 
            // panel1
            // 
            this->panel1->Controls->Add(this->comboBox1);
            this->panel1->Controls->Add(this->textBox6);
            this->panel1->Controls->Add(this->textBox5);
            this->panel1->Controls->Add(this->textBox4);
            this->panel1->Controls->Add(this->textBox3);
            this->panel1->Controls->Add(this->textBox2);
            this->panel1->Controls->Add(this->textBox7);
            this->panel1->Controls->Add(this->textBox1);
            this->panel1->Controls->Add(this->button5);
            this->panel1->Controls->Add(this->label1);
            this->panel1->Controls->Add(this->label2);
            this->panel1->Controls->Add(this->label15);
            this->panel1->Controls->Add(this->button_valider);
            this->panel1->Controls->Add(this->label14);
            this->panel1->Controls->Add(this->label8);
            this->panel1->Controls->Add(this->label13);
            this->panel1->Controls->Add(this->label7);
            this->panel1->Controls->Add(this->label12);
            this->panel1->Controls->Add(this->label6);
            this->panel1->Controls->Add(this->dateTimePicker_personnel);
            this->panel1->Location = System::Drawing::Point(1120, 39);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(502, 946);
            this->panel1->TabIndex = 95;
            // 
            // comboBox1
            // 
            this->comboBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(41)));
            this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->comboBox1->FormattingEnabled = true;
            this->comboBox1->IntegralHeight = false;
            this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"France", L"Belgique", L"Canada" });
            this->comboBox1->Location = System::Drawing::Point(19, 795);
            this->comboBox1->Name = L"comboBox1";
            this->comboBox1->Size = System::Drawing::Size(457, 37);
            this->comboBox1->TabIndex = 107;
            // 
            // textBox6
            // 
            this->textBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(41)));
            this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox6->ForeColor = System::Drawing::Color::White;
            this->textBox6->Location = System::Drawing::Point(16, 706);
            this->textBox6->Name = L"textBox6";
            this->textBox6->Size = System::Drawing::Size(460, 35);
            this->textBox6->TabIndex = 106;
            // 
            // textBox5
            // 
            this->textBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(41)));
            this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox5->ForeColor = System::Drawing::Color::White;
            this->textBox5->Location = System::Drawing::Point(16, 622);
            this->textBox5->Name = L"textBox5";
            this->textBox5->Size = System::Drawing::Size(460, 35);
            this->textBox5->TabIndex = 105;
            // 
            // textBox4
            // 
            this->textBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(41)));
            this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox4->ForeColor = System::Drawing::Color::White;
            this->textBox4->Location = System::Drawing::Point(19, 520);
            this->textBox4->Name = L"textBox4";
            this->textBox4->Size = System::Drawing::Size(460, 35);
            this->textBox4->TabIndex = 104;
            // 
            // textBox3
            // 
            this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(41)));
            this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox3->ForeColor = System::Drawing::Color::White;
            this->textBox3->Location = System::Drawing::Point(16, 244);
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(460, 35);
            this->textBox3->TabIndex = 103;
            this->textBox3->TextChanged += gcnew System::EventHandler(this, &FormulaireGestionPersonnel::textBox3_TextChanged_1);
            // 
            // textBox2
            // 
            this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(41)));
            this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox2->ForeColor = System::Drawing::Color::White;
            this->textBox2->Location = System::Drawing::Point(17, 436);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(460, 35);
            this->textBox2->TabIndex = 102;
            this->textBox2->TextChanged += gcnew System::EventHandler(this, &FormulaireGestionPersonnel::textBox2_TextChanged_1);
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
            this->textBox7->TextChanged += gcnew System::EventHandler(this, &FormulaireGestionPersonnel::textBox7_TextChanged);
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
            this->textBox1->TextChanged += gcnew System::EventHandler(this, &FormulaireGestionPersonnel::textBox1_TextChanged);
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
            this->button5->Click += gcnew System::EventHandler(this, &FormulaireGestionPersonnel::button5_Click_1);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Consolas", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
                static_cast<System::Int32>(static_cast<System::Byte>(251)));
            this->label1->Location = System::Drawing::Point(10, 484);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(300, 33);
            this->label1->TabIndex = 68;
            this->label1->Text = L"Pr�nom du sup�rieur";
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
            this->label2->Size = System::Drawing::Size(255, 33);
            this->label2->TabIndex = 66;
            this->label2->Text = L"Nom du sup�rieur";
            // 
            // richTextBox1
            // 
            this->richTextBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                static_cast<System::Int32>(static_cast<System::Byte>(73)));
            this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->richTextBox1->ForeColor = System::Drawing::Color::White;
            this->richTextBox1->Location = System::Drawing::Point(309, 39);
            this->richTextBox1->Name = L"richTextBox1";
            this->richTextBox1->Size = System::Drawing::Size(758, 932);
            this->richTextBox1->TabIndex = 105;
            this->richTextBox1->Text = L"";
            this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &FormulaireGestionPersonnel::richTextBox1_TextChanged);
            // 
            // FormulaireGestionPersonnel
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
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
            this->Name = L"FormulaireGestionPersonnel";
            this->Text = L"FormulaireGestionPersonnel";
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            this->ResumeLayout(false);

        }
#pragma endregion

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
    this->richTextBox1->Text = " "+ this->button1->Text;
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click_1(System::Object^ sender, System::EventArgs^ e) {
    this->Close();
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
    this->richTextBox1->Text = " "+ this->button2->Text;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
    
    this->richTextBox1->Text = " "+ this->button3->Text;
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
    this->richTextBox1->Text = " "+ this->button4->Text;
}
};
}
