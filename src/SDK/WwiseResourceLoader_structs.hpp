#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WwiseResourceLoader

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "WwiseFileHandler_structs.hpp"


namespace SDK
{

// Enum WwiseResourceLoader.EWwiseEventDestroyOptions
// NumValues: 0x0003
enum class EWwiseEventDestroyOptions : uint8
{
	StopEventOnDestroy                       = 0,
	WaitForEventEnd                          = 1,
	EWwiseEventDestroyOptions_MAX            = 2,
};

// Enum WwiseResourceLoader.EWwiseEventSwitchContainerLoading
// NumValues: 0x0003
enum class EWwiseEventSwitchContainerLoading : uint8
{
	AlwaysLoad                               = 0,
	LoadOnReference                          = 1,
	EWwiseEventSwitchContainerLoading_MAX    = 2,
};

// Enum WwiseResourceLoader.EWwiseGroupType
// NumValues: 0x0004
enum class EWwiseGroupType : uint8
{
	Switch                                   = 0,
	State                                    = 1,
	Unknown                                  = 255,
	EWwiseGroupType_MAX                      = 256,
};

// Enum WwiseResourceLoader.EWwiseReloadLanguage
// NumValues: 0x0004
enum class EWwiseReloadLanguage : uint8
{
	Manual                                   = 0,
	Immediate                                = 1,
	Safe                                     = 2,
	EWwiseReloadLanguage_MAX                 = 3,
};

// ScriptStruct WwiseResourceLoader.WwiseAcousticTextureCookedData
// 0x000C (0x000C - 0x0000)
struct FWwiseAcousticTextureCookedData final
{
public:
	int32                                         ShortId;                                           // 0x0000(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   DebugName;                                         // 0x0004(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FWwiseAcousticTextureCookedData) == 0x000004, "Wrong alignment on FWwiseAcousticTextureCookedData");
static_assert(sizeof(FWwiseAcousticTextureCookedData) == 0x00000C, "Wrong size on FWwiseAcousticTextureCookedData");
static_assert(offsetof(FWwiseAcousticTextureCookedData, ShortId) == 0x000000, "Member 'FWwiseAcousticTextureCookedData::ShortId' has a wrong offset!");
static_assert(offsetof(FWwiseAcousticTextureCookedData, DebugName) == 0x000004, "Member 'FWwiseAcousticTextureCookedData::DebugName' has a wrong offset!");

// ScriptStruct WwiseResourceLoader.WwiseAuxBusCookedData
// 0x0030 (0x0030 - 0x0000)
struct FWwiseAuxBusCookedData final
{
public:
	int32                                         AuxBusId;                                          // 0x0000(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FWwiseSoundBankCookedData>      SoundBanks;                                        // 0x0008(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FWwiseMediaCookedData>          Media;                                             // 0x0018(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
	class FName                                   DebugName;                                         // 0x0028(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FWwiseAuxBusCookedData) == 0x000008, "Wrong alignment on FWwiseAuxBusCookedData");
static_assert(sizeof(FWwiseAuxBusCookedData) == 0x000030, "Wrong size on FWwiseAuxBusCookedData");
static_assert(offsetof(FWwiseAuxBusCookedData, AuxBusId) == 0x000000, "Member 'FWwiseAuxBusCookedData::AuxBusId' has a wrong offset!");
static_assert(offsetof(FWwiseAuxBusCookedData, SoundBanks) == 0x000008, "Member 'FWwiseAuxBusCookedData::SoundBanks' has a wrong offset!");
static_assert(offsetof(FWwiseAuxBusCookedData, Media) == 0x000018, "Member 'FWwiseAuxBusCookedData::Media' has a wrong offset!");
static_assert(offsetof(FWwiseAuxBusCookedData, DebugName) == 0x000028, "Member 'FWwiseAuxBusCookedData::DebugName' has a wrong offset!");

// ScriptStruct WwiseResourceLoader.WwiseGroupValueCookedData
// 0x0014 (0x0014 - 0x0000)
struct FWwiseGroupValueCookedData final
{
public:
	EWwiseGroupType                               Type;                                              // 0x0000(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         GroupId;                                           // 0x0004(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ID;                                                // 0x0008(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   DebugName;                                         // 0x000C(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FWwiseGroupValueCookedData) == 0x000004, "Wrong alignment on FWwiseGroupValueCookedData");
static_assert(sizeof(FWwiseGroupValueCookedData) == 0x000014, "Wrong size on FWwiseGroupValueCookedData");
static_assert(offsetof(FWwiseGroupValueCookedData, Type) == 0x000000, "Member 'FWwiseGroupValueCookedData::Type' has a wrong offset!");
static_assert(offsetof(FWwiseGroupValueCookedData, GroupId) == 0x000004, "Member 'FWwiseGroupValueCookedData::GroupId' has a wrong offset!");
static_assert(offsetof(FWwiseGroupValueCookedData, ID) == 0x000008, "Member 'FWwiseGroupValueCookedData::ID' has a wrong offset!");
static_assert(offsetof(FWwiseGroupValueCookedData, DebugName) == 0x00000C, "Member 'FWwiseGroupValueCookedData::DebugName' has a wrong offset!");

// ScriptStruct WwiseResourceLoader.WwiseSwitchContainerLeafCookedData
// 0x0080 (0x0080 - 0x0000)
struct FWwiseSwitchContainerLeafCookedData final
{
public:
	TSet<struct FWwiseGroupValueCookedData>       GroupValueSet;                                     // 0x0000(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FWwiseSoundBankCookedData>      SoundBanks;                                        // 0x0050(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FWwiseMediaCookedData>          Media;                                             // 0x0060(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FWwiseExternalSourceCookedData> ExternalSources;                                   // 0x0070(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
};
static_assert(alignof(FWwiseSwitchContainerLeafCookedData) == 0x000008, "Wrong alignment on FWwiseSwitchContainerLeafCookedData");
static_assert(sizeof(FWwiseSwitchContainerLeafCookedData) == 0x000080, "Wrong size on FWwiseSwitchContainerLeafCookedData");
static_assert(offsetof(FWwiseSwitchContainerLeafCookedData, GroupValueSet) == 0x000000, "Member 'FWwiseSwitchContainerLeafCookedData::GroupValueSet' has a wrong offset!");
static_assert(offsetof(FWwiseSwitchContainerLeafCookedData, SoundBanks) == 0x000050, "Member 'FWwiseSwitchContainerLeafCookedData::SoundBanks' has a wrong offset!");
static_assert(offsetof(FWwiseSwitchContainerLeafCookedData, Media) == 0x000060, "Member 'FWwiseSwitchContainerLeafCookedData::Media' has a wrong offset!");
static_assert(offsetof(FWwiseSwitchContainerLeafCookedData, ExternalSources) == 0x000070, "Member 'FWwiseSwitchContainerLeafCookedData::ExternalSources' has a wrong offset!");

// ScriptStruct WwiseResourceLoader.WwiseEventCookedData
// 0x00A8 (0x00A8 - 0x0000)
struct FWwiseEventCookedData final
{
public:
	int32                                         EventID;                                           // 0x0000(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FWwiseSoundBankCookedData>      SoundBanks;                                        // 0x0008(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FWwiseMediaCookedData>          Media;                                             // 0x0018(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FWwiseExternalSourceCookedData> ExternalSources;                                   // 0x0028(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FWwiseSwitchContainerLeafCookedData> SwitchContainerLeaves;                             // 0x0038(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
	TSet<struct FWwiseGroupValueCookedData>       RequiredGroupValueSet;                             // 0x0048(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
	EWwiseEventDestroyOptions                     DestroyOptions;                                    // 0x0098(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_99[0x3];                                       // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   DebugName;                                         // 0x009C(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_A4[0x4];                                       // 0x00A4(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FWwiseEventCookedData) == 0x000008, "Wrong alignment on FWwiseEventCookedData");
static_assert(sizeof(FWwiseEventCookedData) == 0x0000A8, "Wrong size on FWwiseEventCookedData");
static_assert(offsetof(FWwiseEventCookedData, EventID) == 0x000000, "Member 'FWwiseEventCookedData::EventID' has a wrong offset!");
static_assert(offsetof(FWwiseEventCookedData, SoundBanks) == 0x000008, "Member 'FWwiseEventCookedData::SoundBanks' has a wrong offset!");
static_assert(offsetof(FWwiseEventCookedData, Media) == 0x000018, "Member 'FWwiseEventCookedData::Media' has a wrong offset!");
static_assert(offsetof(FWwiseEventCookedData, ExternalSources) == 0x000028, "Member 'FWwiseEventCookedData::ExternalSources' has a wrong offset!");
static_assert(offsetof(FWwiseEventCookedData, SwitchContainerLeaves) == 0x000038, "Member 'FWwiseEventCookedData::SwitchContainerLeaves' has a wrong offset!");
static_assert(offsetof(FWwiseEventCookedData, RequiredGroupValueSet) == 0x000048, "Member 'FWwiseEventCookedData::RequiredGroupValueSet' has a wrong offset!");
static_assert(offsetof(FWwiseEventCookedData, DestroyOptions) == 0x000098, "Member 'FWwiseEventCookedData::DestroyOptions' has a wrong offset!");
static_assert(offsetof(FWwiseEventCookedData, DebugName) == 0x00009C, "Member 'FWwiseEventCookedData::DebugName' has a wrong offset!");

// ScriptStruct WwiseResourceLoader.WwiseObjectInfo
// 0x0020 (0x0020 - 0x0000)
struct FWwiseObjectInfo
{
public:
	struct FGuid                                  WwiseGuid;                                         // 0x0000(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        WwiseShortId;                                      // 0x0010(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   WwiseName;                                         // 0x0014(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        HardCodedSoundBankShortId;                         // 0x001C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FWwiseObjectInfo) == 0x000004, "Wrong alignment on FWwiseObjectInfo");
static_assert(sizeof(FWwiseObjectInfo) == 0x000020, "Wrong size on FWwiseObjectInfo");
static_assert(offsetof(FWwiseObjectInfo, WwiseGuid) == 0x000000, "Member 'FWwiseObjectInfo::WwiseGuid' has a wrong offset!");
static_assert(offsetof(FWwiseObjectInfo, WwiseShortId) == 0x000010, "Member 'FWwiseObjectInfo::WwiseShortId' has a wrong offset!");
static_assert(offsetof(FWwiseObjectInfo, WwiseName) == 0x000014, "Member 'FWwiseObjectInfo::WwiseName' has a wrong offset!");
static_assert(offsetof(FWwiseObjectInfo, HardCodedSoundBankShortId) == 0x00001C, "Member 'FWwiseObjectInfo::HardCodedSoundBankShortId' has a wrong offset!");

// ScriptStruct WwiseResourceLoader.WwiseEventInfo
// 0x0004 (0x0024 - 0x0020)
struct FWwiseEventInfo final : public FWwiseObjectInfo
{
public:
	EWwiseEventSwitchContainerLoading             SwitchContainerLoading;                            // 0x0020(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EWwiseEventDestroyOptions                     DestroyOptions;                                    // 0x0021(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_22[0x2];                                       // 0x0022(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FWwiseEventInfo) == 0x000004, "Wrong alignment on FWwiseEventInfo");
static_assert(sizeof(FWwiseEventInfo) == 0x000024, "Wrong size on FWwiseEventInfo");
static_assert(offsetof(FWwiseEventInfo, SwitchContainerLoading) == 0x000020, "Member 'FWwiseEventInfo::SwitchContainerLoading' has a wrong offset!");
static_assert(offsetof(FWwiseEventInfo, DestroyOptions) == 0x000021, "Member 'FWwiseEventInfo::DestroyOptions' has a wrong offset!");

// ScriptStruct WwiseResourceLoader.WwiseGameParameterCookedData
// 0x000C (0x000C - 0x0000)
struct FWwiseGameParameterCookedData final
{
public:
	int32                                         ShortId;                                           // 0x0000(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   DebugName;                                         // 0x0004(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FWwiseGameParameterCookedData) == 0x000004, "Wrong alignment on FWwiseGameParameterCookedData");
static_assert(sizeof(FWwiseGameParameterCookedData) == 0x00000C, "Wrong size on FWwiseGameParameterCookedData");
static_assert(offsetof(FWwiseGameParameterCookedData, ShortId) == 0x000000, "Member 'FWwiseGameParameterCookedData::ShortId' has a wrong offset!");
static_assert(offsetof(FWwiseGameParameterCookedData, DebugName) == 0x000004, "Member 'FWwiseGameParameterCookedData::DebugName' has a wrong offset!");

// ScriptStruct WwiseResourceLoader.WwiseGroupValueInfo
// 0x0004 (0x0024 - 0x0020)
struct FWwiseGroupValueInfo final : public FWwiseObjectInfo
{
public:
	uint32                                        GroupShortId;                                      // 0x0020(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FWwiseGroupValueInfo) == 0x000004, "Wrong alignment on FWwiseGroupValueInfo");
static_assert(sizeof(FWwiseGroupValueInfo) == 0x000024, "Wrong size on FWwiseGroupValueInfo");
static_assert(offsetof(FWwiseGroupValueInfo, GroupShortId) == 0x000020, "Member 'FWwiseGroupValueInfo::GroupShortId' has a wrong offset!");

// ScriptStruct WwiseResourceLoader.WwiseInitBankCookedData
// 0x0034 (0x0050 - 0x001C)
struct FWwiseInitBankCookedData final : public FWwiseSoundBankCookedData
{
public:
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FWwiseSoundBankCookedData>      SoundBanks;                                        // 0x0020(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FWwiseMediaCookedData>          Media;                                             // 0x0030(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FWwiseLanguageCookedData>       Language;                                          // 0x0040(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
};
static_assert(alignof(FWwiseInitBankCookedData) == 0x000008, "Wrong alignment on FWwiseInitBankCookedData");
static_assert(sizeof(FWwiseInitBankCookedData) == 0x000050, "Wrong size on FWwiseInitBankCookedData");
static_assert(offsetof(FWwiseInitBankCookedData, SoundBanks) == 0x000020, "Member 'FWwiseInitBankCookedData::SoundBanks' has a wrong offset!");
static_assert(offsetof(FWwiseInitBankCookedData, Media) == 0x000030, "Member 'FWwiseInitBankCookedData::Media' has a wrong offset!");
static_assert(offsetof(FWwiseInitBankCookedData, Language) == 0x000040, "Member 'FWwiseInitBankCookedData::Language' has a wrong offset!");

// ScriptStruct WwiseResourceLoader.WwiseLanguageId
// 0x000C (0x000C - 0x0000)
struct FWwiseLanguageId final
{
public:
	int32                                         LanguageId;                                        // 0x0000(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   LanguageName;                                      // 0x0004(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FWwiseLanguageId) == 0x000004, "Wrong alignment on FWwiseLanguageId");
static_assert(sizeof(FWwiseLanguageId) == 0x00000C, "Wrong size on FWwiseLanguageId");
static_assert(offsetof(FWwiseLanguageId, LanguageId) == 0x000000, "Member 'FWwiseLanguageId::LanguageId' has a wrong offset!");
static_assert(offsetof(FWwiseLanguageId, LanguageName) == 0x000004, "Member 'FWwiseLanguageId::LanguageName' has a wrong offset!");

// ScriptStruct WwiseResourceLoader.WwiseLocalizedAuxBusCookedData
// 0x0060 (0x0060 - 0x0000)
struct FWwiseLocalizedAuxBusCookedData final
{
public:
	TMap<struct FWwiseLanguageCookedData, struct FWwiseAuxBusCookedData> AuxBusLanguageMap;                                 // 0x0000(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
	class FName                                   DebugName;                                         // 0x0050(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         AuxBusId;                                          // 0x0058(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FWwiseLocalizedAuxBusCookedData) == 0x000008, "Wrong alignment on FWwiseLocalizedAuxBusCookedData");
static_assert(sizeof(FWwiseLocalizedAuxBusCookedData) == 0x000060, "Wrong size on FWwiseLocalizedAuxBusCookedData");
static_assert(offsetof(FWwiseLocalizedAuxBusCookedData, AuxBusLanguageMap) == 0x000000, "Member 'FWwiseLocalizedAuxBusCookedData::AuxBusLanguageMap' has a wrong offset!");
static_assert(offsetof(FWwiseLocalizedAuxBusCookedData, DebugName) == 0x000050, "Member 'FWwiseLocalizedAuxBusCookedData::DebugName' has a wrong offset!");
static_assert(offsetof(FWwiseLocalizedAuxBusCookedData, AuxBusId) == 0x000058, "Member 'FWwiseLocalizedAuxBusCookedData::AuxBusId' has a wrong offset!");

// ScriptStruct WwiseResourceLoader.WwiseLocalizedEventCookedData
// 0x0060 (0x0060 - 0x0000)
struct FWwiseLocalizedEventCookedData final
{
public:
	TMap<struct FWwiseLanguageCookedData, struct FWwiseEventCookedData> EventLanguageMap;                                  // 0x0000(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
	class FName                                   DebugName;                                         // 0x0050(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         EventID;                                           // 0x0058(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FWwiseLocalizedEventCookedData) == 0x000008, "Wrong alignment on FWwiseLocalizedEventCookedData");
static_assert(sizeof(FWwiseLocalizedEventCookedData) == 0x000060, "Wrong size on FWwiseLocalizedEventCookedData");
static_assert(offsetof(FWwiseLocalizedEventCookedData, EventLanguageMap) == 0x000000, "Member 'FWwiseLocalizedEventCookedData::EventLanguageMap' has a wrong offset!");
static_assert(offsetof(FWwiseLocalizedEventCookedData, DebugName) == 0x000050, "Member 'FWwiseLocalizedEventCookedData::DebugName' has a wrong offset!");
static_assert(offsetof(FWwiseLocalizedEventCookedData, EventID) == 0x000058, "Member 'FWwiseLocalizedEventCookedData::EventID' has a wrong offset!");

// ScriptStruct WwiseResourceLoader.WwiseShareSetCookedData
// 0x0030 (0x0030 - 0x0000)
struct FWwiseShareSetCookedData final
{
public:
	int32                                         ShareSetId;                                        // 0x0000(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FWwiseSoundBankCookedData>      SoundBanks;                                        // 0x0008(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FWwiseMediaCookedData>          Media;                                             // 0x0018(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
	class FName                                   DebugName;                                         // 0x0028(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FWwiseShareSetCookedData) == 0x000008, "Wrong alignment on FWwiseShareSetCookedData");
static_assert(sizeof(FWwiseShareSetCookedData) == 0x000030, "Wrong size on FWwiseShareSetCookedData");
static_assert(offsetof(FWwiseShareSetCookedData, ShareSetId) == 0x000000, "Member 'FWwiseShareSetCookedData::ShareSetId' has a wrong offset!");
static_assert(offsetof(FWwiseShareSetCookedData, SoundBanks) == 0x000008, "Member 'FWwiseShareSetCookedData::SoundBanks' has a wrong offset!");
static_assert(offsetof(FWwiseShareSetCookedData, Media) == 0x000018, "Member 'FWwiseShareSetCookedData::Media' has a wrong offset!");
static_assert(offsetof(FWwiseShareSetCookedData, DebugName) == 0x000028, "Member 'FWwiseShareSetCookedData::DebugName' has a wrong offset!");

// ScriptStruct WwiseResourceLoader.WwiseLocalizedShareSetCookedData
// 0x0060 (0x0060 - 0x0000)
struct FWwiseLocalizedShareSetCookedData final
{
public:
	TMap<struct FWwiseLanguageCookedData, struct FWwiseShareSetCookedData> ShareSetLanguageMap;                               // 0x0000(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
	class FName                                   DebugName;                                         // 0x0050(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ShareSetId;                                        // 0x0058(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FWwiseLocalizedShareSetCookedData) == 0x000008, "Wrong alignment on FWwiseLocalizedShareSetCookedData");
static_assert(sizeof(FWwiseLocalizedShareSetCookedData) == 0x000060, "Wrong size on FWwiseLocalizedShareSetCookedData");
static_assert(offsetof(FWwiseLocalizedShareSetCookedData, ShareSetLanguageMap) == 0x000000, "Member 'FWwiseLocalizedShareSetCookedData::ShareSetLanguageMap' has a wrong offset!");
static_assert(offsetof(FWwiseLocalizedShareSetCookedData, DebugName) == 0x000050, "Member 'FWwiseLocalizedShareSetCookedData::DebugName' has a wrong offset!");
static_assert(offsetof(FWwiseLocalizedShareSetCookedData, ShareSetId) == 0x000058, "Member 'FWwiseLocalizedShareSetCookedData::ShareSetId' has a wrong offset!");

// ScriptStruct WwiseResourceLoader.WwiseLocalizedSoundBankCookedData
// 0x0060 (0x0060 - 0x0000)
struct FWwiseLocalizedSoundBankCookedData final
{
public:
	TMap<struct FWwiseLanguageCookedData, struct FWwiseSoundBankCookedData> SoundBankLanguageMap;                              // 0x0000(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
	class FName                                   DebugName;                                         // 0x0050(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SoundBankId;                                       // 0x0058(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FWwiseLocalizedSoundBankCookedData) == 0x000008, "Wrong alignment on FWwiseLocalizedSoundBankCookedData");
static_assert(sizeof(FWwiseLocalizedSoundBankCookedData) == 0x000060, "Wrong size on FWwiseLocalizedSoundBankCookedData");
static_assert(offsetof(FWwiseLocalizedSoundBankCookedData, SoundBankLanguageMap) == 0x000000, "Member 'FWwiseLocalizedSoundBankCookedData::SoundBankLanguageMap' has a wrong offset!");
static_assert(offsetof(FWwiseLocalizedSoundBankCookedData, DebugName) == 0x000050, "Member 'FWwiseLocalizedSoundBankCookedData::DebugName' has a wrong offset!");
static_assert(offsetof(FWwiseLocalizedSoundBankCookedData, SoundBankId) == 0x000058, "Member 'FWwiseLocalizedSoundBankCookedData::SoundBankId' has a wrong offset!");

// ScriptStruct WwiseResourceLoader.WwisePlatformId
// 0x0018 (0x0018 - 0x0000)
struct FWwisePlatformId final
{
public:
	struct FGuid                                  PlatformGuid;                                      // 0x0000(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   PlatformName;                                      // 0x0010(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FWwisePlatformId) == 0x000004, "Wrong alignment on FWwisePlatformId");
static_assert(sizeof(FWwisePlatformId) == 0x000018, "Wrong size on FWwisePlatformId");
static_assert(offsetof(FWwisePlatformId, PlatformGuid) == 0x000000, "Member 'FWwisePlatformId::PlatformGuid' has a wrong offset!");
static_assert(offsetof(FWwisePlatformId, PlatformName) == 0x000010, "Member 'FWwisePlatformId::PlatformName' has a wrong offset!");

// ScriptStruct WwiseResourceLoader.WwiseSharedGroupValueKey
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x08) FWwiseSharedGroupValueKey final
{
public:
	uint8                                         Pad_0[0x10];                                       // 0x0000(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FWwiseSharedGroupValueKey) == 0x000008, "Wrong alignment on FWwiseSharedGroupValueKey");
static_assert(sizeof(FWwiseSharedGroupValueKey) == 0x000010, "Wrong size on FWwiseSharedGroupValueKey");

// ScriptStruct WwiseResourceLoader.WwiseSharedLanguageId
// 0x0018 (0x0018 - 0x0000)
struct alignas(0x08) FWwiseSharedLanguageId final
{
public:
	uint8                                         Pad_0[0x10];                                       // 0x0000(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	EWwiseLanguageRequirement                     LanguageRequirement;                               // 0x0010(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FWwiseSharedLanguageId) == 0x000008, "Wrong alignment on FWwiseSharedLanguageId");
static_assert(sizeof(FWwiseSharedLanguageId) == 0x000018, "Wrong size on FWwiseSharedLanguageId");
static_assert(offsetof(FWwiseSharedLanguageId, LanguageRequirement) == 0x000010, "Member 'FWwiseSharedLanguageId::LanguageRequirement' has a wrong offset!");

// ScriptStruct WwiseResourceLoader.WwiseSharedPlatformId
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x08) FWwiseSharedPlatformId final
{
public:
	uint8                                         Pad_0[0x10];                                       // 0x0000(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FWwiseSharedPlatformId) == 0x000008, "Wrong alignment on FWwiseSharedPlatformId");
static_assert(sizeof(FWwiseSharedPlatformId) == 0x000010, "Wrong size on FWwiseSharedPlatformId");

// ScriptStruct WwiseResourceLoader.WwiseTriggerCookedData
// 0x000C (0x000C - 0x0000)
struct FWwiseTriggerCookedData final
{
public:
	int32                                         TriggerId;                                         // 0x0000(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   DebugName;                                         // 0x0004(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FWwiseTriggerCookedData) == 0x000004, "Wrong alignment on FWwiseTriggerCookedData");
static_assert(sizeof(FWwiseTriggerCookedData) == 0x00000C, "Wrong size on FWwiseTriggerCookedData");
static_assert(offsetof(FWwiseTriggerCookedData, TriggerId) == 0x000000, "Member 'FWwiseTriggerCookedData::TriggerId' has a wrong offset!");
static_assert(offsetof(FWwiseTriggerCookedData, DebugName) == 0x000004, "Member 'FWwiseTriggerCookedData::DebugName' has a wrong offset!");

}

