#pragma once

namespace NS_composants {
	ref class CL_CAD {
	public:
		CL_CAD(System::String^);
		System::Data::DataSet^ getRows(System::String^ sqlRequest);
		System::Void actionRows(System::String^ sqlRequest);

	private:
		System::Data::SqlClient::SqlConnection^ connToDB;
		System::Data::SqlClient::SqlCommand^ commSQL;
	};
}