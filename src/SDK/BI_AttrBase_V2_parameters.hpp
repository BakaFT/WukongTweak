#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BI_AttrBase_V2

#include "Basic.hpp"


namespace SDK::Params
{

// Function BI_AttrBase_V2.BI_AttrBase_V2_C.ExecuteUbergraph_BI_AttrBase_V2
// 0x0018 (0x0018 - 0x0000)
struct BI_AttrBase_V2_C_ExecuteUbergraph_BI_AttrBase_V2 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_EventName;                      // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BI_AttrBase_V2_C_ExecuteUbergraph_BI_AttrBase_V2) == 0x000008, "Wrong alignment on BI_AttrBase_V2_C_ExecuteUbergraph_BI_AttrBase_V2");
static_assert(sizeof(BI_AttrBase_V2_C_ExecuteUbergraph_BI_AttrBase_V2) == 0x000018, "Wrong size on BI_AttrBase_V2_C_ExecuteUbergraph_BI_AttrBase_V2");
static_assert(offsetof(BI_AttrBase_V2_C_ExecuteUbergraph_BI_AttrBase_V2, EntryPoint) == 0x000000, "Member 'BI_AttrBase_V2_C_ExecuteUbergraph_BI_AttrBase_V2::EntryPoint' has a wrong offset!");
static_assert(offsetof(BI_AttrBase_V2_C_ExecuteUbergraph_BI_AttrBase_V2, K2Node_Event_IsDesignTime) == 0x000004, "Member 'BI_AttrBase_V2_C_ExecuteUbergraph_BI_AttrBase_V2::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(BI_AttrBase_V2_C_ExecuteUbergraph_BI_AttrBase_V2, K2Node_CustomEvent_EventName) == 0x000008, "Member 'BI_AttrBase_V2_C_ExecuteUbergraph_BI_AttrBase_V2::K2Node_CustomEvent_EventName' has a wrong offset!");

// Function BI_AttrBase_V2.BI_AttrBase_V2_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct BI_AttrBase_V2_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BI_AttrBase_V2_C_PreConstruct) == 0x000001, "Wrong alignment on BI_AttrBase_V2_C_PreConstruct");
static_assert(sizeof(BI_AttrBase_V2_C_PreConstruct) == 0x000001, "Wrong size on BI_AttrBase_V2_C_PreConstruct");
static_assert(offsetof(BI_AttrBase_V2_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'BI_AttrBase_V2_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function BI_AttrBase_V2.BI_AttrBase_V2_C.SequenceEvent_0
// 0x0010 (0x0010 - 0x0000)
struct BI_AttrBase_V2_C_SequenceEvent_0 final
{
public:
	class FString                                 EventName;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BI_AttrBase_V2_C_SequenceEvent_0) == 0x000008, "Wrong alignment on BI_AttrBase_V2_C_SequenceEvent_0");
static_assert(sizeof(BI_AttrBase_V2_C_SequenceEvent_0) == 0x000010, "Wrong size on BI_AttrBase_V2_C_SequenceEvent_0");
static_assert(offsetof(BI_AttrBase_V2_C_SequenceEvent_0, EventName) == 0x000000, "Member 'BI_AttrBase_V2_C_SequenceEvent_0::EventName' has a wrong offset!");

}

