#pragma once

namespace NS_composants {
	ref class CL_Com_mapping {
	public:
		CL_Com_mapping(System::Void);
		System::String^ SELECT(System::Void);
		System::String^ SEARCH(System::Void);
		System::String^ INSERT(System::Void);
		System::String^ UPDATE(System::Void);
		System::String^ DELETE(System::Void);
		System::Void RESETREQUEST(System::Void);

	protected:
		System::String^ mainID;
		System::String^ whatOrder;
		System::Collections::Generic::List<System::String^>^ whatValues;
		System::Collections::Generic::List<System::String^>^ whatColumns;
		System::Collections::Generic::List<System::String^>^ whatTables;
		System::Collections::Generic::List<System::String^>^ whatConditions;
	};
}