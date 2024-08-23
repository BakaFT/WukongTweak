#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GSDataShare

#include "Basic.hpp"


namespace SDK::Params
{

// Function GSDataShare.GSDataShareAPI.BPCheckDataValid
// 0x0004 (0x0004 - 0x0000)
struct GSDataShareAPI_BPCheckDataValid final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GSDataShareAPI_BPCheckDataValid) == 0x000004, "Wrong alignment on GSDataShareAPI_BPCheckDataValid");
static_assert(sizeof(GSDataShareAPI_BPCheckDataValid) == 0x000004, "Wrong size on GSDataShareAPI_BPCheckDataValid");
static_assert(offsetof(GSDataShareAPI_BPCheckDataValid, ReturnValue) == 0x000000, "Member 'GSDataShareAPI_BPCheckDataValid::ReturnValue' has a wrong offset!");

// Function GSDataShare.GSDataShareAPI.BPInitLoadData
// 0x0004 (0x0004 - 0x0000)
struct GSDataShareAPI_BPInitLoadData final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GSDataShareAPI_BPInitLoadData) == 0x000004, "Wrong alignment on GSDataShareAPI_BPInitLoadData");
static_assert(sizeof(GSDataShareAPI_BPInitLoadData) == 0x000004, "Wrong size on GSDataShareAPI_BPInitLoadData");
static_assert(offsetof(GSDataShareAPI_BPInitLoadData, ReturnValue) == 0x000000, "Member 'GSDataShareAPI_BPInitLoadData::ReturnValue' has a wrong offset!");

// Function GSDataShare.GSDataShareAPI.BPReloadData
// 0x0004 (0x0004 - 0x0000)
struct GSDataShareAPI_BPReloadData final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GSDataShareAPI_BPReloadData) == 0x000004, "Wrong alignment on GSDataShareAPI_BPReloadData");
static_assert(sizeof(GSDataShareAPI_BPReloadData) == 0x000004, "Wrong size on GSDataShareAPI_BPReloadData");
static_assert(offsetof(GSDataShareAPI_BPReloadData, ReturnValue) == 0x000000, "Member 'GSDataShareAPI_BPReloadData::ReturnValue' has a wrong offset!");

// Function GSDataShare.GSDataShareAPIHelper.IsAssetExist
// 0x0018 (0x0018 - 0x0000)
struct GSDataShareAPIHelper_IsAssetExist final
{
public:
	class FString                                 AssetPath;                                         // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(GSDataShareAPIHelper_IsAssetExist) == 0x000008, "Wrong alignment on GSDataShareAPIHelper_IsAssetExist");
static_assert(sizeof(GSDataShareAPIHelper_IsAssetExist) == 0x000018, "Wrong size on GSDataShareAPIHelper_IsAssetExist");
static_assert(offsetof(GSDataShareAPIHelper_IsAssetExist, AssetPath) == 0x000000, "Member 'GSDataShareAPIHelper_IsAssetExist::AssetPath' has a wrong offset!");
static_assert(offsetof(GSDataShareAPIHelper_IsAssetExist, ReturnValue) == 0x000010, "Member 'GSDataShareAPIHelper_IsAssetExist::ReturnValue' has a wrong offset!");

}

