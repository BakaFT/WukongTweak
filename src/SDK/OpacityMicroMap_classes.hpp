#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OpacityMicroMap

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "OpacityMicroMap_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class OpacityMicroMap.OpacityMicroMapData
// 0x0070 (0x0098 - 0x0028)
class UOpacityMicroMapData final : public UObject
{
public:
	TArray<uint8>                                 ArrayData;                                         // 0x0028(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<uint8>                                 DescArrayData;                                     // 0x0038(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FOpacityMicromapUsageCount>     DescArrayHistogram;                                // 0x0048(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<uint8>                                 IndexBuffer;                                       // 0x0058(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                          Is16BitIndexBuffer;                                // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FOpacityMicromapUsageCount>     IndexHistogram;                                    // 0x0070(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         VersionHash[0x14];                                 // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_94[0x4];                                       // 0x0094(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OpacityMicroMapData">();
	}
	static class UOpacityMicroMapData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOpacityMicroMapData>();
	}
};
static_assert(alignof(UOpacityMicroMapData) == 0x000008, "Wrong alignment on UOpacityMicroMapData");
static_assert(sizeof(UOpacityMicroMapData) == 0x000098, "Wrong size on UOpacityMicroMapData");
static_assert(offsetof(UOpacityMicroMapData, ArrayData) == 0x000028, "Member 'UOpacityMicroMapData::ArrayData' has a wrong offset!");
static_assert(offsetof(UOpacityMicroMapData, DescArrayData) == 0x000038, "Member 'UOpacityMicroMapData::DescArrayData' has a wrong offset!");
static_assert(offsetof(UOpacityMicroMapData, DescArrayHistogram) == 0x000048, "Member 'UOpacityMicroMapData::DescArrayHistogram' has a wrong offset!");
static_assert(offsetof(UOpacityMicroMapData, IndexBuffer) == 0x000058, "Member 'UOpacityMicroMapData::IndexBuffer' has a wrong offset!");
static_assert(offsetof(UOpacityMicroMapData, Is16BitIndexBuffer) == 0x000068, "Member 'UOpacityMicroMapData::Is16BitIndexBuffer' has a wrong offset!");
static_assert(offsetof(UOpacityMicroMapData, IndexHistogram) == 0x000070, "Member 'UOpacityMicroMapData::IndexHistogram' has a wrong offset!");
static_assert(offsetof(UOpacityMicroMapData, VersionHash) == 0x000080, "Member 'UOpacityMicroMapData::VersionHash' has a wrong offset!");

// Class OpacityMicroMap.OpacityMicroMapCollection
// 0x0050 (0x0078 - 0x0028)
class UOpacityMicroMapCollection final : public UObject
{
public:
	TMap<uint64, class UOpacityMicroMapData*>     Collection;                                        // 0x0028(0x0050)(UObjectWrapper, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OpacityMicroMapCollection">();
	}
	static class UOpacityMicroMapCollection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOpacityMicroMapCollection>();
	}
};
static_assert(alignof(UOpacityMicroMapCollection) == 0x000008, "Wrong alignment on UOpacityMicroMapCollection");
static_assert(sizeof(UOpacityMicroMapCollection) == 0x000078, "Wrong size on UOpacityMicroMapCollection");
static_assert(offsetof(UOpacityMicroMapCollection, Collection) == 0x000028, "Member 'UOpacityMicroMapCollection::Collection' has a wrong offset!");

// Class OpacityMicroMap.OpacityMicroMapAsset
// 0x0008 (0x0030 - 0x0028)
class UOpacityMicroMapAsset final : public UAssetUserData
{
public:
	class UOpacityMicroMapCollection*             Collection;                                        // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OpacityMicroMapAsset">();
	}
	static class UOpacityMicroMapAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOpacityMicroMapAsset>();
	}
};
static_assert(alignof(UOpacityMicroMapAsset) == 0x000008, "Wrong alignment on UOpacityMicroMapAsset");
static_assert(sizeof(UOpacityMicroMapAsset) == 0x000030, "Wrong size on UOpacityMicroMapAsset");
static_assert(offsetof(UOpacityMicroMapAsset, Collection) == 0x000028, "Member 'UOpacityMicroMapAsset::Collection' has a wrong offset!");

// Class OpacityMicroMap.OMMBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UOMMBlueprintLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void BuildAllStaticMesh(const class UObject* WorldContextObject);
	static float CalculateCurrentWorldOMMTotalDataSize(const class UObject* WorldContextObject);
	static bool IsThisDeviceSupportOMM(const class UObject* WorldContextObject);
	static void RemoveOMMUserData(class UStaticMesh* StaticMesh);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OMMBlueprintLibrary">();
	}
	static class UOMMBlueprintLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOMMBlueprintLibrary>();
	}
};
static_assert(alignof(UOMMBlueprintLibrary) == 0x000008, "Wrong alignment on UOMMBlueprintLibrary");
static_assert(sizeof(UOMMBlueprintLibrary) == 0x000028, "Wrong size on UOMMBlueprintLibrary");

}

