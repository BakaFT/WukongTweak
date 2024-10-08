#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GSReplaySystem

#include "Basic.hpp"

#include "GSReplaySystem_classes.hpp"
#include "GSReplaySystem_parameters.hpp"


namespace SDK
{

// Function GSReplaySystem.GSReplayCSharpFuncLib.GSNetworkRemapPath
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                          Outer_0                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           Name_0                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGSReplayCSharpFuncLib::GSNetworkRemapPath(const class UObject* Outer_0, class FString* Name_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GSReplayCSharpFuncLib", "GSNetworkRemapPath");

	Params::GSReplayCSharpFuncLib_GSNetworkRemapPath Parms{};

	Parms.Outer_0 = Outer_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Name_0 != nullptr)
		*Name_0 = std::move(Parms.Name_0);
}


// Function GSReplaySystem.GSReplayCSharpFuncLib.GSNetworkRemapPathCS
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Outer_0                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           OriginName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           Name_0                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGSReplayCSharpFuncLib::GSNetworkRemapPathCS(const class UObject* Outer_0, const class FString& OriginName, class FString* Name_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GSReplayCSharpFuncLib", "GSNetworkRemapPathCS");

	Params::GSReplayCSharpFuncLib_GSNetworkRemapPathCS Parms{};

	Parms.Outer_0 = Outer_0;
	Parms.OriginName = std::move(OriginName);

	UObject::ProcessEvent(Func, &Parms);

	if (Name_0 != nullptr)
		*Name_0 = std::move(Parms.Name_0);
}


// Function GSReplaySystem.GSReplayCSharpFuncLib.OnPostDemoPlay
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UGSReplayCSharpFuncLib::OnPostDemoPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GSReplayCSharpFuncLib", "OnPostDemoPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GSReplaySystem.GSReplayCSharpFuncLib.OnPreScrub
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWorld*                           World                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGSReplayCSharpFuncLib::OnPreScrub(class UWorld* World)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GSReplayCSharpFuncLib", "OnPreScrub");

	Params::GSReplayCSharpFuncLib_OnPreScrub Parms{};

	Parms.World = World;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GSReplaySystem.GSReplayCSharpFuncLib.OnProcessGameSpecificDemoHeader
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FString>                   GameSpecificData                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                           Error                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGSReplayCSharpFuncLib::OnProcessGameSpecificDemoHeader(const TArray<class FString>& GameSpecificData, class FString* Error)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GSReplayCSharpFuncLib", "OnProcessGameSpecificDemoHeader");

	Params::GSReplayCSharpFuncLib_OnProcessGameSpecificDemoHeader Parms{};

	Parms.GameSpecificData = std::move(GameSpecificData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Error != nullptr)
		*Error = std::move(Parms.Error);
}


// Function GSReplaySystem.GSReplayCSharpFuncLib.OnReplayScrubComplete
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWorld*                           World                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGSReplayCSharpFuncLib::OnReplayScrubComplete(class UWorld* World)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GSReplayCSharpFuncLib", "OnReplayScrubComplete");

	Params::GSReplayCSharpFuncLib_OnReplayScrubComplete Parms{};

	Parms.World = World;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GSReplaySystem.GSReplayCSharpFuncLib.OnReplaySeverConnectionInit
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWorld*                           World                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNetConnection*                   SeverConnection                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGSReplayCSharpFuncLib::OnReplaySeverConnectionInit(class UWorld* World, class UNetConnection* SeverConnection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GSReplayCSharpFuncLib", "OnReplaySeverConnectionInit");

	Params::GSReplayCSharpFuncLib_OnReplaySeverConnectionInit Parms{};

	Parms.World = World;
	Parms.SeverConnection = SeverConnection;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GSReplaySystem.GSReplayCSharpFuncLib.OnReplayStarted
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWorld*                           World                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGSReplayCSharpFuncLib::OnReplayStarted(class UWorld* World)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GSReplayCSharpFuncLib", "OnReplayStarted");

	Params::GSReplayCSharpFuncLib_OnReplayStarted Parms{};

	Parms.World = World;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GSReplaySystem.GSReplayCSharpFuncLib.OnWriteGameSpecificDemoHeader
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FString>                   GameSpecificData                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UGSReplayCSharpFuncLib::OnWriteGameSpecificDemoHeader(TArray<class FString>* GameSpecificData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GSReplayCSharpFuncLib", "OnWriteGameSpecificDemoHeader");

	Params::GSReplayCSharpFuncLib_OnWriteGameSpecificDemoHeader Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (GameSpecificData != nullptr)
		*GameSpecificData = std::move(Parms.GameSpecificData);
}


// Function GSReplaySystem.GSReplayCSharpFuncLib.PostProcessGameSpecificDemoHeaderCS
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UGSReplayCSharpFuncLib::PostProcessGameSpecificDemoHeaderCS()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GSReplayCSharpFuncLib", "PostProcessGameSpecificDemoHeaderCS");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GSReplaySystem.GSReplayCSharpFuncLib.PreProcessGameSpecificDemoHeaderCS
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UGSReplayCSharpFuncLib::PreProcessGameSpecificDemoHeaderCS()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GSReplayCSharpFuncLib", "PreProcessGameSpecificDemoHeaderCS");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GSReplaySystem.GSReplayCSharpFuncLib.ProcessGameSpecificDemoHeaderCS
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           GameSpecificData                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           Error                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGSReplayCSharpFuncLib::ProcessGameSpecificDemoHeaderCS(const class FString& GameSpecificData, class FString* Error)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GSReplayCSharpFuncLib", "ProcessGameSpecificDemoHeaderCS");

	Params::GSReplayCSharpFuncLib_ProcessGameSpecificDemoHeaderCS Parms{};

	Parms.GameSpecificData = std::move(GameSpecificData);

	UObject::ProcessEvent(Func, &Parms);

	if (Error != nullptr)
		*Error = std::move(Parms.Error);
}


// Function GSReplaySystem.GSReplayCSharpFuncLib.SetDemoCurrentTime
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InTimeToSet                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGSReplayCSharpFuncLib::SetDemoCurrentTime(float InTimeToSet)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GSReplayCSharpFuncLib", "SetDemoCurrentTime");

	Params::GSReplayCSharpFuncLib_SetDemoCurrentTime Parms{};

	Parms.InTimeToSet = InTimeToSet;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GSReplaySystem.GSReplayCSharpFuncLib.SetViewTargetPlayer
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PlayerId                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGSReplayCSharpFuncLib::SetViewTargetPlayer(int32 PlayerId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GSReplayCSharpFuncLib", "SetViewTargetPlayer");

	Params::GSReplayCSharpFuncLib_SetViewTargetPlayer Parms{};

	Parms.PlayerId = PlayerId;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function GSReplaySystem.GSReplayCSharpFuncLib.WriteGameSpecificDemoHeaderCS
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>                   GameSpecificData                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UGSReplayCSharpFuncLib::WriteGameSpecificDemoHeaderCS(TArray<class FString>* GameSpecificData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GSReplayCSharpFuncLib", "WriteGameSpecificDemoHeaderCS");

	Params::GSReplayCSharpFuncLib_WriteGameSpecificDemoHeaderCS Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (GameSpecificData != nullptr)
		*GameSpecificData = std::move(Parms.GameSpecificData);
}


// Function GSReplaySystem.GSReplayFuncLib.GetDemoCurrentTime
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                          WorldContext                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UGSReplayFuncLib::GetDemoCurrentTime(const class UObject* WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GSReplayFuncLib", "GetDemoCurrentTime");

	Params::GSReplayFuncLib_GetDemoCurrentTime Parms{};

	Parms.WorldContext = WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GSReplaySystem.GSReplayFuncLib.GetDemoPlayTimeDilation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                          WorldContext                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UGSReplayFuncLib::GetDemoPlayTimeDilation(const class UObject* WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GSReplayFuncLib", "GetDemoPlayTimeDilation");

	Params::GSReplayFuncLib_GetDemoPlayTimeDilation Parms{};

	Parms.WorldContext = WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GSReplaySystem.GSReplayFuncLib.GetDemoTotalTime
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                          WorldContext                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UGSReplayFuncLib::GetDemoTotalTime(const class UObject* WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GSReplayFuncLib", "GetDemoTotalTime");

	Params::GSReplayFuncLib_GetDemoTotalTime Parms{};

	Parms.WorldContext = WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GSReplaySystem.GSReplayFuncLib.GetLastCheckpointTime
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                          WorldContext                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                                  ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

double UGSReplayFuncLib::GetLastCheckpointTime(const class UObject* WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GSReplayFuncLib", "GetLastCheckpointTime");

	Params::GSReplayFuncLib_GetLastCheckpointTime Parms{};

	Parms.WorldContext = WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GSReplaySystem.GSReplayFuncLib.IsLoadingCheckpoint
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                          WorldContext                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGSReplayFuncLib::IsLoadingCheckpoint(const class UObject* WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GSReplayFuncLib", "IsLoadingCheckpoint");

	Params::GSReplayFuncLib_IsLoadingCheckpoint Parms{};

	Parms.WorldContext = WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GSReplaySystem.GSReplayFuncLib.IsPlayingReplay
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                          WorldContext                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGSReplayFuncLib::IsPlayingReplay(const class UObject* WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GSReplayFuncLib", "IsPlayingReplay");

	Params::GSReplayFuncLib_IsPlayingReplay Parms{};

	Parms.WorldContext = WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GSReplaySystem.GSReplayFuncLib.IsRecordingReplay
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                          WorldContext                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGSReplayFuncLib::IsRecordingReplay(const class UObject* WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GSReplayFuncLib", "IsRecordingReplay");

	Params::GSReplayFuncLib_IsRecordingReplay Parms{};

	Parms.WorldContext = WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GSReplaySystem.GSReplayFuncLib.IsReplayPause
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                          WorldContext                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGSReplayFuncLib::IsReplayPause(const class UObject* WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GSReplayFuncLib", "IsReplayPause");

	Params::GSReplayFuncLib_IsReplayPause Parms{};

	Parms.WorldContext = WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GSReplaySystem.GSReplayFuncLib.PauseReplay
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                          WorldContext                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bPause                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGSReplayFuncLib::PauseReplay(const class UObject* WorldContext, bool bPause)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GSReplayFuncLib", "PauseReplay");

	Params::GSReplayFuncLib_PauseReplay Parms{};

	Parms.WorldContext = WorldContext;
	Parms.bPause = bPause;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function GSReplaySystem.GSReplayFuncLib.PlayReplayFromLocalFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                          WorldContext                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           Name_0                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>                   InOptions                                              (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void UGSReplayFuncLib::PlayReplayFromLocalFile(const class UObject* WorldContext, const class FString& Name_0, const TArray<class FString>& InOptions)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GSReplayFuncLib", "PlayReplayFromLocalFile");

	Params::GSReplayFuncLib_PlayReplayFromLocalFile Parms{};

	Parms.WorldContext = WorldContext;
	Parms.Name_0 = std::move(Name_0);
	Parms.InOptions = std::move(InOptions);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function GSReplaySystem.GSReplayFuncLib.RecordReplayToLocalFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                          WorldContext                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           Name_0                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           FriendlyName                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>                   InOptions                                              (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void UGSReplayFuncLib::RecordReplayToLocalFile(const class UObject* WorldContext, const class FString& Name_0, const class FString& FriendlyName, const TArray<class FString>& InOptions)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GSReplayFuncLib", "RecordReplayToLocalFile");

	Params::GSReplayFuncLib_RecordReplayToLocalFile Parms{};

	Parms.WorldContext = WorldContext;
	Parms.Name_0 = std::move(Name_0);
	Parms.FriendlyName = std::move(FriendlyName);
	Parms.InOptions = std::move(InOptions);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function GSReplaySystem.GSReplayFuncLib.RegisterCSharpFuncLibObj
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                          WorldContext                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGSReplayCSharpFuncLib*           CSharpFuncLibObj                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGSReplayFuncLib::RegisterCSharpFuncLibObj(const class UObject* WorldContext, class UGSReplayCSharpFuncLib* CSharpFuncLibObj)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GSReplayFuncLib", "RegisterCSharpFuncLibObj");

	Params::GSReplayFuncLib_RegisterCSharpFuncLibObj Parms{};

	Parms.WorldContext = WorldContext;
	Parms.CSharpFuncLibObj = CSharpFuncLibObj;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function GSReplaySystem.GSReplayFuncLib.RegisterNetworkRemapPath
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                          WorldContext                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGSReplayFuncLib::RegisterNetworkRemapPath(const class UObject* WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GSReplayFuncLib", "RegisterNetworkRemapPath");

	Params::GSReplayFuncLib_RegisterNetworkRemapPath Parms{};

	Parms.WorldContext = WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GSReplaySystem.GSReplayFuncLib.RequestCheckpoint
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                          WorldContext                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGSReplayFuncLib::RequestCheckpoint(const class UObject* WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GSReplayFuncLib", "RequestCheckpoint");

	Params::GSReplayFuncLib_RequestCheckpoint Parms{};

	Parms.WorldContext = WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function GSReplaySystem.GSReplayFuncLib.SetActorPrioritizationEnabled
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                          WorldContext                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bInPrioritizeActors                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGSReplayFuncLib::SetActorPrioritizationEnabled(const class UObject* WorldContext, const bool bInPrioritizeActors)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GSReplayFuncLib", "SetActorPrioritizationEnabled");

	Params::GSReplayFuncLib_SetActorPrioritizationEnabled Parms{};

	Parms.WorldContext = WorldContext;
	Parms.bInPrioritizeActors = bInPrioritizeActors;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function GSReplaySystem.GSReplayFuncLib.SetDemoCurrentTime
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                          WorldContext                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   CurrentTime                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGSReplayFuncLib::SetDemoCurrentTime(const class UObject* WorldContext, const float CurrentTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GSReplayFuncLib", "SetDemoCurrentTime");

	Params::GSReplayFuncLib_SetDemoCurrentTime Parms{};

	Parms.WorldContext = WorldContext;
	Parms.CurrentTime = CurrentTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function GSReplaySystem.GSReplayFuncLib.SetDemoPlayTimeDilation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                          WorldContext                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   InDemoPlayTimeDilation                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGSReplayFuncLib::SetDemoPlayTimeDilation(const class UObject* WorldContext, const float InDemoPlayTimeDilation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GSReplayFuncLib", "SetDemoPlayTimeDilation");

	Params::GSReplayFuncLib_SetDemoPlayTimeDilation Parms{};

	Parms.WorldContext = WorldContext;
	Parms.InDemoPlayTimeDilation = InDemoPlayTimeDilation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function GSReplaySystem.GSReplayFuncLib.SkipTime
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                          WorldContext                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   InTimeToSkip                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGSReplayFuncLib::SkipTime(const class UObject* WorldContext, const float InTimeToSkip)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GSReplayFuncLib", "SkipTime");

	Params::GSReplayFuncLib_SkipTime Parms{};

	Parms.WorldContext = WorldContext;
	Parms.InTimeToSkip = InTimeToSkip;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function GSReplaySystem.GSReplayFuncLib.StopReplay
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                          WorldContext                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGSReplayFuncLib::StopReplay(const class UObject* WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GSReplayFuncLib", "StopReplay");

	Params::GSReplayFuncLib_StopReplay Parms{};

	Parms.WorldContext = WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function GSReplaySystem.GSReplayFuncLib.UnregisterCSharpFuncLibObj
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                          WorldContext                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGSReplayFuncLib::UnregisterCSharpFuncLibObj(const class UObject* WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GSReplayFuncLib", "UnregisterCSharpFuncLibObj");

	Params::GSReplayFuncLib_UnregisterCSharpFuncLibObj Parms{};

	Parms.WorldContext = WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function GSReplaySystem.GSReplayFuncLib.UnRegisterNetworkRemapPath
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                          WorldContext                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGSReplayFuncLib::UnRegisterNetworkRemapPath(const class UObject* WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GSReplayFuncLib", "UnRegisterNetworkRemapPath");

	Params::GSReplayFuncLib_UnRegisterNetworkRemapPath Parms{};

	Parms.WorldContext = WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

