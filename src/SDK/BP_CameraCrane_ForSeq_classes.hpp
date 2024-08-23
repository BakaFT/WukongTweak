#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CameraCrane_ForSeq

#include "Basic.hpp"

#include "CinematicCamera_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CameraCrane_ForSeq.BP_CameraCrane_ForSeq_C
// 0x0000 (0x02A8 - 0x02A8)
class ABP_CameraCrane_ForSeq_C final : public ACameraRig_Crane
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CameraCrane_ForSeq_C">();
	}
	static class ABP_CameraCrane_ForSeq_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CameraCrane_ForSeq_C>();
	}
};
static_assert(alignof(ABP_CameraCrane_ForSeq_C) == 0x000008, "Wrong alignment on ABP_CameraCrane_ForSeq_C");
static_assert(sizeof(ABP_CameraCrane_ForSeq_C) == 0x0002A8, "Wrong size on ABP_CameraCrane_ForSeq_C");

}

