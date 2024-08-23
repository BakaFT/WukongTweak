#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GSFileHelper

#include "Basic.hpp"

#include "GSFileHelper_classes.hpp"
#include "GSFileHelper_parameters.hpp"


namespace SDK
{

// Function GSFileHelper.GSFileHelper.CreateDirectory
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                           Directory                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGSFileHelper::CreateDirectory(const class FString& Directory)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GSFileHelper", "CreateDirectory");

	Params::GSFileHelper_CreateDirectory Parms{};

	Parms.Directory = std::move(Directory);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GSFileHelper.GSFileHelper.DeleteDirectory
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                           Directory                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGSFileHelper::DeleteDirectory(const class FString& Directory)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GSFileHelper", "DeleteDirectory");

	Params::GSFileHelper_DeleteDirectory Parms{};

	Parms.Directory = std::move(Directory);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GSFileHelper.GSFileHelper.DeleteFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                           Filename                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGSFileHelper::DeleteFile(const class FString& Filename)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GSFileHelper", "DeleteFile");

	Params::GSFileHelper_DeleteFile Parms{};

	Parms.Filename = std::move(Filename);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GSFileHelper.GSFileHelper.DirectoryExists
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                           Directory                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGSFileHelper::DirectoryExists(const class FString& Directory)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GSFileHelper", "DirectoryExists");

	Params::GSFileHelper_DirectoryExists Parms{};

	Parms.Directory = std::move(Directory);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GSFileHelper.GSFileHelper.FileExists
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                           Filename                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGSFileHelper::FileExists(const class FString& Filename)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GSFileHelper", "FileExists");

	Params::GSFileHelper_FileExists Parms{};

	Parms.Filename = std::move(Filename);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GSFileHelper.GSFileHelper.FileSize
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                           Filename                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int64 UGSFileHelper::FileSize(const class FString& Filename)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GSFileHelper", "FileSize");

	Params::GSFileHelper_FileSize Parms{};

	Parms.Filename = std::move(Filename);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GSFileHelper.GSFileHelper.FindFiles
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                           Directory                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>                   FoundFiles                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// class FString                           FileExtension                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGSFileHelper::FindFiles(const class FString& Directory, TArray<class FString>* FoundFiles, const class FString& FileExtension)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GSFileHelper", "FindFiles");

	Params::GSFileHelper_FindFiles Parms{};

	Parms.Directory = std::move(Directory);
	Parms.FileExtension = std::move(FileExtension);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (FoundFiles != nullptr)
		*FoundFiles = std::move(Parms.FoundFiles);
}


// Function GSFileHelper.GSFileHelper.FindFilesRecursively
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                           Directory                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>                   FoundFiles                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// class FString                           FileExtension                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGSFileHelper::FindFilesRecursively(const class FString& Directory, TArray<class FString>* FoundFiles, const class FString& FileExtension)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GSFileHelper", "FindFilesRecursively");

	Params::GSFileHelper_FindFilesRecursively Parms{};

	Parms.Directory = std::move(Directory);
	Parms.FileExtension = std::move(FileExtension);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (FoundFiles != nullptr)
		*FoundFiles = std::move(Parms.FoundFiles);
}


// Function GSFileHelper.GSFileHelper.GetTimeStampTicks
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                           Filename                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int64 UGSFileHelper::GetTimeStampTicks(const class FString& Filename)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GSFileHelper", "GetTimeStampTicks");

	Params::GSFileHelper_GetTimeStampTicks Parms{};

	Parms.Filename = std::move(Filename);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GSFileHelper.GSFileHelper.ReadFile
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                           Filename                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                           BytesToRead                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                                    IsStandardPath                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGSFileHelper::ReadFile(const class FString& Filename, TArray<uint8>* BytesToRead, bool IsStandardPath)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GSFileHelper", "ReadFile");

	Params::GSFileHelper_ReadFile Parms{};

	Parms.Filename = std::move(Filename);
	Parms.IsStandardPath = IsStandardPath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (BytesToRead != nullptr)
		*BytesToRead = std::move(Parms.BytesToRead);

	return Parms.ReturnValue;
}


// Function GSFileHelper.GSFileHelper.WriteFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                           Filename                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                           BytesToWrite                                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                                    bAppend                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    IsStandardPath                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGSFileHelper::WriteFile(const class FString& Filename, const TArray<uint8>& BytesToWrite, bool bAppend, bool IsStandardPath)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GSFileHelper", "WriteFile");

	Params::GSFileHelper_WriteFile Parms{};

	Parms.Filename = std::move(Filename);
	Parms.BytesToWrite = std::move(BytesToWrite);
	Parms.bAppend = bAppend;
	Parms.IsStandardPath = IsStandardPath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

