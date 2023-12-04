#pragma once

namespace NS_composants {
	ref class CL_mappingStats {
	public: 
		CL_mappingStats(System::Void);
		System::String^ cmdPanierMoyen(System::Void);
		System::String^ cmdBestSellers(System::Void);
		System::String^ cmdWorstSellers(System::Void);
		System::String^ cmdArticlesSousSeuil(System::Void);
		System::String^ cmdChiffreMois(System::String^);
		System::String^ cmdTotalAchatsClient(System::String^);
	};
}