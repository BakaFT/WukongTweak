#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BI_Sorting

#include "Basic.hpp"

#include "BI_Sorting_classes.hpp"
#include "BI_Sorting_parameters.hpp"


namespace SDK
{

// Function BI_Sorting.BI_Sorting_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBI_Sorting_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BI_Sorting_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BI_Sorting.BI_Sorting_C.ExecuteUbergraph_BI_Sorting
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBI_Sorting_C::ExecuteUbergraph_BI_Sorting(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BI_Sorting_C", "ExecuteUbergraph_BI_Sorting");

	Params::BI_Sorting_C_ExecuteUbergraph_BI_Sorting Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BI_Sorting.BI_Sorting_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBI_Sorting_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BI_Sorting_C", "PreConstruct");

	Params::BI_Sorting_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

