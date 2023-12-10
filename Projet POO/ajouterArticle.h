#pragma once

#include "gestionArticlesFormulaire.h"
#include "gestionCommandes.h"
#include "gestionArticles.h"

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



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ quantiteTextBox;


	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ idTextBox;

	private: System::Windows::Forms::Button^ button_valider;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ rechercheTextBox;

	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;

	protected:






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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->rechercheTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->quantiteTextBox = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->idTextBox = (gcnew System::Windows::Forms::TextBox());
			this->button_valider = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->rechercheTextBox);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->quantiteTextBox);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->label15);
			this->panel1->Controls->Add(this->idTextBox);
			this->panel1->Controls->Add(this->button_valider);
			this->panel1->Location = System::Drawing::Point(639, 15);
			this->panel1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(335, 615);
			this->panel1->TabIndex = 107;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Consolas", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->label3->Location = System::Drawing::Point(15, 75);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(190, 22);
			this->label3->TabIndex = 105;
			this->label3->Text = L"Rechercher Article";
			// 
			// rechercheTextBox
			// 
			this->rechercheTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->rechercheTextBox->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->rechercheTextBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(188)), static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->rechercheTextBox->Location = System::Drawing::Point(11, 111);
			this->rechercheTextBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->rechercheTextBox->Name = L"rechercheTextBox";
			this->rechercheTextBox->Size = System::Drawing::Size(308, 20);
			this->rechercheTextBox->TabIndex = 104;
			this->rechercheTextBox->TextChanged += gcnew System::EventHandler(this, &ajouterArticle::rechercheTextBox_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Consolas", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->label1->Location = System::Drawing::Point(15, 257);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(190, 22);
			this->label1->TabIndex = 101;
			this->label1->Text = L"Quantité à ajouter";
			// 
			// quantiteTextBox
			// 
			this->quantiteTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->quantiteTextBox->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->quantiteTextBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->quantiteTextBox->Location = System::Drawing::Point(11, 293);
			this->quantiteTextBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->quantiteTextBox->Name = L"quantiteTextBox";
			this->quantiteTextBox->Size = System::Drawing::Size(308, 20);
			this->quantiteTextBox->TabIndex = 100;
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
			this->button5->Location = System::Drawing::Point(235, 0);
			this->button5->Margin = System::Windows::Forms::Padding(0);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(91, 35);
			this->button5->TabIndex = 99;
			this->button5->Text = L"Retour";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &ajouterArticle::button5_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Consolas", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->label15->Location = System::Drawing::Point(15, 188);
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
			this->idTextBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->idTextBox->Location = System::Drawing::Point(11, 224);
			this->idTextBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->idTextBox->Name = L"idTextBox";
			this->idTextBox->Size = System::Drawing::Size(308, 20);
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
			this->button_valider->Location = System::Drawing::Point(8, 439);
			this->button_valider->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button_valider->Name = L"button_valider";
			this->button_valider->Size = System::Drawing::Size(310, 52);
			this->button_valider->TabIndex = 62;
			this->button_valider->Text = L"Valider";
			this->button_valider->UseVisualStyleBackColor = false;
			this->button_valider->Click += gcnew System::EventHandler(this, &ajouterArticle::button_valider_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->ForeColor = System::Drawing::Color::White;
			this->richTextBox1->Location = System::Drawing::Point(58, 15);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(505, 606);
			this->richTextBox1->TabIndex = 112;
			this->richTextBox1->Text = L"";
			// 
			// ajouterArticle
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->ClientSize = System::Drawing::Size(993, 647);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"ajouterArticle";
			this->Text = L"ajouterArticle";
			this->Load += gcnew System::EventHandler(this, &ajouterArticle::ajouterArticle_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	public:
		property NS_composants::articles^ choixUtilisateur;

	private:
		System::Collections::Generic::List<NS_composants::articles^>^ articlesList;
		NS_services::gestionArticles^ gestionDesArticles;

	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void button_valider_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->idTextBox->Text == "" || this->quantiteTextBox->Text == "") {
		MessageBox::Show("Veuillez remplir les champs nécessaires");
		return;
	}
	if (!(this->gestionDesArticles->verifierStock(this->idTextBox->Text, this->quantiteTextBox->Text))) {
		MessageBox::Show("Erreur d'entrée dans l'article ou stock épuisées");
		return;
	}
	NS_composants::Articles^ articleChoisi = this->gestionDesArticles->obtenirArticle(this->idTextBox->Text);
	if (articleChoisi == nullptr) {
		MessageBox::Show("Article non trouvé");
		return;
	}
	this->choixUtilisateur = gcnew NS_composants::articles;
	this->choixUtilisateur->idEntrepot = "1";
	this->choixUtilisateur->idArticle = articleChoisi->getidArticles();;
	this->choixUtilisateur->quantite = this->quantiteTextBox->Text;
	this->choixUtilisateur->nom = articleChoisi->getNom();
	this->choixUtilisateur->prix = (articleChoisi->getPrix() * Convert::ToInt64(this->quantiteTextBox->Text)).ToString();
	this->Close();
}
private: System::Void ajouterArticle_Load(System::Object^ sender, System::EventArgs^ e) {
	this->choixUtilisateur = nullptr;
	this->articlesList = nullptr;
	this->gestionDesArticles = gcnew NS_services::gestionArticles;
}
private: System::Void rechercheTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	this->richTextBox1->Text = "";
	this->articlesList = this->gestionDesArticles->rechercherArticle(this->rechercheTextBox->Text);
	if (this->articlesList == nullptr)this->richTextBox1->Text = "Aucun article trouvé";
	for each (NS_composants::articles ^ i in this->articlesList) {
		this->richTextBox1->Text += "ID : " + i->idArticle + ", Nom d'article : " + i->nom + "\n\tprix : " + i->prix + "\n\tstock : " + i->quantite + "\n\n";
	}
}
};
}
