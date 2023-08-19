#include "EGameFriendlyLevelNameFormat.hpp"
#include "ELevelBoundsBestHeuristic.hpp"
#include "FBox.hpp"
#include "FInsideOfLevel.hpp"
#include "FLevelBoundsSources.hpp"
#include "FVector.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UachedLevelBoundsBlueprintLibrary.hpp"
UachedLevelBoundsBlueprintLibrary* UachedLevelBoundsBlueprintLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/CachedLevelBounds.achedLevelBoundsBlueprintLibrary");
    return (UachedLevelBoundsBlueprintLibrary*)res;
}
void UachedLevelBoundsBlueprintLibrary::TotalWorldBounds(UObject* WorldContextObject, FLevelBoundsSources LevelBoundsSources, bool bRefresh, FBox& WorldBounds) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CachedLevelBounds.achedLevelBoundsBlueprintLibrary.TotalWorldBounds"));
    struct Params_TotalWorldBounds {
        UObject* WorldContextObject; // 0x0
        FLevelBoundsSources LevelBoundsSources; // 0x8
        bool bRefresh; // 0xc
        char pad_d[0x3];
        FBox WorldBounds; // 0x10
    }; // Size: 0x2c
    Params_TotalWorldBounds params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.LevelBoundsSources = (FLevelBoundsSources)LevelBoundsSources;
    params.bRefresh = (bool)bRefresh;
    params.WorldBounds = (FBox)WorldBounds;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    WorldBounds = params.WorldBounds;
}
void UachedLevelBoundsBlueprintLibrary::UncachedTotalWorldBounds(UObject* WorldContextObject, FLevelBoundsSources LevelBoundsSources, FBox& WorldBounds) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CachedLevelBounds.achedLevelBoundsBlueprintLibrary.UncachedTotalWorldBounds"));
    struct Params_UncachedTotalWorldBounds {
        UObject* WorldContextObject; // 0x0
        FLevelBoundsSources LevelBoundsSources; // 0x8
        FBox WorldBounds; // 0xc
    }; // Size: 0x28
    Params_UncachedTotalWorldBounds params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.LevelBoundsSources = (FLevelBoundsSources)LevelBoundsSources;
    params.WorldBounds = (FBox)WorldBounds;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    WorldBounds = params.WorldBounds;
}
void UachedLevelBoundsBlueprintLibrary::GetInsideOfLevelsSummary(UObject* WorldContextObject, FVector Position, ELevelBoundsBestHeuristic BestHeuristic, FLevelBoundsSources LevelBoundsSources, FString& SummaryInsideList, int32_t MaxLevelsToShow, FString Separator, EGameFriendlyLevelNameFormat LevelNameFormat, bool bRemoveIgnoredLevels) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CachedLevelBounds.achedLevelBoundsBlueprintLibrary.GetInsideOfLevelsSummary"));
    struct Params_GetInsideOfLevelsSummary {
        UObject* WorldContextObject; // 0x0
        FVector Position; // 0x8
        ELevelBoundsBestHeuristic BestHeuristic; // 0x14
        char pad_15[0x3];
        FLevelBoundsSources LevelBoundsSources; // 0x18
        char pad_1c[0x4];
        FString SummaryInsideList; // 0x20
        int32_t MaxLevelsToShow; // 0x30
        char pad_34[0x4];
        FString Separator; // 0x38
        EGameFriendlyLevelNameFormat LevelNameFormat; // 0x48
        bool bRemoveIgnoredLevels; // 0x49
    }; // Size: 0x4a
    Params_GetInsideOfLevelsSummary params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Position = (FVector)Position;
    params.BestHeuristic = (ELevelBoundsBestHeuristic)BestHeuristic;
    params.LevelBoundsSources = (FLevelBoundsSources)LevelBoundsSources;
    params.SummaryInsideList = (FString)SummaryInsideList;
    params.MaxLevelsToShow = (int32_t)MaxLevelsToShow;
    params.Separator = (FString)Separator;
    params.LevelNameFormat = (EGameFriendlyLevelNameFormat)LevelNameFormat;
    params.bRemoveIgnoredLevels = (bool)bRemoveIgnoredLevels;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    SummaryInsideList = params.SummaryInsideList;
}
void UachedLevelBoundsBlueprintLibrary::GetInsideOfLevelsList(UObject* WorldContextObject, FVector Position, ELevelBoundsBestHeuristic BestHeuristic, FLevelBoundsSources LevelBoundsSources, TArray<FInsideOfLevel>& InsideOfLevelList) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CachedLevelBounds.achedLevelBoundsBlueprintLibrary.GetInsideOfLevelsList"));
    struct Params_GetInsideOfLevelsList {
        UObject* WorldContextObject; // 0x0
        FVector Position; // 0x8
        ELevelBoundsBestHeuristic BestHeuristic; // 0x14
        char pad_15[0x3];
        FLevelBoundsSources LevelBoundsSources; // 0x18
        char pad_1c[0x4];
        TArray<FInsideOfLevel> InsideOfLevelList; // 0x20
    }; // Size: 0x30
    Params_GetInsideOfLevelsList params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Position = (FVector)Position;
    params.BestHeuristic = (ELevelBoundsBestHeuristic)BestHeuristic;
    params.LevelBoundsSources = (FLevelBoundsSources)LevelBoundsSources;
    params.InsideOfLevelList = (TArray<FInsideOfLevel>)InsideOfLevelList;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InsideOfLevelList = params.InsideOfLevelList;
}
void UachedLevelBoundsBlueprintLibrary::GetInsideOfLevels(UObject* WorldContextObject, FVector Position, ELevelBoundsBestHeuristic BestHeuristic, FLevelBoundsSources LevelBoundsSources, FString& InsideList, FString Separator, EGameFriendlyLevelNameFormat LevelNameFormat, bool bRemoveIgnoredLevels) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CachedLevelBounds.achedLevelBoundsBlueprintLibrary.GetInsideOfLevels"));
    struct Params_GetInsideOfLevels {
        UObject* WorldContextObject; // 0x0
        FVector Position; // 0x8
        ELevelBoundsBestHeuristic BestHeuristic; // 0x14
        char pad_15[0x3];
        FLevelBoundsSources LevelBoundsSources; // 0x18
        char pad_1c[0x4];
        FString InsideList; // 0x20
        FString Separator; // 0x30
        EGameFriendlyLevelNameFormat LevelNameFormat; // 0x40
        bool bRemoveIgnoredLevels; // 0x41
    }; // Size: 0x42
    Params_GetInsideOfLevels params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Position = (FVector)Position;
    params.BestHeuristic = (ELevelBoundsBestHeuristic)BestHeuristic;
    params.LevelBoundsSources = (FLevelBoundsSources)LevelBoundsSources;
    params.InsideList = (FString)InsideList;
    params.Separator = (FString)Separator;
    params.LevelNameFormat = (EGameFriendlyLevelNameFormat)LevelNameFormat;
    params.bRemoveIgnoredLevels = (bool)bRemoveIgnoredLevels;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InsideList = params.InsideList;
}
void UachedLevelBoundsBlueprintLibrary::GetInsideOfLevel(UObject* WorldContextObject, FVector Position, ELevelBoundsBestHeuristic BestHeuristic, FLevelBoundsSources LevelBoundsSources, FInsideOfLevel& InsideOfLevel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CachedLevelBounds.achedLevelBoundsBlueprintLibrary.GetInsideOfLevel"));
    struct Params_GetInsideOfLevel {
        UObject* WorldContextObject; // 0x0
        FVector Position; // 0x8
        ELevelBoundsBestHeuristic BestHeuristic; // 0x14
        char pad_15[0x3];
        FLevelBoundsSources LevelBoundsSources; // 0x18
        FInsideOfLevel InsideOfLevel; // 0x1c
    }; // Size: 0x50
    Params_GetInsideOfLevel params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Position = (FVector)Position;
    params.BestHeuristic = (ELevelBoundsBestHeuristic)BestHeuristic;
    params.LevelBoundsSources = (FLevelBoundsSources)LevelBoundsSources;
    params.InsideOfLevel = (FInsideOfLevel)InsideOfLevel;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InsideOfLevel = params.InsideOfLevel;
}
