#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SkeletalMerging

#include "Basic.hpp"

#include "SkeletalMerging_classes.hpp"
#include "SkeletalMerging_parameters.hpp"


namespace SDK
{

// Function SkeletalMerging.SkeletalMergingLibrary.MergeMeshes
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSkeletalMeshMergeParams         Params_0                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class USkeletalMesh*                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USkeletalMesh* USkeletalMergingLibrary::MergeMeshes(const struct FSkeletalMeshMergeParams& Params_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SkeletalMergingLibrary", "MergeMeshes");

	Params::SkeletalMergingLibrary_MergeMeshes Parms{};

	Parms.Params_0 = std::move(Params_0);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function SkeletalMerging.SkeletalMergingLibrary.MergeSkeletons
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSkeletonMergeParams             Params_0                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class USkeleton*                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USkeleton* USkeletalMergingLibrary::MergeSkeletons(const struct FSkeletonMergeParams& Params_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SkeletalMergingLibrary", "MergeSkeletons");

	Params::SkeletalMergingLibrary_MergeSkeletons Parms{};

	Parms.Params_0 = std::move(Params_0);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

