#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BI_TreasureDetailItem

#include "Basic.hpp"

#include "b1MinusManaged_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BI_TreasureDetailItem.BI_TreasureDetailItem_C
// 0x0020 (0x04D8 - 0x04B8)
class UBI_TreasureDetailItem_C final : public UBUI_Button
{
public:
	class UWidgetAnimation*                       GSAKBStateAnim;                                    // 0x04B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 ImgBG;                                             // 0x04C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImgCD;                                             // 0x04C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImgIcon;                                           // 0x04D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BI_TreasureDetailItem_C">();
	}
	static class UBI_TreasureDetailItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBI_TreasureDetailItem_C>();
	}
};
static_assert(alignof(UBI_TreasureDetailItem_C) == 0x000008, "Wrong alignment on UBI_TreasureDetailItem_C");
static_assert(sizeof(UBI_TreasureDetailItem_C) == 0x0004D8, "Wrong size on UBI_TreasureDetailItem_C");
static_assert(offsetof(UBI_TreasureDetailItem_C, GSAKBStateAnim) == 0x0004B8, "Member 'UBI_TreasureDetailItem_C::GSAKBStateAnim' has a wrong offset!");
static_assert(offsetof(UBI_TreasureDetailItem_C, ImgBG) == 0x0004C0, "Member 'UBI_TreasureDetailItem_C::ImgBG' has a wrong offset!");
static_assert(offsetof(UBI_TreasureDetailItem_C, ImgCD) == 0x0004C8, "Member 'UBI_TreasureDetailItem_C::ImgCD' has a wrong offset!");
static_assert(offsetof(UBI_TreasureDetailItem_C, ImgIcon) == 0x0004D0, "Member 'UBI_TreasureDetailItem_C::ImgIcon' has a wrong offset!");

}

