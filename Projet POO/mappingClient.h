#pragma once

namespace NS_composants {
	ref class mappingClient : public CL_Com_mapping {
	public:
		System::Void creerClient(System::String^ nom, System::String^ prenom, System::String^ naissance);
		System::Void creerClient(System::String^, System::String^, System::String^, System::String^);
		System::Void modifierClient(System::String^, System::String^, System::String^, System::String^);
		System::Void ajouterAdresse(System::String^ clientID, System::String^ adresse, System::String^ f_ou_l);
		System::Void supprimerAdresse(System::String^ clientID, System::String^ adresse);
	};
}