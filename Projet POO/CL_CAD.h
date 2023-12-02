#pragma once

namespace NS_composants {
	ref class CL_CAD {
	public:
		CL_CAD(System::String^ sCnx);
		System::Data::DataSet^ getRows(System::String^ sqlRequest);
		System::Void actionRows(System::String^ sqlRequest);

	private:
		const System::String^ connChaine;
		System::Data::SqlClient::SqlConnection connToDB;
	};
}