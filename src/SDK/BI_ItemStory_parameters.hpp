#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BI_ItemStory

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function BI_ItemStory.BI_ItemStory_C.ExecuteUbergraph_BI_ItemStory
// 0x0040 (0x0040 - 0x0000)
struct BI_ItemStory_C_ExecuteUbergraph_BI_ItemStory final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0004(0x0014)()
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_3;              // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BI_ItemStory_C_ExecuteUbergraph_BI_ItemStory) == 0x000008, "Wrong alignment on BI_ItemStory_C_ExecuteUbergraph_BI_ItemStory");
static_assert(sizeof(BI_ItemStory_C_ExecuteUbergraph_BI_ItemStory) == 0x000040, "Wrong size on BI_ItemStory_C_ExecuteUbergraph_BI_ItemStory");
static_assert(offsetof(BI_ItemStory_C_ExecuteUbergraph_BI_ItemStory, EntryPoint) == 0x000000, "Member 'BI_ItemStory_C_ExecuteUbergraph_BI_ItemStory::EntryPoint' has a wrong offset!");
static_assert(offsetof(BI_ItemStory_C_ExecuteUbergraph_BI_ItemStory, K2Node_MakeStruct_SlateColor) == 0x000004, "Member 'BI_ItemStory_C_ExecuteUbergraph_BI_ItemStory::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(BI_ItemStory_C_ExecuteUbergraph_BI_ItemStory, K2Node_Event_IsDesignTime) == 0x000018, "Member 'BI_ItemStory_C_ExecuteUbergraph_BI_ItemStory::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(BI_ItemStory_C_ExecuteUbergraph_BI_ItemStory, CallFunc_PlayAnimation_ReturnValue) == 0x000020, "Member 'BI_ItemStory_C_ExecuteUbergraph_BI_ItemStory::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BI_ItemStory_C_ExecuteUbergraph_BI_ItemStory, CallFunc_PlayAnimation_ReturnValue_1) == 0x000028, "Member 'BI_ItemStory_C_ExecuteUbergraph_BI_ItemStory::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BI_ItemStory_C_ExecuteUbergraph_BI_ItemStory, CallFunc_PlayAnimation_ReturnValue_2) == 0x000030, "Member 'BI_ItemStory_C_ExecuteUbergraph_BI_ItemStory::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BI_ItemStory_C_ExecuteUbergraph_BI_ItemStory, CallFunc_PlayAnimation_ReturnValue_3) == 0x000038, "Member 'BI_ItemStory_C_ExecuteUbergraph_BI_ItemStory::CallFunc_PlayAnimation_ReturnValue_3' has a wrong offset!");

// Function BI_ItemStory.BI_ItemStory_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct BI_ItemStory_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BI_ItemStory_C_PreConstruct) == 0x000001, "Wrong alignment on BI_ItemStory_C_PreConstruct");
static_assert(sizeof(BI_ItemStory_C_PreConstruct) == 0x000001, "Wrong size on BI_ItemStory_C_PreConstruct");
static_assert(offsetof(BI_ItemStory_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'BI_ItemStory_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

