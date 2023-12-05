#include "headerLink.h"

using namespace System;
using namespace System::Data;

System::Boolean NS_services::CL_Svc_gestion::verifyErrorCode(DataSet^ toVerify)
{
	try {
		return Convert::ToInt64(toVerify->Tables[0]->Rows[0][0]) == 0;
	}
	catch (Exception^ e) {
		Console::WriteLine("Erreur lors de la vérification du code d'erreur : " + e->Data);
		return false;
	}
}