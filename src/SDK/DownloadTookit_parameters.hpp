#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DownloadTookit

#include "Basic.hpp"

#include "DownloadTookit_structs.hpp"


namespace SDK::Params
{

// Function DownloadTookit.DownloadProxy.ReDownload
// 0x0001 (0x0001 - 0x0000)
struct DownloadProxy_ReDownload final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(DownloadProxy_ReDownload) == 0x000001, "Wrong alignment on DownloadProxy_ReDownload");
static_assert(sizeof(DownloadProxy_ReDownload) == 0x000001, "Wrong size on DownloadProxy_ReDownload");
static_assert(offsetof(DownloadProxy_ReDownload, ReturnValue) == 0x000000, "Member 'DownloadProxy_ReDownload::ReturnValue' has a wrong offset!");

// Function DownloadTookit.DownloadProxy.RequestDownload
// 0x0030 (0x0030 - 0x0000)
struct DownloadProxy_RequestDownload final
{
public:
	class FString                                 InURL;                                             // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 InSavePathOpt;                                     // 0x0010(0x0010)(Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bInSliceOpt;                                       // 0x0020(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InSliceByteSizeOpt;                                // 0x0024(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bInForceOpt;                                       // 0x0028(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(DownloadProxy_RequestDownload) == 0x000008, "Wrong alignment on DownloadProxy_RequestDownload");
static_assert(sizeof(DownloadProxy_RequestDownload) == 0x000030, "Wrong size on DownloadProxy_RequestDownload");
static_assert(offsetof(DownloadProxy_RequestDownload, InURL) == 0x000000, "Member 'DownloadProxy_RequestDownload::InURL' has a wrong offset!");
static_assert(offsetof(DownloadProxy_RequestDownload, InSavePathOpt) == 0x000010, "Member 'DownloadProxy_RequestDownload::InSavePathOpt' has a wrong offset!");
static_assert(offsetof(DownloadProxy_RequestDownload, bInSliceOpt) == 0x000020, "Member 'DownloadProxy_RequestDownload::bInSliceOpt' has a wrong offset!");
static_assert(offsetof(DownloadProxy_RequestDownload, InSliceByteSizeOpt) == 0x000024, "Member 'DownloadProxy_RequestDownload::InSliceByteSizeOpt' has a wrong offset!");
static_assert(offsetof(DownloadProxy_RequestDownload, bInForceOpt) == 0x000028, "Member 'DownloadProxy_RequestDownload::bInForceOpt' has a wrong offset!");

// Function DownloadTookit.DownloadProxy.Resume
// 0x0001 (0x0001 - 0x0000)
struct DownloadProxy_Resume final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(DownloadProxy_Resume) == 0x000001, "Wrong alignment on DownloadProxy_Resume");
static_assert(sizeof(DownloadProxy_Resume) == 0x000001, "Wrong size on DownloadProxy_Resume");
static_assert(offsetof(DownloadProxy_Resume, ReturnValue) == 0x000000, "Member 'DownloadProxy_Resume::ReturnValue' has a wrong offset!");

// Function DownloadTookit.DownloadProxy.Tick
// 0x0008 (0x0008 - 0x0000)
struct DownloadProxy_Tick final
{
public:
	float                                         Delta;                                             // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(DownloadProxy_Tick) == 0x000004, "Wrong alignment on DownloadProxy_Tick");
static_assert(sizeof(DownloadProxy_Tick) == 0x000008, "Wrong size on DownloadProxy_Tick");
static_assert(offsetof(DownloadProxy_Tick, Delta) == 0x000000, "Member 'DownloadProxy_Tick::Delta' has a wrong offset!");
static_assert(offsetof(DownloadProxy_Tick, ReturnValue) == 0x000004, "Member 'DownloadProxy_Tick::ReturnValue' has a wrong offset!");

// Function DownloadTookit.DownloadProxy.GetDownloadedFileInfo
// 0x0048 (0x0048 - 0x0000)
struct DownloadProxy_GetDownloadedFileInfo final
{
public:
	struct FDownloadFile                          ReturnValue;                                       // 0x0000(0x0048)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(DownloadProxy_GetDownloadedFileInfo) == 0x000008, "Wrong alignment on DownloadProxy_GetDownloadedFileInfo");
static_assert(sizeof(DownloadProxy_GetDownloadedFileInfo) == 0x000048, "Wrong size on DownloadProxy_GetDownloadedFileInfo");
static_assert(offsetof(DownloadProxy_GetDownloadedFileInfo, ReturnValue) == 0x000000, "Member 'DownloadProxy_GetDownloadedFileInfo::ReturnValue' has a wrong offset!");

// Function DownloadTookit.DownloadProxy.GetDownloadedSize
// 0x0004 (0x0004 - 0x0000)
struct DownloadProxy_GetDownloadedSize final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(DownloadProxy_GetDownloadedSize) == 0x000004, "Wrong alignment on DownloadProxy_GetDownloadedSize");
static_assert(sizeof(DownloadProxy_GetDownloadedSize) == 0x000004, "Wrong size on DownloadProxy_GetDownloadedSize");
static_assert(offsetof(DownloadProxy_GetDownloadedSize, ReturnValue) == 0x000000, "Member 'DownloadProxy_GetDownloadedSize::ReturnValue' has a wrong offset!");

// Function DownloadTookit.DownloadProxy.GetDownloadProgress
// 0x0004 (0x0004 - 0x0000)
struct DownloadProxy_GetDownloadProgress final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(DownloadProxy_GetDownloadProgress) == 0x000004, "Wrong alignment on DownloadProxy_GetDownloadProgress");
static_assert(sizeof(DownloadProxy_GetDownloadProgress) == 0x000004, "Wrong size on DownloadProxy_GetDownloadProgress");
static_assert(offsetof(DownloadProxy_GetDownloadProgress, ReturnValue) == 0x000000, "Member 'DownloadProxy_GetDownloadProgress::ReturnValue' has a wrong offset!");

// Function DownloadTookit.DownloadProxy.GetDownloadSpeed
// 0x0004 (0x0004 - 0x0000)
struct DownloadProxy_GetDownloadSpeed final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(DownloadProxy_GetDownloadSpeed) == 0x000004, "Wrong alignment on DownloadProxy_GetDownloadSpeed");
static_assert(sizeof(DownloadProxy_GetDownloadSpeed) == 0x000004, "Wrong size on DownloadProxy_GetDownloadSpeed");
static_assert(offsetof(DownloadProxy_GetDownloadSpeed, ReturnValue) == 0x000000, "Member 'DownloadProxy_GetDownloadSpeed::ReturnValue' has a wrong offset!");

// Function DownloadTookit.DownloadProxy.GetDownloadSpeedKbs
// 0x0004 (0x0004 - 0x0000)
struct DownloadProxy_GetDownloadSpeedKbs final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(DownloadProxy_GetDownloadSpeedKbs) == 0x000004, "Wrong alignment on DownloadProxy_GetDownloadSpeedKbs");
static_assert(sizeof(DownloadProxy_GetDownloadSpeedKbs) == 0x000004, "Wrong size on DownloadProxy_GetDownloadSpeedKbs");
static_assert(offsetof(DownloadProxy_GetDownloadSpeedKbs, ReturnValue) == 0x000000, "Member 'DownloadProxy_GetDownloadSpeedKbs::ReturnValue' has a wrong offset!");

// Function DownloadTookit.DownloadProxy.GetDownloadStatus
// 0x0001 (0x0001 - 0x0000)
struct DownloadProxy_GetDownloadStatus final
{
public:
	EDownloadStatus                               ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(DownloadProxy_GetDownloadStatus) == 0x000001, "Wrong alignment on DownloadProxy_GetDownloadStatus");
static_assert(sizeof(DownloadProxy_GetDownloadStatus) == 0x000001, "Wrong size on DownloadProxy_GetDownloadStatus");
static_assert(offsetof(DownloadProxy_GetDownloadStatus, ReturnValue) == 0x000000, "Member 'DownloadProxy_GetDownloadStatus::ReturnValue' has a wrong offset!");

// Function DownloadTookit.DownloadProxy.GetTotalSize
// 0x0004 (0x0004 - 0x0000)
struct DownloadProxy_GetTotalSize final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(DownloadProxy_GetTotalSize) == 0x000004, "Wrong alignment on DownloadProxy_GetTotalSize");
static_assert(sizeof(DownloadProxy_GetTotalSize) == 0x000004, "Wrong size on DownloadProxy_GetTotalSize");
static_assert(offsetof(DownloadProxy_GetTotalSize, ReturnValue) == 0x000000, "Member 'DownloadProxy_GetTotalSize::ReturnValue' has a wrong offset!");

// Function DownloadTookit.DownloadProxy.HashCheck
// 0x0018 (0x0018 - 0x0000)
struct DownloadProxy_HashCheck final
{
public:
	class FString                                 InMD5Hash;                                         // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(DownloadProxy_HashCheck) == 0x000008, "Wrong alignment on DownloadProxy_HashCheck");
static_assert(sizeof(DownloadProxy_HashCheck) == 0x000018, "Wrong size on DownloadProxy_HashCheck");
static_assert(offsetof(DownloadProxy_HashCheck, InMD5Hash) == 0x000000, "Member 'DownloadProxy_HashCheck::InMD5Hash' has a wrong offset!");
static_assert(offsetof(DownloadProxy_HashCheck, ReturnValue) == 0x000010, "Member 'DownloadProxy_HashCheck::ReturnValue' has a wrong offset!");

}

