#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PrefabricatorRuntime

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "PrefabricatorRuntime_structs.hpp"
#include "DeveloperSettings_classes.hpp"


namespace SDK
{

// Class PrefabricatorRuntime.PrefabActor
// 0x0020 (0x0298 - 0x0278)
class APrefabActor : public AActor
{
public:
	class UPrefabComponent*                       PrefabComponent;                                   // 0x0278(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                  LastUpdateID;                                      // 0x0280(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Seed;                                              // 0x0290(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_294[0x4];                                      // 0x0294(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	class UPrefabricatorAsset* GetPrefabAsset();
	bool IsPrefabOutdated();
	void LoadPrefab();
	void RandomizeSeed(const struct FRandomStream& InRandom, bool bRecursive);
	void SavePrefab();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PrefabActor">();
	}
	static class APrefabActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<APrefabActor>();
	}
};
static_assert(alignof(APrefabActor) == 0x000008, "Wrong alignment on APrefabActor");
static_assert(sizeof(APrefabActor) == 0x000298, "Wrong size on APrefabActor");
static_assert(offsetof(APrefabActor, PrefabComponent) == 0x000278, "Member 'APrefabActor::PrefabComponent' has a wrong offset!");
static_assert(offsetof(APrefabActor, LastUpdateID) == 0x000280, "Member 'APrefabActor::LastUpdateID' has a wrong offset!");
static_assert(offsetof(APrefabActor, Seed) == 0x000290, "Member 'APrefabActor::Seed' has a wrong offset!");

// Class PrefabricatorRuntime.ReplicablePrefabActor
// 0x0000 (0x0298 - 0x0298)
class AReplicablePrefabActor final : public APrefabActor
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ReplicablePrefabActor">();
	}
	static class AReplicablePrefabActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<AReplicablePrefabActor>();
	}
};
static_assert(alignof(AReplicablePrefabActor) == 0x000008, "Wrong alignment on AReplicablePrefabActor");
static_assert(sizeof(AReplicablePrefabActor) == 0x000298, "Wrong size on AReplicablePrefabActor");

// Class PrefabricatorRuntime.PrefabComponent
// 0x0030 (0x02E0 - 0x02B0)
class UPrefabComponent final : public USceneComponent
{
public:
	TSoftObjectPtr<class UPrefabricatorAssetInterface> PrefabAssetInterface;                              // 0x02B0(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2D8[0x8];                                      // 0x02D8(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PrefabComponent">();
	}
	static class UPrefabComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPrefabComponent>();
	}
};
static_assert(alignof(UPrefabComponent) == 0x000010, "Wrong alignment on UPrefabComponent");
static_assert(sizeof(UPrefabComponent) == 0x0002E0, "Wrong size on UPrefabComponent");
static_assert(offsetof(UPrefabComponent, PrefabAssetInterface) == 0x0002B0, "Member 'UPrefabComponent::PrefabAssetInterface' has a wrong offset!");

// Class PrefabricatorRuntime.PrefabDebugActor
// 0x0018 (0x0290 - 0x0278)
class APrefabDebugActor final : public AActor
{
public:
	class AActor*                                 Actor;                                             // 0x0278(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                 ActorData;                                         // 0x0280(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PrefabDebugActor">();
	}
	static class APrefabDebugActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<APrefabDebugActor>();
	}
};
static_assert(alignof(APrefabDebugActor) == 0x000008, "Wrong alignment on APrefabDebugActor");
static_assert(sizeof(APrefabDebugActor) == 0x000290, "Wrong size on APrefabDebugActor");
static_assert(offsetof(APrefabDebugActor, Actor) == 0x000278, "Member 'APrefabDebugActor::Actor' has a wrong offset!");
static_assert(offsetof(APrefabDebugActor, ActorData) == 0x000280, "Member 'APrefabDebugActor::ActorData' has a wrong offset!");

// Class PrefabricatorRuntime.PrefabRandomizer
// 0x0050 (0x02C8 - 0x0278)
class APrefabRandomizer final : public AActor
{
public:
	bool                                          bRandomizeOnBeginPlay;                             // 0x0278(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_279[0x3];                                      // 0x0279(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SeedOffset;                                        // 0x027C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxBuildTimePerFrame;                              // 0x0280(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_284[0x4];                                      // 0x0284(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnRandomizationComplete;                           // 0x0288(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                          bFastSyncBuild;                                    // 0x0298(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_299[0x7];                                      // 0x0299(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class APrefabActor*>                   ActorsToRandomize;                                 // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_2B0[0x18];                                     // 0x02B0(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void Randomize(int32 InSeed);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PrefabRandomizer">();
	}
	static class APrefabRandomizer* GetDefaultObj()
	{
		return GetDefaultObjImpl<APrefabRandomizer>();
	}
};
static_assert(alignof(APrefabRandomizer) == 0x000008, "Wrong alignment on APrefabRandomizer");
static_assert(sizeof(APrefabRandomizer) == 0x0002C8, "Wrong size on APrefabRandomizer");
static_assert(offsetof(APrefabRandomizer, bRandomizeOnBeginPlay) == 0x000278, "Member 'APrefabRandomizer::bRandomizeOnBeginPlay' has a wrong offset!");
static_assert(offsetof(APrefabRandomizer, SeedOffset) == 0x00027C, "Member 'APrefabRandomizer::SeedOffset' has a wrong offset!");
static_assert(offsetof(APrefabRandomizer, MaxBuildTimePerFrame) == 0x000280, "Member 'APrefabRandomizer::MaxBuildTimePerFrame' has a wrong offset!");
static_assert(offsetof(APrefabRandomizer, OnRandomizationComplete) == 0x000288, "Member 'APrefabRandomizer::OnRandomizationComplete' has a wrong offset!");
static_assert(offsetof(APrefabRandomizer, bFastSyncBuild) == 0x000298, "Member 'APrefabRandomizer::bFastSyncBuild' has a wrong offset!");
static_assert(offsetof(APrefabRandomizer, ActorsToRandomize) == 0x0002A0, "Member 'APrefabRandomizer::ActorsToRandomize' has a wrong offset!");

// Class PrefabricatorRuntime.PrefabricatorProperty
// 0x00E8 (0x0110 - 0x0028)
class UPrefabricatorProperty final : public UObject
{
public:
	class FString                                 PropertyName;                                      // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ExportedValue;                                     // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPrefabricatorPropertyAssetMapping> AssetSoftReferenceMappings;                        // 0x0048(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                          bIsCrossReferencedActor;                           // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_59[0x3];                                       // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuid                                  CrossReferencePrefabActorId;                       // 0x005C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FString, struct FGuid>             StructCrossReferencePrefabActorIds;                // 0x0070(0x0050)(NativeAccessSpecifierPublic)
	TMap<int32, struct FGuid>                     ArrayCrossReferencePrefabActorIds;                 // 0x00C0(0x0050)(NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PrefabricatorProperty">();
	}
	static class UPrefabricatorProperty* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPrefabricatorProperty>();
	}
};
static_assert(alignof(UPrefabricatorProperty) == 0x000008, "Wrong alignment on UPrefabricatorProperty");
static_assert(sizeof(UPrefabricatorProperty) == 0x000110, "Wrong size on UPrefabricatorProperty");
static_assert(offsetof(UPrefabricatorProperty, PropertyName) == 0x000028, "Member 'UPrefabricatorProperty::PropertyName' has a wrong offset!");
static_assert(offsetof(UPrefabricatorProperty, ExportedValue) == 0x000038, "Member 'UPrefabricatorProperty::ExportedValue' has a wrong offset!");
static_assert(offsetof(UPrefabricatorProperty, AssetSoftReferenceMappings) == 0x000048, "Member 'UPrefabricatorProperty::AssetSoftReferenceMappings' has a wrong offset!");
static_assert(offsetof(UPrefabricatorProperty, bIsCrossReferencedActor) == 0x000058, "Member 'UPrefabricatorProperty::bIsCrossReferencedActor' has a wrong offset!");
static_assert(offsetof(UPrefabricatorProperty, CrossReferencePrefabActorId) == 0x00005C, "Member 'UPrefabricatorProperty::CrossReferencePrefabActorId' has a wrong offset!");
static_assert(offsetof(UPrefabricatorProperty, StructCrossReferencePrefabActorIds) == 0x000070, "Member 'UPrefabricatorProperty::StructCrossReferencePrefabActorIds' has a wrong offset!");
static_assert(offsetof(UPrefabricatorProperty, ArrayCrossReferencePrefabActorIds) == 0x0000C0, "Member 'UPrefabricatorProperty::ArrayCrossReferencePrefabActorIds' has a wrong offset!");

// Class PrefabricatorRuntime.PrefabricatorEventListener
// 0x0000 (0x0028 - 0x0028)
class UPrefabricatorEventListener final : public UObject
{
public:
	void PostSpawn(class APrefabActor* Prefab);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PrefabricatorEventListener">();
	}
	static class UPrefabricatorEventListener* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPrefabricatorEventListener>();
	}
};
static_assert(alignof(UPrefabricatorEventListener) == 0x000008, "Wrong alignment on UPrefabricatorEventListener");
static_assert(sizeof(UPrefabricatorEventListener) == 0x000028, "Wrong size on UPrefabricatorEventListener");

// Class PrefabricatorRuntime.PrefabricatorAssetInterface
// 0x0010 (0x0038 - 0x0028)
class UPrefabricatorAssetInterface : public UObject
{
public:
	TSubclassOf<class UPrefabricatorEventListener> EventListener;                                     // 0x0028(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bReplicates;                                       // 0x0030(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PrefabricatorAssetInterface">();
	}
	static class UPrefabricatorAssetInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPrefabricatorAssetInterface>();
	}
};
static_assert(alignof(UPrefabricatorAssetInterface) == 0x000008, "Wrong alignment on UPrefabricatorAssetInterface");
static_assert(sizeof(UPrefabricatorAssetInterface) == 0x000038, "Wrong size on UPrefabricatorAssetInterface");
static_assert(offsetof(UPrefabricatorAssetInterface, EventListener) == 0x000028, "Member 'UPrefabricatorAssetInterface::EventListener' has a wrong offset!");
static_assert(offsetof(UPrefabricatorAssetInterface, bReplicates) == 0x000030, "Member 'UPrefabricatorAssetInterface::bReplicates' has a wrong offset!");

// Class PrefabricatorRuntime.PrefabricatorAsset
// 0x0038 (0x0070 - 0x0038)
class UPrefabricatorAsset final : public UPrefabricatorAssetInterface
{
public:
	TArray<struct FPrefabricatorActorData>        ActorData;                                         // 0x0038(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	EComponentMobility                            PrefabMobility;                                    // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuid                                  LastUpdateID;                                      // 0x004C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UThumbnailInfo*                         ThumbnailInfo;                                     // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        Version;                                           // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PrefabricatorAsset">();
	}
	static class UPrefabricatorAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPrefabricatorAsset>();
	}
};
static_assert(alignof(UPrefabricatorAsset) == 0x000008, "Wrong alignment on UPrefabricatorAsset");
static_assert(sizeof(UPrefabricatorAsset) == 0x000070, "Wrong size on UPrefabricatorAsset");
static_assert(offsetof(UPrefabricatorAsset, ActorData) == 0x000038, "Member 'UPrefabricatorAsset::ActorData' has a wrong offset!");
static_assert(offsetof(UPrefabricatorAsset, PrefabMobility) == 0x000048, "Member 'UPrefabricatorAsset::PrefabMobility' has a wrong offset!");
static_assert(offsetof(UPrefabricatorAsset, LastUpdateID) == 0x00004C, "Member 'UPrefabricatorAsset::LastUpdateID' has a wrong offset!");
static_assert(offsetof(UPrefabricatorAsset, ThumbnailInfo) == 0x000060, "Member 'UPrefabricatorAsset::ThumbnailInfo' has a wrong offset!");
static_assert(offsetof(UPrefabricatorAsset, Version) == 0x000068, "Member 'UPrefabricatorAsset::Version' has a wrong offset!");

// Class PrefabricatorRuntime.PrefabricatorAssetCollection
// 0x0018 (0x0050 - 0x0038)
class UPrefabricatorAssetCollection final : public UPrefabricatorAssetInterface
{
public:
	TArray<struct FPrefabricatorAssetCollectionItem> Prefabs;                                           // 0x0038(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint32                                        Version;                                           // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PrefabricatorAssetCollection">();
	}
	static class UPrefabricatorAssetCollection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPrefabricatorAssetCollection>();
	}
};
static_assert(alignof(UPrefabricatorAssetCollection) == 0x000008, "Wrong alignment on UPrefabricatorAssetCollection");
static_assert(sizeof(UPrefabricatorAssetCollection) == 0x000050, "Wrong size on UPrefabricatorAssetCollection");
static_assert(offsetof(UPrefabricatorAssetCollection, Prefabs) == 0x000038, "Member 'UPrefabricatorAssetCollection::Prefabs' has a wrong offset!");
static_assert(offsetof(UPrefabricatorAssetCollection, Version) == 0x000048, "Member 'UPrefabricatorAssetCollection::Version' has a wrong offset!");

// Class PrefabricatorRuntime.PrefabricatorAssetUserData
// 0x0018 (0x0040 - 0x0028)
class UPrefabricatorAssetUserData final : public UAssetUserData
{
public:
	TWeakObjectPtr<class APrefabActor>            PrefabActor;                                       // 0x0028(0x0008)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                  ItemId;                                            // 0x0030(0x0010)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PrefabricatorAssetUserData">();
	}
	static class UPrefabricatorAssetUserData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPrefabricatorAssetUserData>();
	}
};
static_assert(alignof(UPrefabricatorAssetUserData) == 0x000008, "Wrong alignment on UPrefabricatorAssetUserData");
static_assert(sizeof(UPrefabricatorAssetUserData) == 0x000040, "Wrong size on UPrefabricatorAssetUserData");
static_assert(offsetof(UPrefabricatorAssetUserData, PrefabActor) == 0x000028, "Member 'UPrefabricatorAssetUserData::PrefabActor' has a wrong offset!");
static_assert(offsetof(UPrefabricatorAssetUserData, ItemId) == 0x000030, "Member 'UPrefabricatorAssetUserData::ItemId' has a wrong offset!");

// Class PrefabricatorRuntime.PrefabricatorBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UPrefabricatorBlueprintLibrary final : public UBlueprintFunctionLibrary
{
public:
	static class APrefabActor* FindTopMostPrefabActor(class AActor* InActor);
	static void GetAllAttachedActors(class AActor* Prefab, TArray<class AActor*>* AttachedActors);
	static void RandomizePrefab(class APrefabActor* PrefabActor, const struct FRandomStream& InRandom);
	static void SetPrefabAsset(class APrefabActor* PrefabActor, class UPrefabricatorAssetInterface* Prefab, bool bReloadPrefab);
	static class APrefabActor* SpawnPrefab(const class UObject* WorldContextObject, class UPrefabricatorAssetInterface* Prefab, const struct FTransform& Transform, int32 Seed);
	static void UnlinkPrefab(class APrefabActor* PrefabActor);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PrefabricatorBlueprintLibrary">();
	}
	static class UPrefabricatorBlueprintLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPrefabricatorBlueprintLibrary>();
	}
};
static_assert(alignof(UPrefabricatorBlueprintLibrary) == 0x000008, "Wrong alignment on UPrefabricatorBlueprintLibrary");
static_assert(sizeof(UPrefabricatorBlueprintLibrary) == 0x000028, "Wrong size on UPrefabricatorBlueprintLibrary");

// Class PrefabricatorRuntime.PrefabricatorSettings
// 0x0068 (0x00A0 - 0x0038)
class UPrefabricatorSettings final : public UDeveloperSettings
{
public:
	EPrefabricatorPivotPosition                   PivotPosition;                                     // 0x0038(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAllowDynamicUpdate;                               // 0x0039(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3A[0x6];                                       // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TSet<class UClass*>                           IgnoreBoundingBoxForObjects;                       // 0x0040(0x0050)(Edit, Config, NativeAccessSpecifierPublic)
	float                                         DefaultThumbnailPitch;                             // 0x0090(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DefaultThumbnailYaw;                               // 0x0094(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DefaultThumbnailZoom;                              // 0x0098(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9C[0x4];                                       // 0x009C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PrefabricatorSettings">();
	}
	static class UPrefabricatorSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPrefabricatorSettings>();
	}
};
static_assert(alignof(UPrefabricatorSettings) == 0x000008, "Wrong alignment on UPrefabricatorSettings");
static_assert(sizeof(UPrefabricatorSettings) == 0x0000A0, "Wrong size on UPrefabricatorSettings");
static_assert(offsetof(UPrefabricatorSettings, PivotPosition) == 0x000038, "Member 'UPrefabricatorSettings::PivotPosition' has a wrong offset!");
static_assert(offsetof(UPrefabricatorSettings, bAllowDynamicUpdate) == 0x000039, "Member 'UPrefabricatorSettings::bAllowDynamicUpdate' has a wrong offset!");
static_assert(offsetof(UPrefabricatorSettings, IgnoreBoundingBoxForObjects) == 0x000040, "Member 'UPrefabricatorSettings::IgnoreBoundingBoxForObjects' has a wrong offset!");
static_assert(offsetof(UPrefabricatorSettings, DefaultThumbnailPitch) == 0x000090, "Member 'UPrefabricatorSettings::DefaultThumbnailPitch' has a wrong offset!");
static_assert(offsetof(UPrefabricatorSettings, DefaultThumbnailYaw) == 0x000094, "Member 'UPrefabricatorSettings::DefaultThumbnailYaw' has a wrong offset!");
static_assert(offsetof(UPrefabricatorSettings, DefaultThumbnailZoom) == 0x000098, "Member 'UPrefabricatorSettings::DefaultThumbnailZoom' has a wrong offset!");

// Class PrefabricatorRuntime.PrefabSeedLinkerComponent
// 0x0000 (0x02B0 - 0x02B0)
class UPrefabSeedLinkerComponent final : public USceneComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PrefabSeedLinkerComponent">();
	}
	static class UPrefabSeedLinkerComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPrefabSeedLinkerComponent>();
	}
};
static_assert(alignof(UPrefabSeedLinkerComponent) == 0x000010, "Wrong alignment on UPrefabSeedLinkerComponent");
static_assert(sizeof(UPrefabSeedLinkerComponent) == 0x0002B0, "Wrong size on UPrefabSeedLinkerComponent");

// Class PrefabricatorRuntime.PrefabSeedLinker
// 0x0018 (0x0290 - 0x0278)
class APrefabSeedLinker final : public AActor
{
public:
	TArray<TWeakObjectPtr<class APrefabActor>>    LinkedActors;                                      // 0x0278(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class UPrefabSeedLinkerComponent*             SeedLinkerComponent;                               // 0x0288(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PrefabSeedLinker">();
	}
	static class APrefabSeedLinker* GetDefaultObj()
	{
		return GetDefaultObjImpl<APrefabSeedLinker>();
	}
};
static_assert(alignof(APrefabSeedLinker) == 0x000008, "Wrong alignment on APrefabSeedLinker");
static_assert(sizeof(APrefabSeedLinker) == 0x000290, "Wrong size on APrefabSeedLinker");
static_assert(offsetof(APrefabSeedLinker, LinkedActors) == 0x000278, "Member 'APrefabSeedLinker::LinkedActors' has a wrong offset!");
static_assert(offsetof(APrefabSeedLinker, SeedLinkerComponent) == 0x000288, "Member 'APrefabSeedLinker::SeedLinkerComponent' has a wrong offset!");

}

