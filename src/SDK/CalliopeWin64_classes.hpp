#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CalliopeWin64

#include "Basic.hpp"

#include "MovieRenderPipelineCore_classes.hpp"


namespace SDK
{

// Class CalliopeWin64.CalliopeMoviePipelineSetting
// 0x0000 (0x0048 - 0x0048)
class UCalliopeMoviePipelineSetting : public UMoviePipelineSetting
{
public:
	void AfterLevelSequenceActorInitializedCS(class UMoviePipeline* InPipeline);
	void SequenceBindActorsByTag(class UMoviePipeline* InPipeline, const TMap<class FName, class AActor*>& TagActors);
	void SetupForPipelineCS(class UMoviePipeline* InPipeline);
	void TeardownForPipelineCS(class UMoviePipeline* InPipeline);

	int32 GetSequenceBindingTags(class UMoviePipeline* InPipeline, TSet<class FName>* OutBindingTags) const;
	bool IgnoreTransientFiltersCS() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CalliopeMoviePipelineSetting">();
	}
	static class UCalliopeMoviePipelineSetting* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCalliopeMoviePipelineSetting>();
	}
};
static_assert(alignof(UCalliopeMoviePipelineSetting) == 0x000008, "Wrong alignment on UCalliopeMoviePipelineSetting");
static_assert(sizeof(UCalliopeMoviePipelineSetting) == 0x000048, "Wrong size on UCalliopeMoviePipelineSetting");

}

