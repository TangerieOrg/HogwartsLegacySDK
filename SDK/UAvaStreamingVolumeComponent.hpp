#pragma once
#include <cstdint>
#include "FVector2D.hpp"
#include "UAvaStreamingLevelVolumeComponentBase.hpp"
class ULevelStreamingDynamic;
#pragma pack(push, 1)
class UAvaStreamingVolumeComponent : public UAvaStreamingLevelVolumeComponentBase {
public:
    bool bIsExterior; // 0x290
    bool bExemptFromInteriorExteriorCulling; // 0x291
    char pad_292[0x6];
    TArray<void*> DependentLevelsToStream; // 0x298
    TArray<float> LevelLODDistances; // 0x2a8
    bool bShouldDitherLODTransitions; // 0x2b8
    char pad_2b9[0x3];
    float DependentLevelAdditionalBoundsRadius; // 0x2bc
    bool bSwapsPrecomputedVisibility; // 0x2c0
    char pad_2c1[0x7];
    TArray<void*> DependentSpringLevelsToStream; // 0x2c8
    TArray<void*> DependentSummerLevelsToStream; // 0x2d8
    TArray<void*> DependentFallLevelsToStream; // 0x2e8
    TArray<void*> DependentWinterLevelsToStream; // 0x2f8
    char pad_308[0x78];
    int32_t LodLevel; // 0x380
    char pad_384[0x14];
    TArray<ULevelStreamingDynamic*> LoadedDependentLevels; // 0x398
    TArray<ULevelStreamingDynamic*> LoadedDependentSeasonLevels; // 0x3a8
    char pad_3b8[0x18];
    static UAvaStreamingVolumeComponent* StaticClass();
    void UpdateSeasonState();
    void SetShouldBeVisible(bool InShouldBeVisible);
    void SetShouldBeLoaded(bool InShouldBeLoaded);
    void SetLodTime(double InLodTime);
    void SetLodLevel(int32_t InLodLevel);
    void ProposeLodLevel(int32_t InLodLevel, FVector2D InBorderDist);
    void PropagateState();
    bool GetShouldBeVisible();
    bool GetShouldBeLoaded();
    int32_t GetProposedLodLevel();
    double GetLodTime();
    int32_t GetLodLevel();
    TArray<float> GetLODDistances();
    ULevelStreamingDynamic* GetLoadedLevel();
    void ForceUnload();
    void ForceLoad();
    bool CommitLodLevel(double InLodTime);
}; // Size: 0x3d0
#pragma pack(pop)
