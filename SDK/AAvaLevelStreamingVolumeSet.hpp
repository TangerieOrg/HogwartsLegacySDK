#pragma once
#include <cstdint>
#include "AAvaStreamingVolumeSet.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
class AActor;
class ULevelStreamingDynamic;
#pragma pack(push, 1)
class AAvaLevelStreamingVolumeSet : public AAvaStreamingVolumeSet {
public:
    bool bIsExterior; // 0x268
    bool bExemptFromInteriorExteriorCulling; // 0x269
    char pad_26a[0x2e];
    bool bSwapsPrecomputedVisibility; // 0x298
    char pad_299[0x7];
    TArray<void*> DependentLevelsToStream; // 0x2a0
    float DependentLevelAdditionalBoundsRadius; // 0x2b0
    char pad_2b4[0x4];
    AActor* LevelPlacementActor; // 0x2b8
    TArray<float> LevelLODDistances; // 0x2c0
    bool bShouldDitherLODTransitions; // 0x2d0
    char pad_2d1[0x7];
    TArray<void*> DependentSpringLevelsToStream; // 0x2d8
    TArray<void*> DependentSummerLevelsToStream; // 0x2e8
    TArray<void*> DependentFallLevelsToStream; // 0x2f8
    TArray<void*> DependentWinterLevelsToStream; // 0x308
    char pad_318[0x78];
    ULevelStreamingDynamic* LoadedLevel; // 0x390
    TArray<ULevelStreamingDynamic*> LoadedDependentLevels; // 0x398
    static AAvaLevelStreamingVolumeSet* StaticClass();
    void SetShouldBeVisible(bool InShouldBeVisible);
    void SetShouldBeLoaded(bool InShouldBeLoaded);
    TArray<float> GetLODDistances();
    ULevelStreamingDynamic* GetLoadedLevel();
    FRotator GetLevelRot();
    FVector GetLevelLoc();
    void ForceUnload();
    void ForceLoad();
}; // Size: 0x3a8
#pragma pack(pop)
