#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ConsoleVariableManager

#include "Basic.hpp"


namespace SDK
{

// Enum ConsoleVariableManager.EConsoleVariablePriority
// NumValues: 0x000A
enum class EConsoleVariablePriority : uint8
{
	None                                     = 0,
	Original                                 = 1,
	SetByCode                                = 2,
	GameSettings                             = 10,
	CLSVolume                                = 20,
	SceneVolume                              = 30,
	Vfx                                      = 40,
	UI                                       = 50,
	Default                                  = 100,
	EConsoleVariablePriority_MAX             = 101,
};

}

