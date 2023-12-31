#pragma once

#include "CL_Com_mapping.h"

namespace NS_composants {
	ref class mappingClient : public CL_Com_mapping {
	public:
		System::Void creerClient(System::String^ nom, System::String^ prenom, System::String^ datNaissance, System::String^ nRue, System::String^ nomRue,
			System::String^ idVille, System::Boolean f_ou_l);
		System::Void modifierClient(System::String^, System::String^, System::String^, System::String^);
		System::Void supprimerClient(System::String^);
		System::Void ajouterAdresse(System::String^ clientID, System::String^ nRue, System::String^ nomRue, System::String^ idVille, System::String^ f_ou_l);
		System::Void modifierAdresse(System::String^ adresseID, System::String^ nRue, System::String^ nomRue, System::String^ idVille);
		System::Void supprimerAdresse(System::String^ clientID, System::String^ adresse);
		System::Void obtenirClient(System::String^ idClient);
		System::Void rechercherClients(System::String^ nom, System::String^ prenom);
		System::Void clientsAnniv(System::Void);
	};
}