#include "headerLink.h"

using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace NS_composants;

CL_Com_mapping::CL_Com_mapping(Void) {
	this->accessToBase = gcnew CL_CAD("Data Source=KTJYDGFH;Initial Catalog=POO;Integrated Security=True");
}

DataSet^ CL_Com_mapping::executeRequest(Void) {
	return this->accessToBase->getRows(this->request);
}