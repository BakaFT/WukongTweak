#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TemplateSequence

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "MovieScene_structs.hpp"


namespace SDK::Params
{

// Function TemplateSequence.SequenceCameraShakeTestUtil.GetCameraCachePOV
// 0x08A0 (0x08A0 - 0x0000)
struct SequenceCameraShakeTestUtil_GetCameraCachePOV final
{
public:
	class APlayerController*                      PlayerController;                                  // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_8[0x8];                                        // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMinimalViewInfo                       ReturnValue;                                       // 0x0010(0x0890)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(SequenceCameraShakeTestUtil_GetCameraCachePOV) == 0x000010, "Wrong alignment on SequenceCameraShakeTestUtil_GetCameraCachePOV");
static_assert(sizeof(SequenceCameraShakeTestUtil_GetCameraCachePOV) == 0x0008A0, "Wrong size on SequenceCameraShakeTestUtil_GetCameraCachePOV");
static_assert(offsetof(SequenceCameraShakeTestUtil_GetCameraCachePOV, PlayerController) == 0x000000, "Member 'SequenceCameraShakeTestUtil_GetCameraCachePOV::PlayerController' has a wrong offset!");
static_assert(offsetof(SequenceCameraShakeTestUtil_GetCameraCachePOV, ReturnValue) == 0x000010, "Member 'SequenceCameraShakeTestUtil_GetCameraCachePOV::ReturnValue' has a wrong offset!");

// Function TemplateSequence.SequenceCameraShakeTestUtil.GetLastFrameCameraCachePOV
// 0x08A0 (0x08A0 - 0x0000)
struct SequenceCameraShakeTestUtil_GetLastFrameCameraCachePOV final
{
public:
	class APlayerController*                      PlayerController;                                  // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_8[0x8];                                        // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMinimalViewInfo                       ReturnValue;                                       // 0x0010(0x0890)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(SequenceCameraShakeTestUtil_GetLastFrameCameraCachePOV) == 0x000010, "Wrong alignment on SequenceCameraShakeTestUtil_GetLastFrameCameraCachePOV");
static_assert(sizeof(SequenceCameraShakeTestUtil_GetLastFrameCameraCachePOV) == 0x0008A0, "Wrong size on SequenceCameraShakeTestUtil_GetLastFrameCameraCachePOV");
static_assert(offsetof(SequenceCameraShakeTestUtil_GetLastFrameCameraCachePOV, PlayerController) == 0x000000, "Member 'SequenceCameraShakeTestUtil_GetLastFrameCameraCachePOV::PlayerController' has a wrong offset!");
static_assert(offsetof(SequenceCameraShakeTestUtil_GetLastFrameCameraCachePOV, ReturnValue) == 0x000010, "Member 'SequenceCameraShakeTestUtil_GetLastFrameCameraCachePOV::ReturnValue' has a wrong offset!");

// Function TemplateSequence.SequenceCameraShakeTestUtil.GetPostProcessBlendCache
// 0x07D0 (0x07D0 - 0x0000)
struct SequenceCameraShakeTestUtil_GetPostProcessBlendCache final
{
public:
	class APlayerController*                      PlayerController;                                  // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         PPIndex;                                           // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPostProcessSettings                   OutPPSettings;                                     // 0x0010(0x07B0)(Parm, OutParm, NativeAccessSpecifierPublic)
	float                                         OutPPBlendWeight;                                  // 0x07C0(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x07C4(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_7C5[0xB];                                      // 0x07C5(0x000B)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(SequenceCameraShakeTestUtil_GetPostProcessBlendCache) == 0x000010, "Wrong alignment on SequenceCameraShakeTestUtil_GetPostProcessBlendCache");
static_assert(sizeof(SequenceCameraShakeTestUtil_GetPostProcessBlendCache) == 0x0007D0, "Wrong size on SequenceCameraShakeTestUtil_GetPostProcessBlendCache");
static_assert(offsetof(SequenceCameraShakeTestUtil_GetPostProcessBlendCache, PlayerController) == 0x000000, "Member 'SequenceCameraShakeTestUtil_GetPostProcessBlendCache::PlayerController' has a wrong offset!");
static_assert(offsetof(SequenceCameraShakeTestUtil_GetPostProcessBlendCache, PPIndex) == 0x000008, "Member 'SequenceCameraShakeTestUtil_GetPostProcessBlendCache::PPIndex' has a wrong offset!");
static_assert(offsetof(SequenceCameraShakeTestUtil_GetPostProcessBlendCache, OutPPSettings) == 0x000010, "Member 'SequenceCameraShakeTestUtil_GetPostProcessBlendCache::OutPPSettings' has a wrong offset!");
static_assert(offsetof(SequenceCameraShakeTestUtil_GetPostProcessBlendCache, OutPPBlendWeight) == 0x0007C0, "Member 'SequenceCameraShakeTestUtil_GetPostProcessBlendCache::OutPPBlendWeight' has a wrong offset!");
static_assert(offsetof(SequenceCameraShakeTestUtil_GetPostProcessBlendCache, ReturnValue) == 0x0007C4, "Member 'SequenceCameraShakeTestUtil_GetPostProcessBlendCache::ReturnValue' has a wrong offset!");

// Function TemplateSequence.TemplateSequenceActor.SetBinding
// 0x0010 (0x0010 - 0x0000)
struct TemplateSequenceActor_SetBinding final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOverridesDefault;                                 // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(TemplateSequenceActor_SetBinding) == 0x000008, "Wrong alignment on TemplateSequenceActor_SetBinding");
static_assert(sizeof(TemplateSequenceActor_SetBinding) == 0x000010, "Wrong size on TemplateSequenceActor_SetBinding");
static_assert(offsetof(TemplateSequenceActor_SetBinding, Actor) == 0x000000, "Member 'TemplateSequenceActor_SetBinding::Actor' has a wrong offset!");
static_assert(offsetof(TemplateSequenceActor_SetBinding, bOverridesDefault) == 0x000008, "Member 'TemplateSequenceActor_SetBinding::bOverridesDefault' has a wrong offset!");

// Function TemplateSequence.TemplateSequenceActor.SetSequence
// 0x0008 (0x0008 - 0x0000)
struct TemplateSequenceActor_SetSequence final
{
public:
	class UTemplateSequence*                      InSequence;                                        // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TemplateSequenceActor_SetSequence) == 0x000008, "Wrong alignment on TemplateSequenceActor_SetSequence");
static_assert(sizeof(TemplateSequenceActor_SetSequence) == 0x000008, "Wrong size on TemplateSequenceActor_SetSequence");
static_assert(offsetof(TemplateSequenceActor_SetSequence, InSequence) == 0x000000, "Member 'TemplateSequenceActor_SetSequence::InSequence' has a wrong offset!");

// Function TemplateSequence.TemplateSequenceActor.GetSequence
// 0x0008 (0x0008 - 0x0000)
struct TemplateSequenceActor_GetSequence final
{
public:
	class UTemplateSequence*                      ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TemplateSequenceActor_GetSequence) == 0x000008, "Wrong alignment on TemplateSequenceActor_GetSequence");
static_assert(sizeof(TemplateSequenceActor_GetSequence) == 0x000008, "Wrong size on TemplateSequenceActor_GetSequence");
static_assert(offsetof(TemplateSequenceActor_GetSequence, ReturnValue) == 0x000000, "Member 'TemplateSequenceActor_GetSequence::ReturnValue' has a wrong offset!");

// Function TemplateSequence.TemplateSequenceActor.GetSequencePlayer
// 0x0008 (0x0008 - 0x0000)
struct TemplateSequenceActor_GetSequencePlayer final
{
public:
	class UTemplateSequencePlayer*                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TemplateSequenceActor_GetSequencePlayer) == 0x000008, "Wrong alignment on TemplateSequenceActor_GetSequencePlayer");
static_assert(sizeof(TemplateSequenceActor_GetSequencePlayer) == 0x000008, "Wrong size on TemplateSequenceActor_GetSequencePlayer");
static_assert(offsetof(TemplateSequenceActor_GetSequencePlayer, ReturnValue) == 0x000000, "Member 'TemplateSequenceActor_GetSequencePlayer::ReturnValue' has a wrong offset!");

// Function TemplateSequence.TemplateSequenceActor.LoadSequence
// 0x0008 (0x0008 - 0x0000)
struct TemplateSequenceActor_LoadSequence final
{
public:
	class UTemplateSequence*                      ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TemplateSequenceActor_LoadSequence) == 0x000008, "Wrong alignment on TemplateSequenceActor_LoadSequence");
static_assert(sizeof(TemplateSequenceActor_LoadSequence) == 0x000008, "Wrong size on TemplateSequenceActor_LoadSequence");
static_assert(offsetof(TemplateSequenceActor_LoadSequence, ReturnValue) == 0x000000, "Member 'TemplateSequenceActor_LoadSequence::ReturnValue' has a wrong offset!");

// Function TemplateSequence.TemplateSequencePlayer.CreateTemplateSequencePlayer
// 0x0038 (0x0038 - 0x0000)
struct TemplateSequencePlayer_CreateTemplateSequencePlayer final
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTemplateSequence*                      TemplateSequence;                                  // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneSequencePlaybackSettings    Settings;                                          // 0x0010(0x0014)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ATemplateSequenceActor*                 OutActor;                                          // 0x0028(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTemplateSequencePlayer*                ReturnValue;                                       // 0x0030(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TemplateSequencePlayer_CreateTemplateSequencePlayer) == 0x000008, "Wrong alignment on TemplateSequencePlayer_CreateTemplateSequencePlayer");
static_assert(sizeof(TemplateSequencePlayer_CreateTemplateSequencePlayer) == 0x000038, "Wrong size on TemplateSequencePlayer_CreateTemplateSequencePlayer");
static_assert(offsetof(TemplateSequencePlayer_CreateTemplateSequencePlayer, WorldContextObject) == 0x000000, "Member 'TemplateSequencePlayer_CreateTemplateSequencePlayer::WorldContextObject' has a wrong offset!");
static_assert(offsetof(TemplateSequencePlayer_CreateTemplateSequencePlayer, TemplateSequence) == 0x000008, "Member 'TemplateSequencePlayer_CreateTemplateSequencePlayer::TemplateSequence' has a wrong offset!");
static_assert(offsetof(TemplateSequencePlayer_CreateTemplateSequencePlayer, Settings) == 0x000010, "Member 'TemplateSequencePlayer_CreateTemplateSequencePlayer::Settings' has a wrong offset!");
static_assert(offsetof(TemplateSequencePlayer_CreateTemplateSequencePlayer, OutActor) == 0x000028, "Member 'TemplateSequencePlayer_CreateTemplateSequencePlayer::OutActor' has a wrong offset!");
static_assert(offsetof(TemplateSequencePlayer_CreateTemplateSequencePlayer, ReturnValue) == 0x000030, "Member 'TemplateSequencePlayer_CreateTemplateSequencePlayer::ReturnValue' has a wrong offset!");

}

