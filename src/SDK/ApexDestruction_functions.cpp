#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ApexDestruction

#include "Basic.hpp"

#include "ApexDestruction_classes.hpp"
#include "ApexDestruction_parameters.hpp"


namespace SDK
{

// Function ApexDestruction.DestructibleComponent.ApplyDamage
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// float                                   DamageAmount                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector3f                        HitLocation                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector3f                        ImpulseDir                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   ImpulseStrength                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDestructibleComponent::ApplyDamage(float DamageAmount, const struct FVector3f& HitLocation, const struct FVector3f& ImpulseDir, float ImpulseStrength)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DestructibleComponent", "ApplyDamage");

	Params::DestructibleComponent_ApplyDamage Parms{};

	Parms.DamageAmount = DamageAmount;
	Parms.HitLocation = std::move(HitLocation);
	Parms.ImpulseDir = std::move(ImpulseDir);
	Parms.ImpulseStrength = ImpulseStrength;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ApexDestruction.DestructibleComponent.ApplyRadiusDamage
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// float                                   BaseDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector3f                        HurtOrigin                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   DamageRadius                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   ImpulseStrength                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bFullDamage                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDestructibleComponent::ApplyRadiusDamage(float BaseDamage, const struct FVector3f& HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DestructibleComponent", "ApplyRadiusDamage");

	Params::DestructibleComponent_ApplyRadiusDamage Parms{};

	Parms.BaseDamage = BaseDamage;
	Parms.HurtOrigin = std::move(HurtOrigin);
	Parms.DamageRadius = DamageRadius;
	Parms.ImpulseStrength = ImpulseStrength;
	Parms.bFullDamage = bFullDamage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ApexDestruction.DestructibleComponent.GetDestructibleMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDestructibleMesh*                ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDestructibleMesh* UDestructibleComponent::GetDestructibleMesh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DestructibleComponent", "GetDestructibleMesh");

	Params::DestructibleComponent_GetDestructibleMesh Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function ApexDestruction.DestructibleComponent.SetDestructibleMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDestructibleMesh*                NewMesh                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDestructibleComponent::SetDestructibleMesh(class UDestructibleMesh* NewMesh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DestructibleComponent", "SetDestructibleMesh");

	Params::DestructibleComponent_SetDestructibleMesh Parms{};

	Parms.NewMesh = NewMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

