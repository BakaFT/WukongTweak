#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BI_GearItem_Slot

#include "Basic.hpp"

#include "BI_GearItem_Slot_classes.hpp"
#include "BI_GearItem_Slot_parameters.hpp"


namespace SDK
{

// Function BI_GearItem_Slot.BI_GearItem_Slot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBI_GearItem_Slot_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BI_GearItem_Slot_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BI_GearItem_Slot.BI_GearItem_Slot_C.ExecuteUbergraph_BI_GearItem_Slot
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBI_GearItem_Slot_C::ExecuteUbergraph_BI_GearItem_Slot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BI_GearItem_Slot_C", "ExecuteUbergraph_BI_GearItem_Slot");

	Params::BI_GearItem_Slot_C_ExecuteUbergraph_BI_GearItem_Slot Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BI_GearItem_Slot.BI_GearItem_Slot_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBI_GearItem_Slot_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BI_GearItem_Slot_C", "PreConstruct");

	Params::BI_GearItem_Slot_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

