#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SpiderNavigation

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function SpiderNavigation.SpiderNavGridBuilder.BuildGrid
// 0x0004 (0x0004 - 0x0000)
struct SpiderNavGridBuilder_BuildGrid final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(SpiderNavGridBuilder_BuildGrid) == 0x000004, "Wrong alignment on SpiderNavGridBuilder_BuildGrid");
static_assert(sizeof(SpiderNavGridBuilder_BuildGrid) == 0x000004, "Wrong size on SpiderNavGridBuilder_BuildGrid");
static_assert(offsetof(SpiderNavGridBuilder_BuildGrid, ReturnValue) == 0x000000, "Member 'SpiderNavGridBuilder_BuildGrid::ReturnValue' has a wrong offset!");

// Function SpiderNavigation.SpiderNavigation.FindClosestNodeLocation
// 0x0030 (0x0030 - 0x0000)
struct SpiderNavigation_FindClosestNodeLocation final
{
public:
	struct FVector                                Location;                                          // 0x0000(0x0018)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                ReturnValue;                                       // 0x0018(0x0018)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(SpiderNavigation_FindClosestNodeLocation) == 0x000008, "Wrong alignment on SpiderNavigation_FindClosestNodeLocation");
static_assert(sizeof(SpiderNavigation_FindClosestNodeLocation) == 0x000030, "Wrong size on SpiderNavigation_FindClosestNodeLocation");
static_assert(offsetof(SpiderNavigation_FindClosestNodeLocation, Location) == 0x000000, "Member 'SpiderNavigation_FindClosestNodeLocation::Location' has a wrong offset!");
static_assert(offsetof(SpiderNavigation_FindClosestNodeLocation, ReturnValue) == 0x000018, "Member 'SpiderNavigation_FindClosestNodeLocation::ReturnValue' has a wrong offset!");

// Function SpiderNavigation.SpiderNavigation.FindClosestNodeNormal
// 0x0030 (0x0030 - 0x0000)
struct SpiderNavigation_FindClosestNodeNormal final
{
public:
	struct FVector                                Location;                                          // 0x0000(0x0018)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                ReturnValue;                                       // 0x0018(0x0018)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(SpiderNavigation_FindClosestNodeNormal) == 0x000008, "Wrong alignment on SpiderNavigation_FindClosestNodeNormal");
static_assert(sizeof(SpiderNavigation_FindClosestNodeNormal) == 0x000030, "Wrong size on SpiderNavigation_FindClosestNodeNormal");
static_assert(offsetof(SpiderNavigation_FindClosestNodeNormal, Location) == 0x000000, "Member 'SpiderNavigation_FindClosestNodeNormal::Location' has a wrong offset!");
static_assert(offsetof(SpiderNavigation_FindClosestNodeNormal, ReturnValue) == 0x000018, "Member 'SpiderNavigation_FindClosestNodeNormal::ReturnValue' has a wrong offset!");

// Function SpiderNavigation.SpiderNavigation.FindNextLocationAndNormal
// 0x0068 (0x0068 - 0x0000)
struct SpiderNavigation_FindNextLocationAndNormal final
{
public:
	struct FVector                                CurrentLocation;                                   // 0x0000(0x0018)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                TargetLocation;                                    // 0x0018(0x0018)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                NextLocation;                                      // 0x0030(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Normal;                                            // 0x0048(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0060(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(SpiderNavigation_FindNextLocationAndNormal) == 0x000008, "Wrong alignment on SpiderNavigation_FindNextLocationAndNormal");
static_assert(sizeof(SpiderNavigation_FindNextLocationAndNormal) == 0x000068, "Wrong size on SpiderNavigation_FindNextLocationAndNormal");
static_assert(offsetof(SpiderNavigation_FindNextLocationAndNormal, CurrentLocation) == 0x000000, "Member 'SpiderNavigation_FindNextLocationAndNormal::CurrentLocation' has a wrong offset!");
static_assert(offsetof(SpiderNavigation_FindNextLocationAndNormal, TargetLocation) == 0x000018, "Member 'SpiderNavigation_FindNextLocationAndNormal::TargetLocation' has a wrong offset!");
static_assert(offsetof(SpiderNavigation_FindNextLocationAndNormal, NextLocation) == 0x000030, "Member 'SpiderNavigation_FindNextLocationAndNormal::NextLocation' has a wrong offset!");
static_assert(offsetof(SpiderNavigation_FindNextLocationAndNormal, Normal) == 0x000048, "Member 'SpiderNavigation_FindNextLocationAndNormal::Normal' has a wrong offset!");
static_assert(offsetof(SpiderNavigation_FindNextLocationAndNormal, ReturnValue) == 0x000060, "Member 'SpiderNavigation_FindNextLocationAndNormal::ReturnValue' has a wrong offset!");

// Function SpiderNavigation.SpiderNavigation.FindPath
// 0x0048 (0x0048 - 0x0000)
struct SpiderNavigation_FindPath final
{
public:
	struct FVector                                Start;                                             // 0x0000(0x0018)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                End;                                               // 0x0018(0x0018)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bFoundCompletePath;                                // 0x0030(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVector>                        ReturnValue;                                       // 0x0038(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(SpiderNavigation_FindPath) == 0x000008, "Wrong alignment on SpiderNavigation_FindPath");
static_assert(sizeof(SpiderNavigation_FindPath) == 0x000048, "Wrong size on SpiderNavigation_FindPath");
static_assert(offsetof(SpiderNavigation_FindPath, Start) == 0x000000, "Member 'SpiderNavigation_FindPath::Start' has a wrong offset!");
static_assert(offsetof(SpiderNavigation_FindPath, End) == 0x000018, "Member 'SpiderNavigation_FindPath::End' has a wrong offset!");
static_assert(offsetof(SpiderNavigation_FindPath, bFoundCompletePath) == 0x000030, "Member 'SpiderNavigation_FindPath::bFoundCompletePath' has a wrong offset!");
static_assert(offsetof(SpiderNavigation_FindPath, ReturnValue) == 0x000038, "Member 'SpiderNavigation_FindPath::ReturnValue' has a wrong offset!");

// Function SpiderNavigation.SpiderNavigation.GetNavNodesCount
// 0x0004 (0x0004 - 0x0000)
struct SpiderNavigation_GetNavNodesCount final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(SpiderNavigation_GetNavNodesCount) == 0x000004, "Wrong alignment on SpiderNavigation_GetNavNodesCount");
static_assert(sizeof(SpiderNavigation_GetNavNodesCount) == 0x000004, "Wrong size on SpiderNavigation_GetNavNodesCount");
static_assert(offsetof(SpiderNavigation_GetNavNodesCount, ReturnValue) == 0x000000, "Member 'SpiderNavigation_GetNavNodesCount::ReturnValue' has a wrong offset!");

// Function SpiderNavigation.SpiderNavigation.LoadGrid
// 0x0001 (0x0001 - 0x0000)
struct SpiderNavigation_LoadGrid final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(SpiderNavigation_LoadGrid) == 0x000001, "Wrong alignment on SpiderNavigation_LoadGrid");
static_assert(sizeof(SpiderNavigation_LoadGrid) == 0x000001, "Wrong size on SpiderNavigation_LoadGrid");
static_assert(offsetof(SpiderNavigation_LoadGrid, ReturnValue) == 0x000000, "Member 'SpiderNavigation_LoadGrid::ReturnValue' has a wrong offset!");

}

