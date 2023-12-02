#include "headerLink.h"

using namespace System::Windows::Forms;

int main(array<System::String^>^ args) {
	ProjetPOO::MyForm formulaire;
	Application::EnableVisualStyles();
	Application::Run(%formulaire);
	return 0;
}