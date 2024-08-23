#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ConsoleVariableManager

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// Class ConsoleVariableManager.GSE_ConsoleVariableManagerFuncLib
// 0x0000 (0x0028 - 0x0028)
class UGSE_ConsoleVariableManagerFuncLib final : public UBlueprintFunctionLibrary
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GSE_ConsoleVariableManagerFuncLib">();
	}
	static class UGSE_ConsoleVariableManagerFuncLib* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGSE_ConsoleVariableManagerFuncLib>();
	}
};
static_assert(alignof(UGSE_ConsoleVariableManagerFuncLib) == 0x000008, "Wrong alignment on UGSE_ConsoleVariableManagerFuncLib");
static_assert(sizeof(UGSE_ConsoleVariableManagerFuncLib) == 0x000028, "Wrong size on UGSE_ConsoleVariableManagerFuncLib");

}

