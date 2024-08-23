#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BI_CostItem

#include "Basic.hpp"

#include "BI_CostItem_classes.hpp"
#include "BI_CostItem_parameters.hpp"


namespace SDK
{

// Function BI_CostItem.BI_CostItem_C.ExecuteUbergraph_BI_CostItem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBI_CostItem_C::ExecuteUbergraph_BI_CostItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BI_CostItem_C", "ExecuteUbergraph_BI_CostItem");

	Params::BI_CostItem_C_ExecuteUbergraph_BI_CostItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BI_CostItem.BI_CostItem_C.InitTxt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*                       TxtObj                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAnchors                         TxtAnchors                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FVector2D                        TxtAlignment                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        TxtPos                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                      TxtColor                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSlateFontInfo                   TxtFont                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FVector2D                        TxtShadowOffset                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     TxtShadowColor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ETextJustify                            TxtJustification                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBI_CostItem_C::InitTxt(class UTextBlock* TxtObj, const struct FAnchors& TxtAnchors, const struct FVector2D& TxtAlignment, const struct FVector2D& TxtPos, const struct FSlateColor& TxtColor, const struct FSlateFontInfo& TxtFont, const struct FVector2D& TxtShadowOffset, const struct FLinearColor& TxtShadowColor, ETextJustify TxtJustification)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BI_CostItem_C", "InitTxt");

	Params::BI_CostItem_C_InitTxt Parms{};

	Parms.TxtObj = TxtObj;
	Parms.TxtAnchors = std::move(TxtAnchors);
	Parms.TxtAlignment = std::move(TxtAlignment);
	Parms.TxtPos = std::move(TxtPos);
	Parms.TxtColor = std::move(TxtColor);
	Parms.TxtFont = std::move(TxtFont);
	Parms.TxtShadowOffset = std::move(TxtShadowOffset);
	Parms.TxtShadowColor = std::move(TxtShadowColor);
	Parms.TxtJustification = TxtJustification;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BI_CostItem.BI_CostItem_C.InitUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                           Obj                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                      Brush                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FVector2D                        Size                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        Pos                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBI_CostItem_C::InitUI(class UImage* Obj, const struct FSlateBrush& Brush, const struct FVector2D& Size, const struct FVector2D& Pos)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BI_CostItem_C", "InitUI");

	Params::BI_CostItem_C_InitUI Parms{};

	Parms.Obj = Obj;
	Parms.Brush = std::move(Brush);
	Parms.Size = std::move(Size);
	Parms.Pos = std::move(Pos);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BI_CostItem.BI_CostItem_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBI_CostItem_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BI_CostItem_C", "PreConstruct");

	Params::BI_CostItem_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

