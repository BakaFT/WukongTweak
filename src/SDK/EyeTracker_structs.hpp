#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EyeTracker

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum EyeTracker.EEyeTrackerStatus
// NumValues: 0x0004
enum class EEyeTrackerStatus : uint8
{
	NotConnected                             = 0,
	NotTracking                              = 1,
	Tracking                                 = 2,
	EEyeTrackerStatus_MAX                    = 3,
};

// ScriptStruct EyeTracker.EyeTrackerGazeData
// 0x0050 (0x0050 - 0x0000)
struct FEyeTrackerGazeData final
{
public:
	struct FVector                                GazeOrigin;                                        // 0x0000(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                GazeDirection;                                     // 0x0018(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                FixationPoint;                                     // 0x0030(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ConfidenceValue;                                   // 0x0048(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FEyeTrackerGazeData) == 0x000008, "Wrong alignment on FEyeTrackerGazeData");
static_assert(sizeof(FEyeTrackerGazeData) == 0x000050, "Wrong size on FEyeTrackerGazeData");
static_assert(offsetof(FEyeTrackerGazeData, GazeOrigin) == 0x000000, "Member 'FEyeTrackerGazeData::GazeOrigin' has a wrong offset!");
static_assert(offsetof(FEyeTrackerGazeData, GazeDirection) == 0x000018, "Member 'FEyeTrackerGazeData::GazeDirection' has a wrong offset!");
static_assert(offsetof(FEyeTrackerGazeData, FixationPoint) == 0x000030, "Member 'FEyeTrackerGazeData::FixationPoint' has a wrong offset!");
static_assert(offsetof(FEyeTrackerGazeData, ConfidenceValue) == 0x000048, "Member 'FEyeTrackerGazeData::ConfidenceValue' has a wrong offset!");

// ScriptStruct EyeTracker.EyeTrackerStereoGazeData
// 0x0080 (0x0080 - 0x0000)
struct FEyeTrackerStereoGazeData final
{
public:
	struct FVector                                LeftEyeOrigin;                                     // 0x0000(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                LeftEyeDirection;                                  // 0x0018(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                RightEyeOrigin;                                    // 0x0030(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                RightEyeDirection;                                 // 0x0048(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                FixationPoint;                                     // 0x0060(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ConfidenceValue;                                   // 0x0078(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_7C[0x4];                                       // 0x007C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FEyeTrackerStereoGazeData) == 0x000008, "Wrong alignment on FEyeTrackerStereoGazeData");
static_assert(sizeof(FEyeTrackerStereoGazeData) == 0x000080, "Wrong size on FEyeTrackerStereoGazeData");
static_assert(offsetof(FEyeTrackerStereoGazeData, LeftEyeOrigin) == 0x000000, "Member 'FEyeTrackerStereoGazeData::LeftEyeOrigin' has a wrong offset!");
static_assert(offsetof(FEyeTrackerStereoGazeData, LeftEyeDirection) == 0x000018, "Member 'FEyeTrackerStereoGazeData::LeftEyeDirection' has a wrong offset!");
static_assert(offsetof(FEyeTrackerStereoGazeData, RightEyeOrigin) == 0x000030, "Member 'FEyeTrackerStereoGazeData::RightEyeOrigin' has a wrong offset!");
static_assert(offsetof(FEyeTrackerStereoGazeData, RightEyeDirection) == 0x000048, "Member 'FEyeTrackerStereoGazeData::RightEyeDirection' has a wrong offset!");
static_assert(offsetof(FEyeTrackerStereoGazeData, FixationPoint) == 0x000060, "Member 'FEyeTrackerStereoGazeData::FixationPoint' has a wrong offset!");
static_assert(offsetof(FEyeTrackerStereoGazeData, ConfidenceValue) == 0x000078, "Member 'FEyeTrackerStereoGazeData::ConfidenceValue' has a wrong offset!");

}

