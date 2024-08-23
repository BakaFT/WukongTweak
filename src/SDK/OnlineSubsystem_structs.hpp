#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OnlineSubsystem

#include "Basic.hpp"


namespace SDK
{

// Enum OnlineSubsystem.EInAppPurchaseState
// NumValues: 0x0009
enum class EInAppPurchaseState : uint8
{
	Unknown                                  = 0,
	Success                                  = 1,
	Failed                                   = 2,
	Cancelled                                = 3,
	Invalid                                  = 4,
	NotAllowed                               = 5,
	Restored                                 = 6,
	AlreadyOwned                             = 7,
	EInAppPurchaseState_MAX                  = 8,
};

// Enum OnlineSubsystem.EMPMatchOutcome
// NumValues: 0x000B
enum class EMPMatchOutcome : uint8
{
	None                                     = 0,
	Quit                                     = 1,
	Won                                      = 2,
	Lost                                     = 3,
	Tied                                     = 4,
	TimeExpired                              = 5,
	First                                    = 6,
	Second                                   = 7,
	Third                                    = 8,
	Fourth                                   = 9,
	EMPMatchOutcome_MAX                      = 10,
};

// ScriptStruct OnlineSubsystem.InAppPurchaseProductInfo
// 0x00A8 (0x00A8 - 0x0000)
struct FInAppPurchaseProductInfo final
{
public:
	class FString                                 Identifier;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 TransactionIdentifier;                             // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 DisplayName;                                       // 0x0020(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 DisplayDescription;                                // 0x0030(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 DisplayPrice;                                      // 0x0040(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RawPrice;                                          // 0x0050(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CurrencyCode;                                      // 0x0058(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 CurrencySymbol;                                    // 0x0068(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 DecimalSeparator;                                  // 0x0078(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 GroupingSeparator;                                 // 0x0088(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ReceiptData;                                       // 0x0098(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FInAppPurchaseProductInfo) == 0x000008, "Wrong alignment on FInAppPurchaseProductInfo");
static_assert(sizeof(FInAppPurchaseProductInfo) == 0x0000A8, "Wrong size on FInAppPurchaseProductInfo");
static_assert(offsetof(FInAppPurchaseProductInfo, Identifier) == 0x000000, "Member 'FInAppPurchaseProductInfo::Identifier' has a wrong offset!");
static_assert(offsetof(FInAppPurchaseProductInfo, TransactionIdentifier) == 0x000010, "Member 'FInAppPurchaseProductInfo::TransactionIdentifier' has a wrong offset!");
static_assert(offsetof(FInAppPurchaseProductInfo, DisplayName) == 0x000020, "Member 'FInAppPurchaseProductInfo::DisplayName' has a wrong offset!");
static_assert(offsetof(FInAppPurchaseProductInfo, DisplayDescription) == 0x000030, "Member 'FInAppPurchaseProductInfo::DisplayDescription' has a wrong offset!");
static_assert(offsetof(FInAppPurchaseProductInfo, DisplayPrice) == 0x000040, "Member 'FInAppPurchaseProductInfo::DisplayPrice' has a wrong offset!");
static_assert(offsetof(FInAppPurchaseProductInfo, RawPrice) == 0x000050, "Member 'FInAppPurchaseProductInfo::RawPrice' has a wrong offset!");
static_assert(offsetof(FInAppPurchaseProductInfo, CurrencyCode) == 0x000058, "Member 'FInAppPurchaseProductInfo::CurrencyCode' has a wrong offset!");
static_assert(offsetof(FInAppPurchaseProductInfo, CurrencySymbol) == 0x000068, "Member 'FInAppPurchaseProductInfo::CurrencySymbol' has a wrong offset!");
static_assert(offsetof(FInAppPurchaseProductInfo, DecimalSeparator) == 0x000078, "Member 'FInAppPurchaseProductInfo::DecimalSeparator' has a wrong offset!");
static_assert(offsetof(FInAppPurchaseProductInfo, GroupingSeparator) == 0x000088, "Member 'FInAppPurchaseProductInfo::GroupingSeparator' has a wrong offset!");
static_assert(offsetof(FInAppPurchaseProductInfo, ReceiptData) == 0x000098, "Member 'FInAppPurchaseProductInfo::ReceiptData' has a wrong offset!");

// ScriptStruct OnlineSubsystem.InAppPurchaseRestoreInfo
// 0x0030 (0x0030 - 0x0000)
struct FInAppPurchaseRestoreInfo final
{
public:
	class FString                                 Identifier;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ReceiptData;                                       // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 TransactionIdentifier;                             // 0x0020(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FInAppPurchaseRestoreInfo) == 0x000008, "Wrong alignment on FInAppPurchaseRestoreInfo");
static_assert(sizeof(FInAppPurchaseRestoreInfo) == 0x000030, "Wrong size on FInAppPurchaseRestoreInfo");
static_assert(offsetof(FInAppPurchaseRestoreInfo, Identifier) == 0x000000, "Member 'FInAppPurchaseRestoreInfo::Identifier' has a wrong offset!");
static_assert(offsetof(FInAppPurchaseRestoreInfo, ReceiptData) == 0x000010, "Member 'FInAppPurchaseRestoreInfo::ReceiptData' has a wrong offset!");
static_assert(offsetof(FInAppPurchaseRestoreInfo, TransactionIdentifier) == 0x000020, "Member 'FInAppPurchaseRestoreInfo::TransactionIdentifier' has a wrong offset!");

// ScriptStruct OnlineSubsystem.NamedInterface
// 0x0010 (0x0010 - 0x0000)
struct FNamedInterface final
{
public:
	class FName                                   InterfaceName;                                     // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                InterfaceObject;                                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FNamedInterface) == 0x000008, "Wrong alignment on FNamedInterface");
static_assert(sizeof(FNamedInterface) == 0x000010, "Wrong size on FNamedInterface");
static_assert(offsetof(FNamedInterface, InterfaceName) == 0x000000, "Member 'FNamedInterface::InterfaceName' has a wrong offset!");
static_assert(offsetof(FNamedInterface, InterfaceObject) == 0x000008, "Member 'FNamedInterface::InterfaceObject' has a wrong offset!");

// ScriptStruct OnlineSubsystem.NamedInterfaceDef
// 0x0018 (0x0018 - 0x0000)
struct FNamedInterfaceDef final
{
public:
	class FName                                   InterfaceName;                                     // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 InterfaceClassName;                                // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FNamedInterfaceDef) == 0x000008, "Wrong alignment on FNamedInterfaceDef");
static_assert(sizeof(FNamedInterfaceDef) == 0x000018, "Wrong size on FNamedInterfaceDef");
static_assert(offsetof(FNamedInterfaceDef, InterfaceName) == 0x000000, "Member 'FNamedInterfaceDef::InterfaceName' has a wrong offset!");
static_assert(offsetof(FNamedInterfaceDef, InterfaceClassName) == 0x000008, "Member 'FNamedInterfaceDef::InterfaceClassName' has a wrong offset!");

// ScriptStruct OnlineSubsystem.InAppPurchaseProductRequest
// 0x0018 (0x0018 - 0x0000)
struct FInAppPurchaseProductRequest final
{
public:
	class FString                                 ProductIdentifier;                                 // 0x0000(0x0010)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsConsumable;                                     // 0x0010(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FInAppPurchaseProductRequest) == 0x000008, "Wrong alignment on FInAppPurchaseProductRequest");
static_assert(sizeof(FInAppPurchaseProductRequest) == 0x000018, "Wrong size on FInAppPurchaseProductRequest");
static_assert(offsetof(FInAppPurchaseProductRequest, ProductIdentifier) == 0x000000, "Member 'FInAppPurchaseProductRequest::ProductIdentifier' has a wrong offset!");
static_assert(offsetof(FInAppPurchaseProductRequest, bIsConsumable) == 0x000010, "Member 'FInAppPurchaseProductRequest::bIsConsumable' has a wrong offset!");

}

