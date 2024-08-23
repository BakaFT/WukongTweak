#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NiagaraUIRenderer

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function NiagaraUIRenderer.NiagaraSystemWidget.ActivateSystem
// 0x0001 (0x0001 - 0x0000)
struct NiagaraSystemWidget_ActivateSystem final
{
public:
	bool                                          Reset;                                             // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(NiagaraSystemWidget_ActivateSystem) == 0x000001, "Wrong alignment on NiagaraSystemWidget_ActivateSystem");
static_assert(sizeof(NiagaraSystemWidget_ActivateSystem) == 0x000001, "Wrong size on NiagaraSystemWidget_ActivateSystem");
static_assert(offsetof(NiagaraSystemWidget_ActivateSystem, Reset) == 0x000000, "Member 'NiagaraSystemWidget_ActivateSystem::Reset' has a wrong offset!");

// Function NiagaraUIRenderer.NiagaraSystemWidget.GetNiagaraComponent
// 0x0008 (0x0008 - 0x0000)
struct NiagaraSystemWidget_GetNiagaraComponent final
{
public:
	class UNiagaraUIComponent*                    ReturnValue;                                       // 0x0000(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(NiagaraSystemWidget_GetNiagaraComponent) == 0x000008, "Wrong alignment on NiagaraSystemWidget_GetNiagaraComponent");
static_assert(sizeof(NiagaraSystemWidget_GetNiagaraComponent) == 0x000008, "Wrong size on NiagaraSystemWidget_GetNiagaraComponent");
static_assert(offsetof(NiagaraSystemWidget_GetNiagaraComponent, ReturnValue) == 0x000000, "Member 'NiagaraSystemWidget_GetNiagaraComponent::ReturnValue' has a wrong offset!");

// Function NiagaraUIRenderer.NiagaraSystemWidget.GSActiveFX
// 0x0002 (0x0002 - 0x0000)
struct NiagaraSystemWidget_GSActiveFX final
{
public:
	bool                                          IsActive;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsReset;                                           // 0x0001(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(NiagaraSystemWidget_GSActiveFX) == 0x000001, "Wrong alignment on NiagaraSystemWidget_GSActiveFX");
static_assert(sizeof(NiagaraSystemWidget_GSActiveFX) == 0x000002, "Wrong size on NiagaraSystemWidget_GSActiveFX");
static_assert(offsetof(NiagaraSystemWidget_GSActiveFX, IsActive) == 0x000000, "Member 'NiagaraSystemWidget_GSActiveFX::IsActive' has a wrong offset!");
static_assert(offsetof(NiagaraSystemWidget_GSActiveFX, IsReset) == 0x000001, "Member 'NiagaraSystemWidget_GSActiveFX::IsReset' has a wrong offset!");

// Function NiagaraUIRenderer.NiagaraSystemWidget.GSPlayFX
// 0x0001 (0x0001 - 0x0000)
struct NiagaraSystemWidget_GSPlayFX final
{
public:
	bool                                          IsReset;                                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(NiagaraSystemWidget_GSPlayFX) == 0x000001, "Wrong alignment on NiagaraSystemWidget_GSPlayFX");
static_assert(sizeof(NiagaraSystemWidget_GSPlayFX) == 0x000001, "Wrong size on NiagaraSystemWidget_GSPlayFX");
static_assert(offsetof(NiagaraSystemWidget_GSPlayFX, IsReset) == 0x000000, "Member 'NiagaraSystemWidget_GSPlayFX::IsReset' has a wrong offset!");

// Function NiagaraUIRenderer.NiagaraSystemWidget.GSSetNiagaraValBool
// 0x0018 (0x0018 - 0x0000)
struct NiagaraSystemWidget_GSSetNiagaraValBool final
{
public:
	class FString                                 InName;                                            // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          InVal;                                             // 0x0010(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(NiagaraSystemWidget_GSSetNiagaraValBool) == 0x000008, "Wrong alignment on NiagaraSystemWidget_GSSetNiagaraValBool");
static_assert(sizeof(NiagaraSystemWidget_GSSetNiagaraValBool) == 0x000018, "Wrong size on NiagaraSystemWidget_GSSetNiagaraValBool");
static_assert(offsetof(NiagaraSystemWidget_GSSetNiagaraValBool, InName) == 0x000000, "Member 'NiagaraSystemWidget_GSSetNiagaraValBool::InName' has a wrong offset!");
static_assert(offsetof(NiagaraSystemWidget_GSSetNiagaraValBool, InVal) == 0x000010, "Member 'NiagaraSystemWidget_GSSetNiagaraValBool::InVal' has a wrong offset!");

// Function NiagaraUIRenderer.NiagaraSystemWidget.GSSetNiagaraValFloat
// 0x0018 (0x0018 - 0x0000)
struct NiagaraSystemWidget_GSSetNiagaraValFloat final
{
public:
	class FString                                 InName;                                            // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InVal;                                             // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(NiagaraSystemWidget_GSSetNiagaraValFloat) == 0x000008, "Wrong alignment on NiagaraSystemWidget_GSSetNiagaraValFloat");
static_assert(sizeof(NiagaraSystemWidget_GSSetNiagaraValFloat) == 0x000018, "Wrong size on NiagaraSystemWidget_GSSetNiagaraValFloat");
static_assert(offsetof(NiagaraSystemWidget_GSSetNiagaraValFloat, InName) == 0x000000, "Member 'NiagaraSystemWidget_GSSetNiagaraValFloat::InName' has a wrong offset!");
static_assert(offsetof(NiagaraSystemWidget_GSSetNiagaraValFloat, InVal) == 0x000010, "Member 'NiagaraSystemWidget_GSSetNiagaraValFloat::InVal' has a wrong offset!");

// Function NiagaraUIRenderer.NiagaraSystemWidget.GSSetNiagaraValInt
// 0x0018 (0x0018 - 0x0000)
struct NiagaraSystemWidget_GSSetNiagaraValInt final
{
public:
	class FString                                 InName;                                            // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         InVal;                                             // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(NiagaraSystemWidget_GSSetNiagaraValInt) == 0x000008, "Wrong alignment on NiagaraSystemWidget_GSSetNiagaraValInt");
static_assert(sizeof(NiagaraSystemWidget_GSSetNiagaraValInt) == 0x000018, "Wrong size on NiagaraSystemWidget_GSSetNiagaraValInt");
static_assert(offsetof(NiagaraSystemWidget_GSSetNiagaraValInt, InName) == 0x000000, "Member 'NiagaraSystemWidget_GSSetNiagaraValInt::InName' has a wrong offset!");
static_assert(offsetof(NiagaraSystemWidget_GSSetNiagaraValInt, InVal) == 0x000010, "Member 'NiagaraSystemWidget_GSSetNiagaraValInt::InVal' has a wrong offset!");

// Function NiagaraUIRenderer.NiagaraSystemWidget.GSSetNiagaraValLinearColor
// 0x0020 (0x0020 - 0x0000)
struct NiagaraSystemWidget_GSSetNiagaraValLinearColor final
{
public:
	class FString                                 InName;                                            // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           InVal;                                             // 0x0010(0x0010)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(NiagaraSystemWidget_GSSetNiagaraValLinearColor) == 0x000008, "Wrong alignment on NiagaraSystemWidget_GSSetNiagaraValLinearColor");
static_assert(sizeof(NiagaraSystemWidget_GSSetNiagaraValLinearColor) == 0x000020, "Wrong size on NiagaraSystemWidget_GSSetNiagaraValLinearColor");
static_assert(offsetof(NiagaraSystemWidget_GSSetNiagaraValLinearColor, InName) == 0x000000, "Member 'NiagaraSystemWidget_GSSetNiagaraValLinearColor::InName' has a wrong offset!");
static_assert(offsetof(NiagaraSystemWidget_GSSetNiagaraValLinearColor, InVal) == 0x000010, "Member 'NiagaraSystemWidget_GSSetNiagaraValLinearColor::InVal' has a wrong offset!");

// Function NiagaraUIRenderer.NiagaraSystemWidget.GSSetNiagaraValVector
// 0x0028 (0x0028 - 0x0000)
struct NiagaraSystemWidget_GSSetNiagaraValVector final
{
public:
	class FString                                 InName;                                            // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                InVal;                                             // 0x0010(0x0018)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(NiagaraSystemWidget_GSSetNiagaraValVector) == 0x000008, "Wrong alignment on NiagaraSystemWidget_GSSetNiagaraValVector");
static_assert(sizeof(NiagaraSystemWidget_GSSetNiagaraValVector) == 0x000028, "Wrong size on NiagaraSystemWidget_GSSetNiagaraValVector");
static_assert(offsetof(NiagaraSystemWidget_GSSetNiagaraValVector, InName) == 0x000000, "Member 'NiagaraSystemWidget_GSSetNiagaraValVector::InName' has a wrong offset!");
static_assert(offsetof(NiagaraSystemWidget_GSSetNiagaraValVector, InVal) == 0x000010, "Member 'NiagaraSystemWidget_GSSetNiagaraValVector::InVal' has a wrong offset!");

// Function NiagaraUIRenderer.NiagaraSystemWidget.GSSetNiagaraValVector2
// 0x0020 (0x0020 - 0x0000)
struct NiagaraSystemWidget_GSSetNiagaraValVector2 final
{
public:
	class FString                                 InName;                                            // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              InVal;                                             // 0x0010(0x0010)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(NiagaraSystemWidget_GSSetNiagaraValVector2) == 0x000008, "Wrong alignment on NiagaraSystemWidget_GSSetNiagaraValVector2");
static_assert(sizeof(NiagaraSystemWidget_GSSetNiagaraValVector2) == 0x000020, "Wrong size on NiagaraSystemWidget_GSSetNiagaraValVector2");
static_assert(offsetof(NiagaraSystemWidget_GSSetNiagaraValVector2, InName) == 0x000000, "Member 'NiagaraSystemWidget_GSSetNiagaraValVector2::InName' has a wrong offset!");
static_assert(offsetof(NiagaraSystemWidget_GSSetNiagaraValVector2, InVal) == 0x000010, "Member 'NiagaraSystemWidget_GSSetNiagaraValVector2::InVal' has a wrong offset!");

// Function NiagaraUIRenderer.NiagaraSystemWidget.GSSetNiagaraValVector4
// 0x0030 (0x0030 - 0x0000)
struct NiagaraSystemWidget_GSSetNiagaraValVector4 final
{
public:
	class FString                                 InName;                                            // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                               InVal;                                             // 0x0010(0x0020)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(NiagaraSystemWidget_GSSetNiagaraValVector4) == 0x000010, "Wrong alignment on NiagaraSystemWidget_GSSetNiagaraValVector4");
static_assert(sizeof(NiagaraSystemWidget_GSSetNiagaraValVector4) == 0x000030, "Wrong size on NiagaraSystemWidget_GSSetNiagaraValVector4");
static_assert(offsetof(NiagaraSystemWidget_GSSetNiagaraValVector4, InName) == 0x000000, "Member 'NiagaraSystemWidget_GSSetNiagaraValVector4::InName' has a wrong offset!");
static_assert(offsetof(NiagaraSystemWidget_GSSetNiagaraValVector4, InVal) == 0x000010, "Member 'NiagaraSystemWidget_GSSetNiagaraValVector4::InVal' has a wrong offset!");

// Function NiagaraUIRenderer.NiagaraSystemWidget.GSStopFX
// 0x0001 (0x0001 - 0x0000)
struct NiagaraSystemWidget_GSStopFX final
{
public:
	bool                                          IsReset;                                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(NiagaraSystemWidget_GSStopFX) == 0x000001, "Wrong alignment on NiagaraSystemWidget_GSStopFX");
static_assert(sizeof(NiagaraSystemWidget_GSStopFX) == 0x000001, "Wrong size on NiagaraSystemWidget_GSStopFX");
static_assert(offsetof(NiagaraSystemWidget_GSStopFX, IsReset) == 0x000000, "Member 'NiagaraSystemWidget_GSStopFX::IsReset' has a wrong offset!");

// Function NiagaraUIRenderer.NiagaraSystemWidget.SetGSColorA
// 0x0010 (0x0010 - 0x0000)
struct NiagaraSystemWidget_SetGSColorA final
{
public:
	struct FLinearColor                           InColor;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(NiagaraSystemWidget_SetGSColorA) == 0x000004, "Wrong alignment on NiagaraSystemWidget_SetGSColorA");
static_assert(sizeof(NiagaraSystemWidget_SetGSColorA) == 0x000010, "Wrong size on NiagaraSystemWidget_SetGSColorA");
static_assert(offsetof(NiagaraSystemWidget_SetGSColorA, InColor) == 0x000000, "Member 'NiagaraSystemWidget_SetGSColorA::InColor' has a wrong offset!");

// Function NiagaraUIRenderer.NiagaraSystemWidget.SetGSColorB
// 0x0010 (0x0010 - 0x0000)
struct NiagaraSystemWidget_SetGSColorB final
{
public:
	struct FLinearColor                           InColor;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(NiagaraSystemWidget_SetGSColorB) == 0x000004, "Wrong alignment on NiagaraSystemWidget_SetGSColorB");
static_assert(sizeof(NiagaraSystemWidget_SetGSColorB) == 0x000010, "Wrong size on NiagaraSystemWidget_SetGSColorB");
static_assert(offsetof(NiagaraSystemWidget_SetGSColorB, InColor) == 0x000000, "Member 'NiagaraSystemWidget_SetGSColorB::InColor' has a wrong offset!");

// Function NiagaraUIRenderer.NiagaraSystemWidget.SetGSVec4A
// 0x0020 (0x0020 - 0x0000)
struct NiagaraSystemWidget_SetGSVec4A final
{
public:
	struct FVector4                               InVec4;                                            // 0x0000(0x0020)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(NiagaraSystemWidget_SetGSVec4A) == 0x000010, "Wrong alignment on NiagaraSystemWidget_SetGSVec4A");
static_assert(sizeof(NiagaraSystemWidget_SetGSVec4A) == 0x000020, "Wrong size on NiagaraSystemWidget_SetGSVec4A");
static_assert(offsetof(NiagaraSystemWidget_SetGSVec4A, InVec4) == 0x000000, "Member 'NiagaraSystemWidget_SetGSVec4A::InVec4' has a wrong offset!");

// Function NiagaraUIRenderer.NiagaraSystemWidget.SetGSVec4B
// 0x0020 (0x0020 - 0x0000)
struct NiagaraSystemWidget_SetGSVec4B final
{
public:
	struct FVector4                               InVec4;                                            // 0x0000(0x0020)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(NiagaraSystemWidget_SetGSVec4B) == 0x000010, "Wrong alignment on NiagaraSystemWidget_SetGSVec4B");
static_assert(sizeof(NiagaraSystemWidget_SetGSVec4B) == 0x000020, "Wrong size on NiagaraSystemWidget_SetGSVec4B");
static_assert(offsetof(NiagaraSystemWidget_SetGSVec4B, InVec4) == 0x000000, "Member 'NiagaraSystemWidget_SetGSVec4B::InVec4' has a wrong offset!");

// Function NiagaraUIRenderer.NiagaraSystemWidget.UpdateNiagaraSystemReference
// 0x0008 (0x0008 - 0x0000)
struct NiagaraSystemWidget_UpdateNiagaraSystemReference final
{
public:
	class UNiagaraSystem*                         NewNiagaraSystem;                                  // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(NiagaraSystemWidget_UpdateNiagaraSystemReference) == 0x000008, "Wrong alignment on NiagaraSystemWidget_UpdateNiagaraSystemReference");
static_assert(sizeof(NiagaraSystemWidget_UpdateNiagaraSystemReference) == 0x000008, "Wrong size on NiagaraSystemWidget_UpdateNiagaraSystemReference");
static_assert(offsetof(NiagaraSystemWidget_UpdateNiagaraSystemReference, NewNiagaraSystem) == 0x000000, "Member 'NiagaraSystemWidget_UpdateNiagaraSystemReference::NewNiagaraSystem' has a wrong offset!");

// Function NiagaraUIRenderer.NiagaraSystemWidget.UpdateTickWhenPaused
// 0x0001 (0x0001 - 0x0000)
struct NiagaraSystemWidget_UpdateTickWhenPaused final
{
public:
	bool                                          NewTickWhenPaused;                                 // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(NiagaraSystemWidget_UpdateTickWhenPaused) == 0x000001, "Wrong alignment on NiagaraSystemWidget_UpdateTickWhenPaused");
static_assert(sizeof(NiagaraSystemWidget_UpdateTickWhenPaused) == 0x000001, "Wrong size on NiagaraSystemWidget_UpdateTickWhenPaused");
static_assert(offsetof(NiagaraSystemWidget_UpdateTickWhenPaused, NewTickWhenPaused) == 0x000000, "Member 'NiagaraSystemWidget_UpdateTickWhenPaused::NewTickWhenPaused' has a wrong offset!");

}

