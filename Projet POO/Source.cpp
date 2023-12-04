#include "headerLink.h"

using namespace System::Windows::Forms;
using namespace NS_composants;

System::Void PageMain(System::Void) {
	//ProjetPOO::principal^ pageAccueil = gcnew ProjetPOO::principal;
	//Application::EnableVisualStyles();
	//Application::Run(pageAccueil);
	CL_Com_mapping_articles map;
	//map.setID("1");
	map.setPrix("24");
	System::Console::WriteLine(map.SEARCH());
}