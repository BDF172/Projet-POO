#include "headerLink.h"

using namespace System::Windows::Forms;

int main(array<System::String^>^ args) {
	NS_composants::CL_Com_mapping_personnel^ test = gcnew NS_composants::CL_Com_mapping_personnel;
	//test->setNom("TRAGHA");
	//test->setPrenom("Ilias");
	//test->setSuperieurID("1");
	//test->setDateEmbauche("12-03-2023");
	//test->setAdresseID("0");
	//test->setID("0");
	System::Console::WriteLine(test->INSERT());
	return 0;
}