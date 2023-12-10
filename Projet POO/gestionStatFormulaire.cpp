#include "GestionStatFormulaire.h"

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
}
Void GestionStatFormulaire::button10_Click(Object^ sender, EventArgs^ e) {
	this->richTextBox1->Text = " " + this->button10->Text;
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
}
Void GestionStatFormulaire::button5_Click_1(Object^ sender, EventArgs^ e) {
	this->Close();
}
Void GestionStatFormulaire::button_valider_Click_1(Object^ sender, EventArgs^ e) {
}
Void GestionStatFormulaire::GestionStatFormulaire_Load(Object^ sender, EventArgs^ e) {
	this->gestionDesStats = gcnew NS_services::gestionStats;
}