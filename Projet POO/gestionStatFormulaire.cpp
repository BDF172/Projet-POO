#include "GestionStatFormulaire.h"
#include "gestionValeurs.h"

using namespace System;
using namespace ProjetPOO;
using namespace NS_composants;
using namespace NS_services;
using namespace System::Drawing;
using namespace Collections::Generic;

Void GestionStatFormulaire::button5_Click(Object^ sender, EventArgs^ e) {
		this->richTextBox1->Text = " " + this->button5->Text;
		
}
	Void GestionStatFormulaire::button4_Click_1(Object^ sender, EventArgs^ e) {
		this->richTextBox1->Text = " " + this->button4->Text;
		
	}
	Void GestionStatFormulaire::button3_Click_1(Object^ sender, EventArgs^ e) {
		this->richTextBox1->Text = " " + this->button3->Text;
		
	}

Void GestionStatFormulaire::button2_Click_1(Object^ sender, EventArgs^ e) {
	this->richTextBox1->Text = " " + this->button2->Text;
	this->button1->ForeColor = Color::FromArgb(192, 188, 251);
	this->button3->ForeColor = Color::FromArgb(244, 184, 228);
	this->button4->ForeColor = Color::FromArgb(239, 159, 118);
	this->button2->ForeColor = Color::FromArgb(255, 255, 255);
	this->button7->ForeColor = Color::FromArgb(166, 227, 161);
	this->button8->ForeColor = Color::FromArgb(229, 200, 144);
	this->button9->ForeColor = Color::FromArgb(129, 200, 190);
	this->button10->ForeColor = Color::FromArgb(202, 158, 230);
	this->button11->ForeColor = Color::FromArgb(238, 190, 190);
	this->button2->BackColor = Color::FromArgb(153, 209, 219);
	this->button1->BackColor = Color::FromArgb(18, 17, 41);
	this->button3->BackColor = Color::FromArgb(18, 17, 41);
	this->button4->BackColor = Color::FromArgb(18, 17, 41);
	this->button11->BackColor = Color::FromArgb(18, 17, 41);
	this->button7->BackColor = Color::FromArgb(18, 17, 41);
	this->button8->BackColor = Color::FromArgb(18, 17, 41);
	this->button9->BackColor = Color::FromArgb(18, 17, 41);
	this->button10->BackColor = Color::FromArgb(18, 17, 41);
	this->label38->Visible = false;
	this->label39->Visible = false;
	this->label40->Visible = false;
	this->label41->Visible = false;
	this->tvaComboBox->Visible = false;
	this->demarqueComboBox->Visible = false;
	this->margeComboBox->Visible = false;
	this->remiseComboBox->Visible = false;
	this->button_valider->Visible = false;
}
Void GestionStatFormulaire::button11_Click(Object^ sender, EventArgs^ e) {
	this->richTextBox1->Text = " " + this->button11->Text;
	this->button1->ForeColor = Color::FromArgb(192, 188, 251);
	this->button2->ForeColor = Color::FromArgb(153, 209, 219);
	this->button4->ForeColor = Color::FromArgb(239, 159, 118);
	this->button11->ForeColor = Color::FromArgb(255, 255, 255);
	this->button7->ForeColor = Color::FromArgb(166, 227, 161);
	this->button8->ForeColor = Color::FromArgb(229, 200, 144);
	this->button9->ForeColor = Color::FromArgb(129, 200, 190);
	this->button10->ForeColor = Color::FromArgb(202, 158, 230);
	this->button11->BackColor = Color::FromArgb(238, 190, 190);
	this->button3->ForeColor = Color::FromArgb(244, 184, 228);
	this->button1->BackColor = Color::FromArgb(18, 17, 41);
	this->button2->BackColor = Color::FromArgb(18, 17, 41);
	this->button3->BackColor = Color::FromArgb(18, 17, 41);
	this->button10->BackColor = Color::FromArgb(18, 17, 41);
	this->button4->BackColor = Color::FromArgb(18, 17, 41);
	this->button7->BackColor = Color::FromArgb(18, 17, 41);
	this->button8->BackColor = Color::FromArgb(18, 17, 41);
	this->button9->BackColor = Color::FromArgb(18, 17, 41);
	this->richTextBox1->Text = "Valeur d'achat du stock : \n" +
		(this->valeurCommerciale == -1 ? "Erreur de calcul" : this->valeurCommerciale.ToString());
	this->choixFonction = 'V';
	this->label38->Visible = true;
	this->label39->Visible = true;
	this->label40->Visible = true;
	this->label41->Visible = true;
	this->tvaComboBox->Visible = true;
	this->demarqueComboBox->Visible = true;
	this->margeComboBox->Visible = true;
	this->remiseComboBox->Visible = true;
	this->button_valider->Visible = true;
}
Void GestionStatFormulaire::button1_Click_1(Object^ sender, EventArgs^ e) {
	this->richTextBox1->Text = " " + this->button1->Text;
	this->button2->ForeColor = Color::FromArgb(153, 209, 219);
	this->button3->ForeColor = Color::FromArgb(244, 184, 228);
	this->button4->ForeColor = Color::FromArgb(239, 159, 118);
	this->button1->ForeColor = Color::FromArgb(255, 255, 255);
	this->button7->ForeColor = Color::FromArgb(166, 227, 161);
	this->button8->ForeColor = Color::FromArgb(229, 200, 144);
	this->button9->ForeColor = Color::FromArgb(129, 200, 190);
	this->button10->ForeColor = Color::FromArgb(202, 158, 230);
	this->button11->ForeColor = Color::FromArgb(238, 190, 190);
	this->button1->BackColor = Color::FromArgb(202, 158, 230);
	this->button2->BackColor = Color::FromArgb(18, 17, 41);
	this->button3->BackColor = Color::FromArgb(18, 17, 41);
	this->button4->BackColor = Color::FromArgb(18, 17, 41);
	this->button11->BackColor = Color::FromArgb(18, 17, 41);
	this->button7->BackColor = Color::FromArgb(18, 17, 41);
	this->button8->BackColor = Color::FromArgb(18, 17, 41);
	this->button9->BackColor = Color::FromArgb(18, 17, 41);
	this->button10->BackColor = Color::FromArgb(18, 17, 41);
	this->label38->Visible = false;
	this->label39->Visible = false;
	this->label40->Visible = false;
	this->label41->Visible = false;
	this->tvaComboBox->Visible = false;
	this->demarqueComboBox->Visible = false;
	this->margeComboBox->Visible = false;
	this->remiseComboBox->Visible = false;
	this->button_valider->Visible = false;
	Double result = this->gestionDesStats->CalculerPanierMoyen();
	if (result == -1) this->richTextBox1->Text = "Erreur lors de la récupération";
	else this->richTextBox1->Text = result.ToString();
}
Void GestionStatFormulaire::button3_Click(Object^ sender, EventArgs^ e) {
	this->richTextBox1->Text = " " + this->button3->Text;
	this->button1->ForeColor = Color::FromArgb(192, 188, 251);
	this->button2->ForeColor = Color::FromArgb(153, 209, 219);
	this->button4->ForeColor = Color::FromArgb(239, 159, 118);
	this->button3->ForeColor = Color::FromArgb(255, 255, 255);
	this->button7->ForeColor = Color::FromArgb(166, 227, 161);
	this->button8->ForeColor = Color::FromArgb(229, 200, 144);
	this->button9->ForeColor = Color::FromArgb(129, 200, 190);
	this->button10->ForeColor = Color::FromArgb(202, 158, 230);
	this->button11->ForeColor = Color::FromArgb(238, 190, 190);
	this->button3->BackColor = Color::FromArgb(244, 184, 228);
	this->button1->BackColor = Color::FromArgb(18, 17, 41);
	this->button2->BackColor = Color::FromArgb(18, 17, 41);
	this->button4->BackColor = Color::FromArgb(18, 17, 41);
	this->button11->BackColor = Color::FromArgb(18, 17, 41);
	this->button7->BackColor = Color::FromArgb(18, 17, 41);
	this->button8->BackColor = Color::FromArgb(18, 17, 41);
	this->button9->BackColor = Color::FromArgb(18, 17, 41);
	this->button10->BackColor = Color::FromArgb(18, 17, 41);
	this->label38->Visible = false;
	this->label39->Visible = false;
	this->label40->Visible = false;
	this->label41->Visible = false;
	this->tvaComboBox->Visible = false;
	this->demarqueComboBox->Visible = false;
	this->margeComboBox->Visible = false;
	this->remiseComboBox->Visible = false;
	this->button_valider->Visible = false;
	List<NS_composants::Articles^>^ articlesReappro = this->gestionDesStats->sousSeuilReappro();
	if (articlesReappro == nullptr) {
		this->richTextBox1->Text = "Erreur lors de la récupération des données";
		return;
	}
	if (articlesReappro->Count == 0) {
		this->richTextBox1->Text = "Aucun article à réapprovisionner";
		return;
	}
	this->richTextBox1->Text = "Articles à réapprovisionner : \n";
	for each (NS_composants::Articles ^ i in articlesReappro) {
		this->richTextBox1->Text += "\t" + i->getidArticles() + " : " + i->getNom() + "\n";
	}
}
Void GestionStatFormulaire::button4_Click(Object^ sender, EventArgs^ e) {
	this->richTextBox1->Text = " " + this->button4->Text;
	this->button1->ForeColor = Color::FromArgb(192, 188, 251);
	this->button2->ForeColor = Color::FromArgb(153, 209, 219);
	this->button4->BackColor = Color::FromArgb(239, 159, 118);
	this->button4->ForeColor = Color::FromArgb(255, 255, 255);
	this->button7->ForeColor = Color::FromArgb(166, 227, 161);
	this->button8->ForeColor = Color::FromArgb(229, 200, 144);
	this->button9->ForeColor = Color::FromArgb(129, 200, 190);
	this->button10->ForeColor = Color::FromArgb(202, 158, 230);
	this->button11->ForeColor = Color::FromArgb(238, 190, 190);
	this->button3->ForeColor = Color::FromArgb(244, 184, 228);
	this->button1->BackColor = Color::FromArgb(18, 17, 41);
	this->button2->BackColor = Color::FromArgb(18, 17, 41);
	this->button3->BackColor = Color::FromArgb(18, 17, 41);
	this->button11->BackColor = Color::FromArgb(18, 17, 41);
	this->button7->BackColor = Color::FromArgb(18, 17, 41);
	this->button8->BackColor = Color::FromArgb(18, 17, 41);
	this->button9->BackColor = Color::FromArgb(18, 17, 41);
	this->button10->BackColor = Color::FromArgb(18, 17, 41);
	this->label38->Visible = false;
	this->label39->Visible = false;
	this->label40->Visible = false;
	this->label41->Visible = false;
	this->tvaComboBox->Visible = false;
	this->demarqueComboBox->Visible = false;
	this->margeComboBox->Visible = false;
	this->remiseComboBox->Visible = false;
	this->button_valider->Visible = false;
}
Void GestionStatFormulaire::button7_Click(Object^ sender, EventArgs^ e) {
	this->richTextBox1->Text = " " + this->button7->Text;
	this->button1->ForeColor = Color::FromArgb(192, 188, 251);
	this->button2->ForeColor = Color::FromArgb(153, 209, 219);
	this->button4->ForeColor = Color::FromArgb(239, 159, 118);
	this->button7->ForeColor = Color::FromArgb(255, 255, 255);
	this->button7->BackColor = Color::FromArgb(166, 227, 161);
	this->button8->ForeColor = Color::FromArgb(229, 200, 144);
	this->button9->ForeColor = Color::FromArgb(129, 200, 190);
	this->button10->ForeColor = Color::FromArgb(202, 158, 230);
	this->button11->ForeColor = Color::FromArgb(238, 190, 190);
	this->button3->ForeColor = Color::FromArgb(244, 184, 228);
	this->button1->BackColor = Color::FromArgb(18, 17, 41);
	this->button2->BackColor = Color::FromArgb(18, 17, 41);
	this->button3->BackColor = Color::FromArgb(18, 17, 41);
	this->button11->BackColor = Color::FromArgb(18, 17, 41);
	this->button4->BackColor = Color::FromArgb(18, 17, 41);
	this->button8->BackColor = Color::FromArgb(18, 17, 41);
	this->button9->BackColor = Color::FromArgb(18, 17, 41);
	this->button10->BackColor = Color::FromArgb(18, 17, 41);
	this->label38->Visible = false;
	this->label39->Visible = false;
	this->label40->Visible = false;
	this->label41->Visible = false;
	this->tvaComboBox->Visible = false;
	this->demarqueComboBox->Visible = false;
	this->margeComboBox->Visible = false;
	this->remiseComboBox->Visible = false;
	this->button_valider->Visible = false;
	List<NS_composants::Articles^>^ articlesReappro = this->gestionDesStats->TopPlusVendus();
	if (articlesReappro == nullptr) {
		this->richTextBox1->Text = "Erreur lors de la récupération des données";
		return;
	}
	if (articlesReappro->Count == 0) {
		this->richTextBox1->Text = "Aucun article à recenser";
		return;
	}
	this->richTextBox1->Text = "Articles les plus vendus : \n";
	for each (NS_composants::Articles ^ i in articlesReappro) {
		if (i == nullptr) MessageBox::Show("Erreur");
		else this->richTextBox1->Text += "\t" + i->getidArticles() + " : " + i->getNom() + "\n";
	}
}
Void GestionStatFormulaire::button8_Click(Object^ sender, EventArgs^ e) {
	this->richTextBox1->Text = " " + this->button8->Text;
	this->button1->ForeColor = Color::FromArgb(192, 188, 251);
	this->button2->ForeColor = Color::FromArgb(153, 209, 219);
	this->button4->ForeColor = Color::FromArgb(239, 159, 118);
	this->button8->ForeColor = Color::FromArgb(255, 255, 255);
	this->button7->ForeColor = Color::FromArgb(166, 227, 161);
	this->button8->BackColor = Color::FromArgb(229, 200, 144);
	this->button9->ForeColor = Color::FromArgb(129, 200, 190);
	this->button10->ForeColor = Color::FromArgb(202, 158, 230);
	this->button11->ForeColor = Color::FromArgb(238, 190, 190);
	this->button3->ForeColor = Color::FromArgb(244, 184, 228);
	this->button1->BackColor = Color::FromArgb(18, 17, 41);
	this->button2->BackColor = Color::FromArgb(18, 17, 41);
	this->button3->BackColor = Color::FromArgb(18, 17, 41);
	this->button11->BackColor = Color::FromArgb(18, 17, 41);
	this->button4->BackColor = Color::FromArgb(18, 17, 41);
	this->button7->BackColor = Color::FromArgb(18, 17, 41);
	this->button9->BackColor = Color::FromArgb(18, 17, 41);
	this->button10->BackColor = Color::FromArgb(18, 17, 41);
	this->label38->Visible = false;
	this->label39->Visible = false;
	this->label40->Visible = false;
	this->label41->Visible = false;
	this->tvaComboBox->Visible = false;
	this->demarqueComboBox->Visible = false;
	this->margeComboBox->Visible = false;
	this->remiseComboBox->Visible = false;
	this->button_valider->Visible = false;
	List<NS_composants::Articles^>^ articlesReappro = this->gestionDesStats->TopMoinsVendus();
	if (articlesReappro == nullptr) {
		this->richTextBox1->Text = "Erreur lors de la récupération des données";
		return;
	}
	if (articlesReappro->Count == 0) {
		this->richTextBox1->Text = "Aucun article à recenser";
		return;
	}
	this->richTextBox1->Text = "Articles les moins vendus : \n";
	for each (NS_composants::Articles ^ i in articlesReappro) {
		if (i == nullptr) MessageBox::Show("Erreur");
		else this->richTextBox1->Text += "\t" + i->getidArticles() + " : " + i->getNom() + "\n";
	}
}
Void GestionStatFormulaire::button9_Click_1(Object^ sender, EventArgs^ e) {
	this->richTextBox1->Text = " " + this->button9->Text;
	this->button1->ForeColor = Color::FromArgb(192, 188, 251);
	this->button2->ForeColor = Color::FromArgb(153, 209, 219);
	this->button4->ForeColor = Color::FromArgb(239, 159, 118);
	this->button9->ForeColor = Color::FromArgb(255, 255, 255);
	this->button7->ForeColor = Color::FromArgb(166, 227, 161);
	this->button8->ForeColor = Color::FromArgb(229, 200, 144);
	this->button9->BackColor = Color::FromArgb(129, 200, 190);
	this->button10->ForeColor = Color::FromArgb(202, 158, 230);
	this->button11->ForeColor = Color::FromArgb(238, 190, 190);
	this->button3->ForeColor = Color::FromArgb(244, 184, 228);
	this->button1->BackColor = Color::FromArgb(18, 17, 41);
	this->button2->BackColor = Color::FromArgb(18, 17, 41);
	this->button3->BackColor = Color::FromArgb(18, 17, 41);
	this->button11->BackColor = Color::FromArgb(18, 17, 41);
	this->button4->BackColor = Color::FromArgb(18, 17, 41);
	this->button7->BackColor = Color::FromArgb(18, 17, 41);
	this->button8->BackColor = Color::FromArgb(18, 17, 41);
	this->button10->BackColor = Color::FromArgb(18, 17, 41);
	this->label38->Visible = false;
	this->label39->Visible = false;
	this->label40->Visible = false;
	this->label41->Visible = false;
	this->tvaComboBox->Visible = false;
	this->demarqueComboBox->Visible = false;
	this->margeComboBox->Visible = false;
	this->remiseComboBox->Visible = false;
	this->button_valider->Visible = false;
}
Void GestionStatFormulaire::button10_Click(Object^ sender, EventArgs^ e) {
	this->button1->ForeColor = Color::FromArgb(192, 188, 251);
	this->button2->ForeColor = Color::FromArgb(153, 209, 219);
	this->button4->ForeColor = Color::FromArgb(239, 159, 118);
	this->button10->ForeColor = Color::FromArgb(255, 255, 255);
	this->button7->ForeColor = Color::FromArgb(166, 227, 161);
	this->button8->ForeColor = Color::FromArgb(229, 200, 144);
	this->button9->ForeColor = Color::FromArgb(129, 200, 190);
	this->button10->BackColor = Color::FromArgb(202, 158, 230);
	this->button11->ForeColor = Color::FromArgb(238, 190, 190);
	this->button3->ForeColor = Color::FromArgb(244, 184, 228);
	this->button1->BackColor = Color::FromArgb(18, 17, 41);
	this->button2->BackColor = Color::FromArgb(18, 17, 41);
	this->button3->BackColor = Color::FromArgb(18, 17, 41);
	this->button11->BackColor = Color::FromArgb(18, 17, 41);
	this->button4->BackColor = Color::FromArgb(18, 17, 41);
	this->button7->BackColor = Color::FromArgb(18, 17, 41);
	this->button8->BackColor = Color::FromArgb(18, 17, 41);
	this->button9->BackColor = Color::FromArgb(18, 17, 41);
	this->label38->Visible = false;
	this->label39->Visible = false;
	this->label40->Visible = false;
	this->label41->Visible = false;
	this->tvaComboBox->Visible = false;
	this->demarqueComboBox->Visible = false;
	this->margeComboBox->Visible = false;
	this->remiseComboBox->Visible = false;
	this->button_valider->Visible = false;
	this->richTextBox1->Text = "Valeur d'achat du stock : \n" +
		(this->valeurCommerciale == -1 ? "Erreur de calcul" : this->valeurCommerciale.ToString());
}
Void GestionStatFormulaire::button5_Click_1(Object^ sender, EventArgs^ e) {
	this->Close();
}
Void GestionStatFormulaire::button_valider_Click_1(Object^ sender, EventArgs^ e) {
	if (this->choixFonction == 'N') {
		MessageBox::Show("Veuillez choisir une action");
		return;
	}
	if (this->choixFonction == 'V') {
		if (!(this->DicoRemise->ContainsKey(this->remiseComboBox->Text))
			|| !(this->DicoDemarque->ContainsKey(this->demarqueComboBox->Text))
			|| !(this->DicoTva->ContainsKey(this->tvaComboBox->Text))
			|| !(this->DicoMarge->ContainsKey(this->margeComboBox->Text)))
			MessageBox::Show("Impossible de valider les options sélectionnées");
		else
			this->richTextBox1->Text = "Valeur du stock calculée : \n" +
				this->valeurCommerciale * DicoDemarque[this->demarqueComboBox->Text] *
				DicoMarge[this->margeComboBox->Text] *
				DicoRemise[this->remiseComboBox->Text] *
				DicoTva[this->tvaComboBox->Text];
	}		
}
Void GestionStatFormulaire::GestionStatFormulaire_Load(Object^ sender, EventArgs^ e) {
	this->gestionDesStats = gcnew gestionStats;
	this->DicoTva = gcnew Dictionary<String^, Double>;
	this->DicoDemarque = gcnew Dictionary<String^, Double>;
	this->DicoMarge = gcnew Dictionary<String^, Double>;
	this->DicoRemise = gcnew Dictionary<String^, Double>;
	this->valeurCommerciale = this->gestionDesStats->ObtenirValeurStock();
	this->choixFonction = 'N';

	this->DicoTva->Add("5%", 1.05);
	this->DicoTva->Add("10%", 1.1);
	this->DicoTva->Add("20%", 1.2);
	this->tvaComboBox->Items->Clear();
	this->tvaComboBox->Items->Add("5%");
	this->tvaComboBox->Items->Add("10%");
	this->tvaComboBox->Items->Add("20%");

	this->DicoDemarque->Add("2%", 0.98);
	this->DicoDemarque->Add("5%", 0.95);
	this->DicoDemarque->Add("6%", 0.94);
	this->demarqueComboBox->Items->Clear();
	this->demarqueComboBox->Items->Add("2%");
	this->demarqueComboBox->Items->Add("5%");
	this->demarqueComboBox->Items->Add("6%");

	this->DicoMarge->Add("10%", 1.05);
	this->DicoMarge->Add("15%", 1.1);
	this->margeComboBox->Items->Clear();
	this->margeComboBox->Items->Add("10%");
	this->margeComboBox->Items->Add("15%");

	this->DicoRemise->Add("5%", 0.95);
	this->DicoRemise->Add("6%", 0.94);
	this->remiseComboBox->Items->Clear();
	this->remiseComboBox->Items->Add("5%");
	this->remiseComboBox->Items->Add("6%");

	this->label38->Visible = false;
	this->label39->Visible = false;
	this->label40->Visible = false;
	this->label41->Visible = false;
	this->tvaComboBox->Visible = false;
	this->demarqueComboBox->Visible = false;
	this->margeComboBox->Visible = false;
	this->remiseComboBox->Visible = false;
	this->button_valider->Visible = false;
}