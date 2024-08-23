#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AudioExtensions

#include "Basic.hpp"

#include "AudioExtensions_classes.hpp"
#include "AudioExtensions_parameters.hpp"


namespace SDK
{

// Function AudioExtensions.AudioParameterControllerInterface.ResetParameters
// (Native, Public, BlueprintCallable)

void IAudioParameterControllerInterface::ResetParameters()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioParameterControllerInterface", "ResetParameters");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function AudioExtensions.AudioParameterControllerInterface.SetBoolArrayParameter
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                             InName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<bool>                            InValue                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void IAudioParameterControllerInterface::SetBoolArrayParameter(class FName InName, const TArray<bool>& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioParameterControllerInterface", "SetBoolArrayParameter");

	Params::AudioParameterControllerInterface_SetBoolArrayParameter Parms{};

	Parms.InName = InName;
	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AudioExtensions.AudioParameterControllerInterface.SetBoolParameter
// (Native, Public, BlueprintCallable)
// Parameters:
// class FName                             InName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    InBool                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IAudioParameterControllerInterface::SetBoolParameter(class FName InName, bool InBool)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioParameterControllerInterface", "SetBoolParameter");

	Params::AudioParameterControllerInterface_SetBoolParameter Parms{};

	Parms.InName = InName;
	Parms.InBool = InBool;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AudioExtensions.AudioParameterControllerInterface.SetFloatArrayParameter
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                             InName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                           InValue                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void IAudioParameterControllerInterface::SetFloatArrayParameter(class FName InName, const TArray<float>& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioParameterControllerInterface", "SetFloatArrayParameter");

	Params::AudioParameterControllerInterface_SetFloatArrayParameter Parms{};

	Parms.InName = InName;
	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AudioExtensions.AudioParameterControllerInterface.SetFloatParameter
// (Native, Public, BlueprintCallable)
// Parameters:
// class FName                             InName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   InFloat                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IAudioParameterControllerInterface::SetFloatParameter(class FName InName, float InFloat)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioParameterControllerInterface", "SetFloatParameter");

	Params::AudioParameterControllerInterface_SetFloatParameter Parms{};

	Parms.InName = InName;
	Parms.InFloat = InFloat;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AudioExtensions.AudioParameterControllerInterface.SetIntArrayParameter
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                             InName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int32>                           InValue                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void IAudioParameterControllerInterface::SetIntArrayParameter(class FName InName, const TArray<int32>& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioParameterControllerInterface", "SetIntArrayParameter");

	Params::AudioParameterControllerInterface_SetIntArrayParameter Parms{};

	Parms.InName = InName;
	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AudioExtensions.AudioParameterControllerInterface.SetIntParameter
// (Native, Public, BlueprintCallable)
// Parameters:
// class FName                             InName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   InInt                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IAudioParameterControllerInterface::SetIntParameter(class FName InName, int32 InInt)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioParameterControllerInterface", "SetIntParameter");

	Params::AudioParameterControllerInterface_SetIntParameter Parms{};

	Parms.InName = InName;
	Parms.InInt = InInt;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AudioExtensions.AudioParameterControllerInterface.SetObjectArrayParameter
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                             InName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UObject*>                  InValue                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void IAudioParameterControllerInterface::SetObjectArrayParameter(class FName InName, const TArray<class UObject*>& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioParameterControllerInterface", "SetObjectArrayParameter");

	Params::AudioParameterControllerInterface_SetObjectArrayParameter Parms{};

	Parms.InName = InName;
	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AudioExtensions.AudioParameterControllerInterface.SetObjectParameter
// (Native, Public, BlueprintCallable)
// Parameters:
// class FName                             InName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                          InValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IAudioParameterControllerInterface::SetObjectParameter(class FName InName, class UObject* InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioParameterControllerInterface", "SetObjectParameter");

	Params::AudioParameterControllerInterface_SetObjectParameter Parms{};

	Parms.InName = InName;
	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AudioExtensions.AudioParameterControllerInterface.SetParameters_Blueprint
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FAudioParameter>          InParameters                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void IAudioParameterControllerInterface::SetParameters_Blueprint(const TArray<struct FAudioParameter>& InParameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioParameterControllerInterface", "SetParameters_Blueprint");

	Params::AudioParameterControllerInterface_SetParameters_Blueprint Parms{};

	Parms.InParameters = std::move(InParameters);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AudioExtensions.AudioParameterControllerInterface.SetStringArrayParameter
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                             InName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>                   InValue                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void IAudioParameterControllerInterface::SetStringArrayParameter(class FName InName, const TArray<class FString>& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioParameterControllerInterface", "SetStringArrayParameter");

	Params::AudioParameterControllerInterface_SetStringArrayParameter Parms{};

	Parms.InName = InName;
	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AudioExtensions.AudioParameterControllerInterface.SetStringParameter
// (Native, Public, BlueprintCallable)
// Parameters:
// class FName                             InName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           InValue                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IAudioParameterControllerInterface::SetStringParameter(class FName InName, const class FString& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioParameterControllerInterface", "SetStringParameter");

	Params::AudioParameterControllerInterface_SetStringParameter Parms{};

	Parms.InName = InName;
	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AudioExtensions.AudioParameterControllerInterface.SetTriggerParameter
// (Native, Public, BlueprintCallable)
// Parameters:
// class FName                             InName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IAudioParameterControllerInterface::SetTriggerParameter(class FName InName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioParameterControllerInterface", "SetTriggerParameter");

	Params::AudioParameterControllerInterface_SetTriggerParameter Parms{};

	Parms.InName = InName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

