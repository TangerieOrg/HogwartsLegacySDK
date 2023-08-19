#pragma once
#include <cstdint>
#include "EGameFriendlyLevelNameFormat.hpp"
#include "ELevelBoundsBestHeuristic.hpp"
#include "FInsideOfLevel.hpp"
#include "FLevelBoundsSources.hpp"
#include "FVector.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class UObject;
struct FBox;
#pragma pack(push, 1)
class UachedLevelBoundsBlueprintLibrary : public UBlueprintFunctionLibrary {
public:
    static UachedLevelBoundsBlueprintLibrary* StaticClass();
    static void UncachedTotalWorldBounds(UObject* WorldContextObject, FLevelBoundsSources LevelBoundsSources, FBox& WorldBounds);
    static void TotalWorldBounds(UObject* WorldContextObject, FLevelBoundsSources LevelBoundsSources, bool bRefresh, FBox& WorldBounds);
    static void GetInsideOfLevelsSummary(UObject* WorldContextObject, FVector Position, ELevelBoundsBestHeuristic BestHeuristic, FLevelBoundsSources LevelBoundsSources, FString& SummaryInsideList, int32_t MaxLevelsToShow, FString Separator, EGameFriendlyLevelNameFormat LevelNameFormat, bool bRemoveIgnoredLevels);
    static void GetInsideOfLevelsList(UObject* WorldContextObject, FVector Position, ELevelBoundsBestHeuristic BestHeuristic, FLevelBoundsSources LevelBoundsSources, TArray<FInsideOfLevel>& InsideOfLevelList);
    static void GetInsideOfLevels(UObject* WorldContextObject, FVector Position, ELevelBoundsBestHeuristic BestHeuristic, FLevelBoundsSources LevelBoundsSources, FString& InsideList, FString Separator, EGameFriendlyLevelNameFormat LevelNameFormat, bool bRemoveIgnoredLevels);
    static void GetInsideOfLevel(UObject* WorldContextObject, FVector Position, ELevelBoundsBestHeuristic BestHeuristic, FLevelBoundsSources LevelBoundsSources, FInsideOfLevel& InsideOfLevel);
}; // Size: 0x28
#pragma pack(pop)
