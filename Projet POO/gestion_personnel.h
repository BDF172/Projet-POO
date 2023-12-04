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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(gestionP::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
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
			// gestionP
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1857, 1135);
			this->Controls->Add(this->button_retour_personnel);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"gestionP";
			this->Text = L"gestion_personnel";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button_retour_personnel_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	};
}
