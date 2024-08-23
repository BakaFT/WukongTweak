#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Medium

#include "Basic.hpp"

#include "AO_Parameters_structs.hpp"
#include "Reflection_Parameters_structs.hpp"
#include "Debug_Parameters_structs.hpp"
#include "GI_Parameters_structs.hpp"
#include "SkyLight_Parameters_structs.hpp"
#include "LandscapeAndFoliage_Parameter_structs.hpp"
#include "Translucency_Parameters_structs.hpp"
#include "Shadow_Parameters_structs.hpp"
#include "Water_Caustics_Parameters_structs.hpp"
#include "Mesh_Caustics_Parameters_structs.hpp"
#include "DLSS_Parameters_structs.hpp"
#include "RTX_PostProcess_Settings_structs.hpp"
#include "DataType_Support_structs.hpp"
#include "RTXDI_NRD_Parameters_structs.hpp"
#include "Lumen_structs.hpp"


namespace SDK
{

// UserDefinedStruct Medium.Medium
// 0x1ED0 (0x1ED0 - 0x0000)
struct FMedium final
{
public:
	struct FAO_Parameters                         AO_Parameters_290_3E5B873044B400F2CBFF3483EB9004F7; // 0x0000(0x0050)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FDebug_Parameters                      Debug_Parameters_292_8E67B1AD44F1BFE4AA4994BD260F4698; // 0x0050(0x01B8)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGI_Parameters                         GI_Parameters_294_5991E68E41477E3C67FBD9B532E65D7C; // 0x0208(0x0458)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FLandscapeAndFoliage_Parameter         LandscapeAndFoliage_Parameter_296_549A67554ED7BBC8A7326BAF09E10B94; // 0x0660(0x0140)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FReflection_Parameters                 Reflection_Parameters_298_A167D2B1452F751451C99E818E7C05E1; // 0x07A0(0x0260)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FShadow_Parameters                     Shadow_Parameters_301_DD835C514AFAE876A87A799983D13684; // 0x0A00(0x0270)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FSkyLight_Parameters                   SkyLight_Parameters_303_98539BB9469068C9E259929CDEF4B9FC; // 0x0C70(0x00A0)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FTranslucency_Parameters               Translucency_Parameters_307_94092BBE40B82EF55D80B3858FEEA625; // 0x0D10(0x01A0)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FWater_Caustics_Parameters             WaterCausticsParameters_285_DD002BE7481CEB47274E64932E70EC39; // 0x0EB0(0x01F8)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FMesh_Caustics_Parameters              MeshCausticsParameters_288_16B34040457BC7049BEFDE94A384AB2A; // 0x10A8(0x0160)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FDLSS_Parameters                       DLSSParameters_310_3A6775704CF641DFEEC2478C297B7D69; // 0x1208(0x00C0)(Edit, BlueprintVisible, HasGetValueTypeHash)
	uint8                                         Pad_12C8[0x8];                                     // 0x12C8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRTX_PostProcess_Settings              RTXPostProcessSettings_316_268786DF438462588539E5BAF602ED34; // 0x12D0(0x07C0)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FDataType_Support                      DataTypeSupport_319_F3DA97704E7BA941885A888135560397; // 0x1A90(0x01B0)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FRTXDI_NRD_Parameters                  RTXDINRDParameters_322_677780954E483D61F4E045B92097C72E; // 0x1C40(0x0108)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FLumen                                 LumenParameters_325_14BF69CA42ACBC51FE4E9D9E7238958A; // 0x1D48(0x0180)(Edit, BlueprintVisible, HasGetValueTypeHash)
};
static_assert(alignof(FMedium) == 0x000010, "Wrong alignment on FMedium");
static_assert(sizeof(FMedium) == 0x001ED0, "Wrong size on FMedium");
static_assert(offsetof(FMedium, AO_Parameters_290_3E5B873044B400F2CBFF3483EB9004F7) == 0x000000, "Member 'FMedium::AO_Parameters_290_3E5B873044B400F2CBFF3483EB9004F7' has a wrong offset!");
static_assert(offsetof(FMedium, Debug_Parameters_292_8E67B1AD44F1BFE4AA4994BD260F4698) == 0x000050, "Member 'FMedium::Debug_Parameters_292_8E67B1AD44F1BFE4AA4994BD260F4698' has a wrong offset!");
static_assert(offsetof(FMedium, GI_Parameters_294_5991E68E41477E3C67FBD9B532E65D7C) == 0x000208, "Member 'FMedium::GI_Parameters_294_5991E68E41477E3C67FBD9B532E65D7C' has a wrong offset!");
static_assert(offsetof(FMedium, LandscapeAndFoliage_Parameter_296_549A67554ED7BBC8A7326BAF09E10B94) == 0x000660, "Member 'FMedium::LandscapeAndFoliage_Parameter_296_549A67554ED7BBC8A7326BAF09E10B94' has a wrong offset!");
static_assert(offsetof(FMedium, Reflection_Parameters_298_A167D2B1452F751451C99E818E7C05E1) == 0x0007A0, "Member 'FMedium::Reflection_Parameters_298_A167D2B1452F751451C99E818E7C05E1' has a wrong offset!");
static_assert(offsetof(FMedium, Shadow_Parameters_301_DD835C514AFAE876A87A799983D13684) == 0x000A00, "Member 'FMedium::Shadow_Parameters_301_DD835C514AFAE876A87A799983D13684' has a wrong offset!");
static_assert(offsetof(FMedium, SkyLight_Parameters_303_98539BB9469068C9E259929CDEF4B9FC) == 0x000C70, "Member 'FMedium::SkyLight_Parameters_303_98539BB9469068C9E259929CDEF4B9FC' has a wrong offset!");
static_assert(offsetof(FMedium, Translucency_Parameters_307_94092BBE40B82EF55D80B3858FEEA625) == 0x000D10, "Member 'FMedium::Translucency_Parameters_307_94092BBE40B82EF55D80B3858FEEA625' has a wrong offset!");
static_assert(offsetof(FMedium, WaterCausticsParameters_285_DD002BE7481CEB47274E64932E70EC39) == 0x000EB0, "Member 'FMedium::WaterCausticsParameters_285_DD002BE7481CEB47274E64932E70EC39' has a wrong offset!");
static_assert(offsetof(FMedium, MeshCausticsParameters_288_16B34040457BC7049BEFDE94A384AB2A) == 0x0010A8, "Member 'FMedium::MeshCausticsParameters_288_16B34040457BC7049BEFDE94A384AB2A' has a wrong offset!");
static_assert(offsetof(FMedium, DLSSParameters_310_3A6775704CF641DFEEC2478C297B7D69) == 0x001208, "Member 'FMedium::DLSSParameters_310_3A6775704CF641DFEEC2478C297B7D69' has a wrong offset!");
static_assert(offsetof(FMedium, RTXPostProcessSettings_316_268786DF438462588539E5BAF602ED34) == 0x0012D0, "Member 'FMedium::RTXPostProcessSettings_316_268786DF438462588539E5BAF602ED34' has a wrong offset!");
static_assert(offsetof(FMedium, DataTypeSupport_319_F3DA97704E7BA941885A888135560397) == 0x001A90, "Member 'FMedium::DataTypeSupport_319_F3DA97704E7BA941885A888135560397' has a wrong offset!");
static_assert(offsetof(FMedium, RTXDINRDParameters_322_677780954E483D61F4E045B92097C72E) == 0x001C40, "Member 'FMedium::RTXDINRDParameters_322_677780954E483D61F4E045B92097C72E' has a wrong offset!");
static_assert(offsetof(FMedium, LumenParameters_325_14BF69CA42ACBC51FE4E9D9E7238958A) == 0x001D48, "Member 'FMedium::LumenParameters_325_14BF69CA42ACBC51FE4E9D9E7238958A' has a wrong offset!");

}

