#include "headerLink.h"

using namespace System::Windows::Forms;
using namespace NS_composants;

System::Void PageMain(System::Void) {
	gestion_client gestion;
	gestion.supprimerAdresse("2", "6");
}