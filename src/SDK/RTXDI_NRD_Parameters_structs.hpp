#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RTXDI_NRD_Parameters

#include "Basic.hpp"

#include "RTXDI_Quality_structs.hpp"


namespace SDK
{

// UserDefinedStruct RTXDI_NRD_Parameters.RTXDI_NRD_Parameters
// 0x0108 (0x0108 - 0x0000)
struct FRTXDI_NRD_Parameters final
{
public:
	class FString                                 EnableRTXDI_2_4F8A33CA4FCF7AF48FE0CDA92D2DD102;    // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 EnableNRD_4_6B53E8CA4BF8DF54FFB76EA8EFB6A046;      // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	ERTXDI_Quality                                RTXDIQuality_7_0F125504431980E0E4E1EFAE5DDAB930;   // 0x0020(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 DiffuseIndirectTechnique_18_A24067A240B8AF3AA87D2181A5BC31E4; // 0x0028(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 RelaxAtrousDiffuseLobeAngleFraction_19_9C47121C4CC50BD7374452B280354527; // 0x0038(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 RelaxAtrousDiffuseMinLuminanceWeight_20_DB069B4B4BA42F200349B0AE4BE65805; // 0x0048(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 RelaxAtrousDiffusePhiLuminance_21_6252DC5F4FA5E29183C69CB0E3D7B6E2; // 0x0058(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 RelaxAtrousIterations_22_7932BA1246CF015EFCD8DA9C42FDC30B; // 0x0068(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 RelaxFireflySupression_26_609531234D829DF68DA4279261FFE10A; // 0x0078(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 RelaxHistoryFixFrameNum_28_AFE117F94A3DCB859D0D3CB681AFE28D; // 0x0088(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 RelaxDiffuseFastMaxAccumulatedFrameNum_33_E8FC05574F4C2BD03B40F2ADF7E93CDD; // 0x0098(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 RelaxDiffuseMaxAccumulatedFrameNum_34_D1DB12E24B16CE4BEE4DC492A5C0EE7A; // 0x00A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 RelaxDisocclusionThreshold_35_885B06B8460E41131CF20183FBC9DD4E; // 0x00B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 SpecularLobeAngleFraction_39_83B56E2640095BA1DDADAAA689FFF072; // 0x00C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 SpecularBlurRadius_40_70889B2849C889FB785735B1D2DA1CE3; // 0x00D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 SpecularLobeAngleSlack_43_3ECCC53445E00A433843FF9083B002A7; // 0x00E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 SpecularMinLuminanceWeight_46_B2CAE1DC4B520854F7A84BACCF4FFE1E; // 0x00F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(FRTXDI_NRD_Parameters) == 0x000008, "Wrong alignment on FRTXDI_NRD_Parameters");
static_assert(sizeof(FRTXDI_NRD_Parameters) == 0x000108, "Wrong size on FRTXDI_NRD_Parameters");
static_assert(offsetof(FRTXDI_NRD_Parameters, EnableRTXDI_2_4F8A33CA4FCF7AF48FE0CDA92D2DD102) == 0x000000, "Member 'FRTXDI_NRD_Parameters::EnableRTXDI_2_4F8A33CA4FCF7AF48FE0CDA92D2DD102' has a wrong offset!");
static_assert(offsetof(FRTXDI_NRD_Parameters, EnableNRD_4_6B53E8CA4BF8DF54FFB76EA8EFB6A046) == 0x000010, "Member 'FRTXDI_NRD_Parameters::EnableNRD_4_6B53E8CA4BF8DF54FFB76EA8EFB6A046' has a wrong offset!");
static_assert(offsetof(FRTXDI_NRD_Parameters, RTXDIQuality_7_0F125504431980E0E4E1EFAE5DDAB930) == 0x000020, "Member 'FRTXDI_NRD_Parameters::RTXDIQuality_7_0F125504431980E0E4E1EFAE5DDAB930' has a wrong offset!");
static_assert(offsetof(FRTXDI_NRD_Parameters, DiffuseIndirectTechnique_18_A24067A240B8AF3AA87D2181A5BC31E4) == 0x000028, "Member 'FRTXDI_NRD_Parameters::DiffuseIndirectTechnique_18_A24067A240B8AF3AA87D2181A5BC31E4' has a wrong offset!");
static_assert(offsetof(FRTXDI_NRD_Parameters, RelaxAtrousDiffuseLobeAngleFraction_19_9C47121C4CC50BD7374452B280354527) == 0x000038, "Member 'FRTXDI_NRD_Parameters::RelaxAtrousDiffuseLobeAngleFraction_19_9C47121C4CC50BD7374452B280354527' has a wrong offset!");
static_assert(offsetof(FRTXDI_NRD_Parameters, RelaxAtrousDiffuseMinLuminanceWeight_20_DB069B4B4BA42F200349B0AE4BE65805) == 0x000048, "Member 'FRTXDI_NRD_Parameters::RelaxAtrousDiffuseMinLuminanceWeight_20_DB069B4B4BA42F200349B0AE4BE65805' has a wrong offset!");
static_assert(offsetof(FRTXDI_NRD_Parameters, RelaxAtrousDiffusePhiLuminance_21_6252DC5F4FA5E29183C69CB0E3D7B6E2) == 0x000058, "Member 'FRTXDI_NRD_Parameters::RelaxAtrousDiffusePhiLuminance_21_6252DC5F4FA5E29183C69CB0E3D7B6E2' has a wrong offset!");
static_assert(offsetof(FRTXDI_NRD_Parameters, RelaxAtrousIterations_22_7932BA1246CF015EFCD8DA9C42FDC30B) == 0x000068, "Member 'FRTXDI_NRD_Parameters::RelaxAtrousIterations_22_7932BA1246CF015EFCD8DA9C42FDC30B' has a wrong offset!");
static_assert(offsetof(FRTXDI_NRD_Parameters, RelaxFireflySupression_26_609531234D829DF68DA4279261FFE10A) == 0x000078, "Member 'FRTXDI_NRD_Parameters::RelaxFireflySupression_26_609531234D829DF68DA4279261FFE10A' has a wrong offset!");
static_assert(offsetof(FRTXDI_NRD_Parameters, RelaxHistoryFixFrameNum_28_AFE117F94A3DCB859D0D3CB681AFE28D) == 0x000088, "Member 'FRTXDI_NRD_Parameters::RelaxHistoryFixFrameNum_28_AFE117F94A3DCB859D0D3CB681AFE28D' has a wrong offset!");
static_assert(offsetof(FRTXDI_NRD_Parameters, RelaxDiffuseFastMaxAccumulatedFrameNum_33_E8FC05574F4C2BD03B40F2ADF7E93CDD) == 0x000098, "Member 'FRTXDI_NRD_Parameters::RelaxDiffuseFastMaxAccumulatedFrameNum_33_E8FC05574F4C2BD03B40F2ADF7E93CDD' has a wrong offset!");
static_assert(offsetof(FRTXDI_NRD_Parameters, RelaxDiffuseMaxAccumulatedFrameNum_34_D1DB12E24B16CE4BEE4DC492A5C0EE7A) == 0x0000A8, "Member 'FRTXDI_NRD_Parameters::RelaxDiffuseMaxAccumulatedFrameNum_34_D1DB12E24B16CE4BEE4DC492A5C0EE7A' has a wrong offset!");
static_assert(offsetof(FRTXDI_NRD_Parameters, RelaxDisocclusionThreshold_35_885B06B8460E41131CF20183FBC9DD4E) == 0x0000B8, "Member 'FRTXDI_NRD_Parameters::RelaxDisocclusionThreshold_35_885B06B8460E41131CF20183FBC9DD4E' has a wrong offset!");
static_assert(offsetof(FRTXDI_NRD_Parameters, SpecularLobeAngleFraction_39_83B56E2640095BA1DDADAAA689FFF072) == 0x0000C8, "Member 'FRTXDI_NRD_Parameters::SpecularLobeAngleFraction_39_83B56E2640095BA1DDADAAA689FFF072' has a wrong offset!");
static_assert(offsetof(FRTXDI_NRD_Parameters, SpecularBlurRadius_40_70889B2849C889FB785735B1D2DA1CE3) == 0x0000D8, "Member 'FRTXDI_NRD_Parameters::SpecularBlurRadius_40_70889B2849C889FB785735B1D2DA1CE3' has a wrong offset!");
static_assert(offsetof(FRTXDI_NRD_Parameters, SpecularLobeAngleSlack_43_3ECCC53445E00A433843FF9083B002A7) == 0x0000E8, "Member 'FRTXDI_NRD_Parameters::SpecularLobeAngleSlack_43_3ECCC53445E00A433843FF9083B002A7' has a wrong offset!");
static_assert(offsetof(FRTXDI_NRD_Parameters, SpecularMinLuminanceWeight_46_B2CAE1DC4B520854F7A84BACCF4FFE1E) == 0x0000F8, "Member 'FRTXDI_NRD_Parameters::SpecularMinLuminanceWeight_46_B2CAE1DC4B520854F7A84BACCF4FFE1E' has a wrong offset!");

}

