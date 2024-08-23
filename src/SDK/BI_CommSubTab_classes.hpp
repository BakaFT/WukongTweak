#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BI_CommSubTab

#include "Basic.hpp"

#include "b1MinusManaged_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BI_CommSubTab.BI_CommSubTab_C
// 0x0020 (0x03F8 - 0x03D8)
class UBI_CommSubTab_C final : public UBUI_Widget
{
public:
	class UBI_CommIconTab_C*                      BI_SecTab;                                         // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGSInputActionIcon*                     GSInputActionIcon_left;                            // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGSInputActionIcon*                     GSInputActionIcon_right;                           // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImgBar;                                            // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BI_CommSubTab_C">();
	}
	static class UBI_CommSubTab_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBI_CommSubTab_C>();
	}
};
static_assert(alignof(UBI_CommSubTab_C) == 0x000008, "Wrong alignment on UBI_CommSubTab_C");
static_assert(sizeof(UBI_CommSubTab_C) == 0x0003F8, "Wrong size on UBI_CommSubTab_C");
static_assert(offsetof(UBI_CommSubTab_C, BI_SecTab) == 0x0003D8, "Member 'UBI_CommSubTab_C::BI_SecTab' has a wrong offset!");
static_assert(offsetof(UBI_CommSubTab_C, GSInputActionIcon_left) == 0x0003E0, "Member 'UBI_CommSubTab_C::GSInputActionIcon_left' has a wrong offset!");
static_assert(offsetof(UBI_CommSubTab_C, GSInputActionIcon_right) == 0x0003E8, "Member 'UBI_CommSubTab_C::GSInputActionIcon_right' has a wrong offset!");
static_assert(offsetof(UBI_CommSubTab_C, ImgBar) == 0x0003F0, "Member 'UBI_CommSubTab_C::ImgBar' has a wrong offset!");

}

