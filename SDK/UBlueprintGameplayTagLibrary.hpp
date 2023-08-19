#pragma once
#include <cstdint>
#include "FGameplayTag.hpp"
#include "FGameplayTagContainer.hpp"
#include "FGameplayTagQuery.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class UObject;
class UClass;
class AActor;
#pragma pack(push, 1)
class UBlueprintGameplayTagLibrary : public UBlueprintFunctionLibrary {
public:
    static UBlueprintGameplayTagLibrary* StaticClass();
    static bool RemoveGameplayTag(FGameplayTagContainer& TagContainer, FGameplayTag Tag);
    static bool NotEqual_TagTag(FGameplayTag A, FString B);
    static bool NotEqual_TagContainerTagContainer(FGameplayTagContainer A, FString B);
    static bool NotEqual_GameplayTagContainer(FGameplayTagContainer& A, FGameplayTagContainer& B);
    static bool NotEqual_GameplayTag(FGameplayTag A, FGameplayTag B);
    static bool MatchesTag(FGameplayTag TagOne, FGameplayTag TagTwo, bool bExactMatch);
    static bool MatchesAnyTags(FGameplayTag TagOne, FGameplayTagContainer& OtherContainer, bool bExactMatch);
    static FGameplayTagContainer MakeLiteralGameplayTagContainer(FGameplayTagContainer Value);
    static FGameplayTag MakeLiteralGameplayTag(FGameplayTag Value);
    static FGameplayTagQuery MakeGameplayTagQuery(FGameplayTagQuery TagQuery);
    static FGameplayTagContainer MakeGameplayTagContainerFromTag(FGameplayTag SingleTag);
    static FGameplayTagContainer MakeGameplayTagContainerFromArray(TArray<FGameplayTag>& GameplayTags);
    static bool IsTagQueryEmpty(FGameplayTagQuery& TagQuery);
    static bool IsGameplayTagValid(FGameplayTag GameplayTag);
    static bool HasTag(FGameplayTagContainer& TagContainer, FGameplayTag Tag, bool bExactMatch);
    static bool HasAnyTags(FGameplayTagContainer& TagContainer, FGameplayTagContainer& OtherContainer, bool bExactMatch);
    static bool HasAllTags(FGameplayTagContainer& TagContainer, FGameplayTagContainer& OtherContainer, bool bExactMatch);
    static void HasAllMatchingGameplayTags();
    static FName GetTagName(FGameplayTag& GameplayTag);
    static int32_t GetNumGameplayTagsInContainer(FGameplayTagContainer& TagContainer);
    static FString GetDebugStringFromGameplayTagContainer(FGameplayTagContainer& TagContainer);
    static FString GetDebugStringFromGameplayTag(FGameplayTag GameplayTag);
    static void GetAllActorsOfClassMatchingTagQuery(UObject* WorldContextObject, UClass* ActorClass, FGameplayTagQuery& GameplayTagQuery, TArray<AActor*>& OutActors);
    static bool EqualEqual_GameplayTagContainer(FGameplayTagContainer& A, FGameplayTagContainer& B);
    static bool EqualEqual_GameplayTag(FGameplayTag A, FGameplayTag B);
    static void DoesTagAssetInterfaceHaveTag();
    static bool DoesContainerMatchTagQuery(FGameplayTagContainer& TagContainer, FGameplayTagQuery& TagQuery);
    static void BreakGameplayTagContainer(FGameplayTagContainer& GameplayTagContainer, TArray<FGameplayTag>& GameplayTags);
    static void AppendGameplayTagContainers(FGameplayTagContainer& InOutTagContainer, FGameplayTagContainer& InTagContainer);
    static void AddGameplayTag(FGameplayTagContainer& TagContainer, FGameplayTag Tag);
}; // Size: 0x28
#pragma pack(pop)
