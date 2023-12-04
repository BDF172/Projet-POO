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
	private: System::Windows::Forms::Button^ button_personnel;
	protected:

	private: System::Windows::Forms::Button^ button_client;

	private: System::Windows::Forms::Button^ button_commande;
	private: System::Windows::Forms::Button^ button_stock;
	private: System::Windows::Forms::Button^ button_stat;

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
			this->button_personnel = (gcnew System::Windows::Forms::Button());
			this->button_client = (gcnew System::Windows::Forms::Button());
			this->button_commande = (gcnew System::Windows::Forms::Button());
			this->button_stock = (gcnew System::Windows::Forms::Button());
			this->button_stat = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button_personnel
			// 
			this->button_personnel->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button_personnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28));
			this->button_personnel->Location = System::Drawing::Point(37, 35);
			this->button_personnel->Name = L"button_personnel";
			this->button_personnel->Size = System::Drawing::Size(1195, 128);
			this->button_personnel->TabIndex = 0;
			this->button_personnel->Text = L"Gestion Personnel";
			this->button_personnel->UseVisualStyleBackColor = false;
			this->button_personnel->Click += gcnew System::EventHandler(this, &principal::button_personnel_Click);
			// 
			// button_client
			// 
			this->button_client->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button_client->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28));
			this->button_client->Location = System::Drawing::Point(37, 169);
			this->button_client->Name = L"button_client";
			this->button_client->Size = System::Drawing::Size(1195, 128);
			this->button_client->TabIndex = 1;
			this->button_client->Text = L"Gestion Client";
			this->button_client->UseVisualStyleBackColor = false;
			this->button_client->Click += gcnew System::EventHandler(this, &principal::button_client_Click);
			// 
			// button_commande
			// 
			this->button_commande->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button_commande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28));
			this->button_commande->Location = System::Drawing::Point(37, 303);
			this->button_commande->Name = L"button_commande";
			this->button_commande->Size = System::Drawing::Size(1195, 128);
			this->button_commande->TabIndex = 2;
			this->button_commande->Text = L"Gestion Commande";
			this->button_commande->UseVisualStyleBackColor = false;
			this->button_commande->Click += gcnew System::EventHandler(this, &principal::button_commande_Click);
			// 
			// button_stock
			// 
			this->button_stock->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button_stock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28));
			this->button_stock->Location = System::Drawing::Point(37, 437);
			this->button_stock->Name = L"button_stock";
			this->button_stock->Size = System::Drawing::Size(1195, 128);
			this->button_stock->TabIndex = 3;
			this->button_stock->Text = L"Gestion Stock";
			this->button_stock->UseVisualStyleBackColor = false;
			this->button_stock->Click += gcnew System::EventHandler(this, &principal::button_stock_Click);
			// 
			// button_stat
			// 
			this->button_stat->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button_stat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28));
			this->button_stat->Location = System::Drawing::Point(37, 571);
			this->button_stat->Name = L"button_stat";
			this->button_stat->Size = System::Drawing::Size(1195, 128);
			this->button_stat->TabIndex = 4;
			this->button_stat->Text = L"Gestion Statistique";
			this->button_stat->UseVisualStyleBackColor = false;
			this->button_stat->Click += gcnew System::EventHandler(this, &principal::button_stat_Click);
			// 
			// principal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1293, 736);
			this->Controls->Add(this->button_stat);
			this->Controls->Add(this->button_stock);
			this->Controls->Add(this->button_commande);
			this->Controls->Add(this->button_client);
			this->Controls->Add(this->button_personnel);
			this->Name = L"principal";
			this->Text = L"principal";
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void button_personnel_Click(System::Object^ sender, System::EventArgs^ e) {
	ProjetPOO::gestionP pageGestionPersonnel;
	Application::EnableVisualStyles();
	pageGestionPersonnel.ShowDialog();
}
private: System::Void button_commande_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button_client_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button_stock_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button_stat_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
