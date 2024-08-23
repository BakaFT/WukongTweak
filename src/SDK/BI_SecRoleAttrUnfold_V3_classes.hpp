#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BI_SecRoleAttrUnfold_V3

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "b1MinusManaged_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BI_SecRoleAttrUnfold_V3.BI_SecRoleAttrUnfold_V3_C
// 0x0058 (0x0430 - 0x03D8)
class UBI_SecRoleAttrUnfold_V3_C final : public UBUI_Widget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       StateChange_0;                                     // 0x03E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       MinusMinusMinusMinusMinusMinusMinusMinusMinusMinusMinusMinusMinusMinusMinusMinusMinusMinusMinus; // 0x03E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AKBToLearn;                                        // 0x03F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       StateChange;                                       // 0x03F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 ImgBarOther;                                       // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImgBarState;                                       // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImgMarkerOther;                                    // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                SpacerChange;                                      // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           TxtChangeCon;                                      // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 UIFX_HighLight;                                    // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_BI_SecRoleAttrUnfold_V3(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BI_SecRoleAttrUnfold_V3_C">();
	}
	static class UBI_SecRoleAttrUnfold_V3_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBI_SecRoleAttrUnfold_V3_C>();
	}
};
static_assert(alignof(UBI_SecRoleAttrUnfold_V3_C) == 0x000008, "Wrong alignment on UBI_SecRoleAttrUnfold_V3_C");
static_assert(sizeof(UBI_SecRoleAttrUnfold_V3_C) == 0x000430, "Wrong size on UBI_SecRoleAttrUnfold_V3_C");
static_assert(offsetof(UBI_SecRoleAttrUnfold_V3_C, UberGraphFrame) == 0x0003D8, "Member 'UBI_SecRoleAttrUnfold_V3_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBI_SecRoleAttrUnfold_V3_C, StateChange_0) == 0x0003E0, "Member 'UBI_SecRoleAttrUnfold_V3_C::StateChange_0' has a wrong offset!");
static_assert(offsetof(UBI_SecRoleAttrUnfold_V3_C, MinusMinusMinusMinusMinusMinusMinusMinusMinusMinusMinusMinusMinusMinusMinusMinusMinusMinusMinus) == 0x0003E8, "Member 'UBI_SecRoleAttrUnfold_V3_C::MinusMinusMinusMinusMinusMinusMinusMinusMinusMinusMinusMinusMinusMinusMinusMinusMinusMinusMinus' has a wrong offset!");
static_assert(offsetof(UBI_SecRoleAttrUnfold_V3_C, AKBToLearn) == 0x0003F0, "Member 'UBI_SecRoleAttrUnfold_V3_C::AKBToLearn' has a wrong offset!");
static_assert(offsetof(UBI_SecRoleAttrUnfold_V3_C, StateChange) == 0x0003F8, "Member 'UBI_SecRoleAttrUnfold_V3_C::StateChange' has a wrong offset!");
static_assert(offsetof(UBI_SecRoleAttrUnfold_V3_C, ImgBarOther) == 0x000400, "Member 'UBI_SecRoleAttrUnfold_V3_C::ImgBarOther' has a wrong offset!");
static_assert(offsetof(UBI_SecRoleAttrUnfold_V3_C, ImgBarState) == 0x000408, "Member 'UBI_SecRoleAttrUnfold_V3_C::ImgBarState' has a wrong offset!");
static_assert(offsetof(UBI_SecRoleAttrUnfold_V3_C, ImgMarkerOther) == 0x000410, "Member 'UBI_SecRoleAttrUnfold_V3_C::ImgMarkerOther' has a wrong offset!");
static_assert(offsetof(UBI_SecRoleAttrUnfold_V3_C, SpacerChange) == 0x000418, "Member 'UBI_SecRoleAttrUnfold_V3_C::SpacerChange' has a wrong offset!");
static_assert(offsetof(UBI_SecRoleAttrUnfold_V3_C, TxtChangeCon) == 0x000420, "Member 'UBI_SecRoleAttrUnfold_V3_C::TxtChangeCon' has a wrong offset!");
static_assert(offsetof(UBI_SecRoleAttrUnfold_V3_C, UIFX_HighLight) == 0x000428, "Member 'UBI_SecRoleAttrUnfold_V3_C::UIFX_HighLight' has a wrong offset!");

}

