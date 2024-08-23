#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OSC

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class OSC.OSCClient
// 0x0008 (0x0030 - 0x0028)
class UOSCClient final : public UObject
{
public:
	uint8                                         Pad_28[0x8];                                       // 0x0028(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void GetSendIPAddress(class FString& IPAddress, int32& Port);
	void SendOSCBundle(struct FOSCBundle& Bundle);
	void SendOSCMessage(struct FOSCMessage& Message);
	bool SetSendIPAddress(const class FString& IPAddress, const int32 Port);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OSCClient">();
	}
	static class UOSCClient* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOSCClient>();
	}
};
static_assert(alignof(UOSCClient) == 0x000008, "Wrong alignment on UOSCClient");
static_assert(sizeof(UOSCClient) == 0x000030, "Wrong size on UOSCClient");

// Class OSC.OSCManager
// 0x0000 (0x0028 - 0x0028)
class UOSCManager final : public UBlueprintFunctionLibrary
{
public:
	static struct FOSCMessage AddAddress(struct FOSCMessage& Message, const struct FOSCAddress& Value);
	static struct FOSCMessage AddBlob(struct FOSCMessage& Message, const TArray<uint8>& Value);
	static struct FOSCMessage AddBool(struct FOSCMessage& Message, bool Value);
	static struct FOSCBundle AddBundleToBundle(const struct FOSCBundle& InBundle, struct FOSCBundle& OutBundle);
	static struct FOSCMessage AddFloat(struct FOSCMessage& Message, float Value);
	static struct FOSCMessage AddInt32(struct FOSCMessage& Message, int32 Value);
	static struct FOSCMessage AddInt64(struct FOSCMessage& Message, int64 Value);
	static struct FOSCBundle AddMessageToBundle(const struct FOSCMessage& Message, struct FOSCBundle& Bundle);
	static struct FOSCMessage AddString(struct FOSCMessage& Message, class FString& Value);
	static struct FOSCBundle ClearBundle(struct FOSCBundle& Bundle);
	static struct FOSCMessage ClearMessage(struct FOSCMessage& Message);
	static struct FOSCAddress ClearOSCAddressContainers(struct FOSCAddress& Address);
	static struct FOSCAddress ConvertStringToOSCAddress(const class FString& String);
	static class UOSCClient* CreateOSCClient(const class FString& SendIPAddress, int32 Port, const class FString& ClientName, class UObject* Outer_0);
	static class UOSCServer* CreateOSCServer(const class FString& ReceiveIPAddress, int32 Port, bool bMulticastLoopback, bool bStartListening, const class FString& ServerName, class UObject* Outer_0);
	static class UObject* FindObjectAtOSCAddress(const struct FOSCAddress& Address);
	static bool GetAddress(const struct FOSCMessage& Message, const int32 Index_0, struct FOSCAddress* Value);
	static void GetAllAddresses(const struct FOSCMessage& Message, TArray<struct FOSCAddress>* Values);
	static void GetAllBools(const struct FOSCMessage& Message, TArray<bool>* Values);
	static void GetAllFloats(const struct FOSCMessage& Message, TArray<float>* Values);
	static void GetAllInt32s(const struct FOSCMessage& Message, TArray<int32>* Values);
	static void GetAllInt64s(const struct FOSCMessage& Message, TArray<int64>* Values);
	static void GetAllStrings(const struct FOSCMessage& Message, TArray<class FString>* Values);
	static bool GetBlob(const struct FOSCMessage& Message, const int32 Index_0, TArray<uint8>* Value);
	static bool GetBool(const struct FOSCMessage& Message, const int32 Index_0, bool* Value);
	static TArray<struct FOSCBundle> GetBundlesFromBundle(const struct FOSCBundle& Bundle);
	static bool GetFloat(const struct FOSCMessage& Message, const int32 Index_0, float* Value);
	static bool GetInt32(const struct FOSCMessage& Message, const int32 Index_0, int32* Value);
	static bool GetInt64(const struct FOSCMessage& Message, const int32 Index_0, int64* Value);
	static struct FOSCMessage GetMessageFromBundle(const struct FOSCBundle& Bundle, int32 Index_0, bool* bSucceeded);
	static TArray<struct FOSCMessage> GetMessagesFromBundle(const struct FOSCBundle& Bundle);
	static class FString GetOSCAddressContainer(const struct FOSCAddress& Address, const int32 Index_0);
	static class FString GetOSCAddressContainerPath(const struct FOSCAddress& Address);
	static TArray<class FString> GetOSCAddressContainers(const struct FOSCAddress& Address);
	static class FString GetOSCAddressFullPath(const struct FOSCAddress& Address);
	static class FString GetOSCAddressMethod(const struct FOSCAddress& Address);
	static struct FOSCAddress GetOSCMessageAddress(const struct FOSCMessage& Message);
	static bool GetString(const struct FOSCMessage& Message, const int32 Index_0, class FString* Value);
	static class FString ObjectPathFromOSCAddress(const struct FOSCAddress& Address);
	static struct FOSCAddress OSCAddressFromObjectPath(class UObject* Object);
	static struct FOSCAddress OSCAddressFromObjectPathString(const class FString& PathName);
	static bool OSCAddressIsValidPath(const struct FOSCAddress& Address);
	static bool OSCAddressIsValidPattern(const struct FOSCAddress& Address);
	static bool OSCAddressPathMatchesPattern(const struct FOSCAddress& Pattern, const struct FOSCAddress& Path);
	static class FString OSCAddressPopContainer(struct FOSCAddress& Address);
	static TArray<class FString> OSCAddressPopContainers(struct FOSCAddress& Address, int32 NumContainers);
	static struct FOSCAddress OSCAddressPushContainer(struct FOSCAddress& Address, const class FString& Container);
	static struct FOSCAddress OSCAddressPushContainers(struct FOSCAddress& Address, const TArray<class FString>& Containers);
	static struct FOSCAddress OSCAddressRemoveContainers(struct FOSCAddress& Address, int32 Index_0, int32 Count);
	static struct FOSCAddress SetOSCAddressMethod(struct FOSCAddress& Address, const class FString& Method);
	static struct FOSCMessage SetOSCMessageAddress(struct FOSCMessage& Message, const struct FOSCAddress& Address);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OSCManager">();
	}
	static class UOSCManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOSCManager>();
	}
};
static_assert(alignof(UOSCManager) == 0x000008, "Wrong alignment on UOSCManager");
static_assert(sizeof(UOSCManager) == 0x000028, "Wrong size on UOSCManager");

// Class OSC.OSCServer
// 0x00B8 (0x00E0 - 0x0028)
class alignas(0x10) UOSCServer final : public UObject
{
public:
	FMulticastInlineDelegateProperty_             OnOscMessageReceived;                              // 0x0028(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_38[0x18];                                      // 0x0038(0x0018)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnOscBundleReceived;                               // 0x0050(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_60[0x80];                                      // 0x0060(0x0080)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void AddAllowlistedClient(const class FString& IPAddress);
	void BindEventToOnOSCAddressPatternMatchesPath(const struct FOSCAddress& OSCAddressPattern, const TDelegate<void(struct FOSCAddress& AddressPattern, struct FOSCMessage& Message, const class FString& IPAddress, int32 Port)>& Event);
	void ClearAllowlistedClients();
	void Listen();
	void RemoveAllowlistedClient(const class FString& IPAddress);
	bool SetAddress(const class FString& ReceiveIPAddress, int32 Port);
	void SetAllowlistClientsEnabled(bool bEnabled);
	void SetMulticastLoopback(bool bMulticastLoopback);
	void Stop();
	void UnbindAllEventsFromOnOSCAddressPatternMatchesPath(const struct FOSCAddress& OSCAddressPattern);
	void UnbindAllEventsFromOnOSCAddressPatternMatching();
	void UnbindEventFromOnOSCAddressPatternMatchesPath(const struct FOSCAddress& OSCAddressPattern, const TDelegate<void(struct FOSCAddress& AddressPattern, struct FOSCMessage& Message, const class FString& IPAddress, int32 Port)>& Event);

	TSet<class FString> GetAllowlistedClients() const;
	TArray<struct FOSCAddress> GetBoundOSCAddressPatterns() const;
	class FString GetIpAddress(bool bIncludePort) const;
	bool GetMulticastLoopback() const;
	int32 GetPort() const;
	bool IsActive() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OSCServer">();
	}
	static class UOSCServer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOSCServer>();
	}
};
static_assert(alignof(UOSCServer) == 0x000010, "Wrong alignment on UOSCServer");
static_assert(sizeof(UOSCServer) == 0x0000E0, "Wrong size on UOSCServer");
static_assert(offsetof(UOSCServer, OnOscMessageReceived) == 0x000028, "Member 'UOSCServer::OnOscMessageReceived' has a wrong offset!");
static_assert(offsetof(UOSCServer, OnOscBundleReceived) == 0x000050, "Member 'UOSCServer::OnOscBundleReceived' has a wrong offset!");

}

