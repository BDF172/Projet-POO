#include "supprimerArticle.h"

using namespace ProjetPOO;

System::Void supprimerArticle::button5_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
System::Void supprimerArticle::supprimerArticle_Load(System::Object^ sender, System::EventArgs^ e) {
	this->DicoArticles = gcnew System::Collections::Generic::Dictionary<String^, String^>;
	while (articlesChoisis != nullptr) {
		DicoArticles->Add(articlesChoisis->nom, articlesChoisis->idArticle);
		this->suppComboBox->Items->Add(articlesChoisis->nom);
		articlesChoisis = articlesChoisis->suivant;
	}
}
System::Void supprimerArticle::button_valider_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!this->DicoArticles->ContainsKey(this->suppComboBox->Text)) {
		MessageBox::Show("Cet article n'est pas dans le panier");
		return;
	}
	this->toDelete = DicoArticles[this->suppComboBox->Text];
	this->Close();
}