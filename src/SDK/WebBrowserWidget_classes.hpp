#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WebBrowserWidget

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class WebBrowserWidget.WebBrowser
// 0x0048 (0x0178 - 0x0130)
class UWebBrowser final : public UWidget
{
public:
	FMulticastInlineDelegateProperty_             OnUrlChanged;                                      // 0x0130(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnBeforePopup;                                     // 0x0140(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FString                                 InitialURL;                                        // 0x0150(0x0010)(Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bSupportsTransparency;                             // 0x0160(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_161[0x17];                                     // 0x0161(0x0017)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void ExecuteJavascript(const class FString& ScriptText);
	void LoadString(const class FString& Contents, const class FString& DummyURL);
	void LoadURL(const class FString& NewURL);
	void OnBeforePopup__DelegateSignature(const class FString& URL, const class FString& Frame);
	void OnUrlChanged__DelegateSignature(const class FText& Text);

	class FText GetTitleText() const;
	class FString GetUrl() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WebBrowser">();
	}
	static class UWebBrowser* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWebBrowser>();
	}
};
static_assert(alignof(UWebBrowser) == 0x000008, "Wrong alignment on UWebBrowser");
static_assert(sizeof(UWebBrowser) == 0x000178, "Wrong size on UWebBrowser");
static_assert(offsetof(UWebBrowser, OnUrlChanged) == 0x000130, "Member 'UWebBrowser::OnUrlChanged' has a wrong offset!");
static_assert(offsetof(UWebBrowser, OnBeforePopup) == 0x000140, "Member 'UWebBrowser::OnBeforePopup' has a wrong offset!");
static_assert(offsetof(UWebBrowser, InitialURL) == 0x000150, "Member 'UWebBrowser::InitialURL' has a wrong offset!");
static_assert(offsetof(UWebBrowser, bSupportsTransparency) == 0x000160, "Member 'UWebBrowser::bSupportsTransparency' has a wrong offset!");

// Class WebBrowserWidget.WebBrowserAssetManager
// 0x0050 (0x0078 - 0x0028)
class UWebBrowserAssetManager final : public UObject
{
public:
	TSoftObjectPtr<class UMaterial>               DefaultMaterial;                                   // 0x0028(0x0028)(Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_50[0x28];                                      // 0x0050(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WebBrowserAssetManager">();
	}
	static class UWebBrowserAssetManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWebBrowserAssetManager>();
	}
};
static_assert(alignof(UWebBrowserAssetManager) == 0x000008, "Wrong alignment on UWebBrowserAssetManager");
static_assert(sizeof(UWebBrowserAssetManager) == 0x000078, "Wrong size on UWebBrowserAssetManager");
static_assert(offsetof(UWebBrowserAssetManager, DefaultMaterial) == 0x000028, "Member 'UWebBrowserAssetManager::DefaultMaterial' has a wrong offset!");

}

