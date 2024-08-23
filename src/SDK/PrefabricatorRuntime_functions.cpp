#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PrefabricatorRuntime

#include "Basic.hpp"

#include "PrefabricatorRuntime_classes.hpp"
#include "PrefabricatorRuntime_parameters.hpp"


namespace SDK
{

// Function PrefabricatorRuntime.PrefabActor.GetPrefabAsset
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UPrefabricatorAsset*              ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPrefabricatorAsset* APrefabActor::GetPrefabAsset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PrefabActor", "GetPrefabAsset");

	Params::PrefabActor_GetPrefabAsset Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PrefabricatorRuntime.PrefabActor.IsPrefabOutdated
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool APrefabActor::IsPrefabOutdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PrefabActor", "IsPrefabOutdated");

	Params::PrefabActor_IsPrefabOutdated Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PrefabricatorRuntime.PrefabActor.LoadPrefab
// (Final, Native, Public, BlueprintCallable)

void APrefabActor::LoadPrefab()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PrefabActor", "LoadPrefab");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function PrefabricatorRuntime.PrefabActor.RandomizeSeed
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRandomStream                    InRandom                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                                    bRecursive                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void APrefabActor::RandomizeSeed(const struct FRandomStream& InRandom, bool bRecursive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PrefabActor", "RandomizeSeed");

	Params::PrefabActor_RandomizeSeed Parms{};

	Parms.InRandom = std::move(InRandom);
	Parms.bRecursive = bRecursive;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function PrefabricatorRuntime.PrefabActor.SavePrefab
// (Final, Native, Public, BlueprintCallable)

void APrefabActor::SavePrefab()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PrefabActor", "SavePrefab");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function PrefabricatorRuntime.PrefabRandomizer.Randomize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                                   InSeed                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void APrefabRandomizer::Randomize(int32 InSeed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PrefabRandomizer", "Randomize");

	Params::PrefabRandomizer_Randomize Parms{};

	Parms.InSeed = InSeed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function PrefabricatorRuntime.PrefabricatorEventListener.PostSpawn
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class APrefabActor*                     Prefab                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPrefabricatorEventListener::PostSpawn(class APrefabActor* Prefab)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PrefabricatorEventListener", "PostSpawn");

	Params::PrefabricatorEventListener_PostSpawn Parms{};

	Parms.Prefab = Prefab;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.FindTopMostPrefabActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                           InActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APrefabActor*                     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class APrefabActor* UPrefabricatorBlueprintLibrary::FindTopMostPrefabActor(class AActor* InActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("PrefabricatorBlueprintLibrary", "FindTopMostPrefabActor");

	Params::PrefabricatorBlueprintLibrary_FindTopMostPrefabActor Parms{};

	Parms.InActor = InActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.GetAllAttachedActors
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AActor*                           Prefab                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>                   AttachedActors                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UPrefabricatorBlueprintLibrary::GetAllAttachedActors(class AActor* Prefab, TArray<class AActor*>* AttachedActors)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("PrefabricatorBlueprintLibrary", "GetAllAttachedActors");

	Params::PrefabricatorBlueprintLibrary_GetAllAttachedActors Parms{};

	Parms.Prefab = Prefab;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (AttachedActors != nullptr)
		*AttachedActors = std::move(Parms.AttachedActors);
}


// Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.RandomizePrefab
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class APrefabActor*                     PrefabActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRandomStream                    InRandom                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UPrefabricatorBlueprintLibrary::RandomizePrefab(class APrefabActor* PrefabActor, const struct FRandomStream& InRandom)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("PrefabricatorBlueprintLibrary", "RandomizePrefab");

	Params::PrefabricatorBlueprintLibrary_RandomizePrefab Parms{};

	Parms.PrefabActor = PrefabActor;
	Parms.InRandom = std::move(InRandom);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.SetPrefabAsset
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APrefabActor*                     PrefabActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrefabricatorAssetInterface*     Prefab                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bReloadPrefab                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPrefabricatorBlueprintLibrary::SetPrefabAsset(class APrefabActor* PrefabActor, class UPrefabricatorAssetInterface* Prefab, bool bReloadPrefab)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("PrefabricatorBlueprintLibrary", "SetPrefabAsset");

	Params::PrefabricatorBlueprintLibrary_SetPrefabAsset Parms{};

	Parms.PrefabActor = PrefabActor;
	Parms.Prefab = Prefab;
	Parms.bReloadPrefab = bReloadPrefab;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.SpawnPrefab
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                          WorldContextObject                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrefabricatorAssetInterface*     Prefab                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                       Transform                                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// int32                                   Seed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APrefabActor*                     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class APrefabActor* UPrefabricatorBlueprintLibrary::SpawnPrefab(const class UObject* WorldContextObject, class UPrefabricatorAssetInterface* Prefab, const struct FTransform& Transform, int32 Seed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("PrefabricatorBlueprintLibrary", "SpawnPrefab");

	Params::PrefabricatorBlueprintLibrary_SpawnPrefab Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Prefab = Prefab;
	Parms.Transform = std::move(Transform);
	Parms.Seed = Seed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.UnlinkPrefab
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APrefabActor*                     PrefabActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPrefabricatorBlueprintLibrary::UnlinkPrefab(class APrefabActor* PrefabActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("PrefabricatorBlueprintLibrary", "UnlinkPrefab");

	Params::PrefabricatorBlueprintLibrary_UnlinkPrefab Parms{};

	Parms.PrefabActor = PrefabActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

