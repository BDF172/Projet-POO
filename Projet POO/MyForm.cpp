#include "headerLink.h"

using namespace System::Windows::Forms;

int main(array<System::String^>^ args) {
	NS_composants::CL_Com_mapping^ test = gcnew NS_composants::CL_Com_mapping;
	System::Console::WriteLine(test->UPDATE());
	return 0;
}