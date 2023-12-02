#pragma once

namespace NS_composants {
	ref class CL_Com_mapping {
	public:
		CL_Com_mapping(System::Void);
		System::String^ SELECT(System::Void);
		//System::String^ UPDATE(System::Void);
		//System::String^ DELETE(System::Void);
		//System::Void RESETREQUEST(System::Void);

	protected:
		System::String^ whatToSelect;
		System::String^ whatTableToSelect;
		System::String^ whatOrder;
		System::String^ whatColumnsToInsert;
		System::String^ whatValuesToInsert;
		System::Collections::Generic::List<System::String^>^ whatTablesToJoin;
		System::Collections::Generic::List<System::String^>^ whatConditions;
	};
}