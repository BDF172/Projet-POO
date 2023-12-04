#pragma once

namespace NS_composants {
	ref class gestion_client {
	private:
		CL_CAD^ accesBDD;

	public:
		System::Int64 createClient(System::String^ nom, System::String^ prenom, System::String^ naissance);
	};
}