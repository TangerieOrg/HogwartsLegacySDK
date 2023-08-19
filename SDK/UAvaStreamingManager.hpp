#pragma once
#include <cstdint>
#include "EStreamingBehaviorMode.hpp"
#include "EStreamingBehaviorTactic.hpp"
#include "UObject.hpp"
class ULevel;
class APostProcessVolumeWithBlendDomain;
class ULevelStreamingLatencyProfiler;
class UMaterialInstanceDynamic;
class AActor;
class ULevelStreaming;
class UMaterialInterface;
struct FVector;
#pragma pack(push, 1)
class UAvaStreamingManager : public UObject {
public:
    char pad_28[0x1c8];
    TArray<ULevel*> LevelsToKeep; // 0x1f0
    char pad_200[0xa0];
    ULevelStreamingLatencyProfiler* LevelStreamingLatencyProfiler; // 0x2a0
    APostProcessVolumeWithBlendDomain* LowEndFogCullingVolume; // 0x2a8
    UMaterialInstanceDynamic* LowEndFogCullingMaterialInstanceDynamic; // 0x2b0
    char pad_2b8[0x8];
    static UAvaStreamingManager* StaticClass();
    void UpdateOverlaps();
    bool UnregisterInterestPointActor(AActor* InActor);
    static void UnloadLevelInstance(ULevelStreaming* InLevel);
    void UnloadAllButCurrentLevel();
    void SuppressPauseStreamingAutoReset(bool bSuppress);
    void SetStreamingBehaviorMode(EStreamingBehaviorMode BehaviorMode);
    void SetLowEndFog(APostProcessVolumeWithBlendDomain* LowEndFog, UMaterialInterface* LowEndFogMaterialBase);
    void ResumeStreaming(bool bForceImmediate, bool bResumeTileStreaming);
    bool RegisterInterestPointActor(AActor* InActor, float InAdditionalRadius, bool InAffectsInteriors, bool InAffectsTileRegionVolumes);
    void PreventInteriorLoads(bool bPrevent);
    void PauseStreaming(bool bWorldTilesOnly);
    void OnLoadScreenDismissed();
    void LowerCurtainUntilStreamingComplete();
    void LoadGlobalLevels();
    bool IsTileRenderingEnabled();
    bool IsStreamingPaused();
    bool IsStreamingCompleteFullCycle(bool bCheckOnlyLOD0, bool bUseDelay);
    bool IsStreamingCompleteAtLocationFullCycle(FVector& InQueryPoint, bool InQueryWorldTiles, bool InUseSlowAccurateCheck, bool InConsiderFutureRequestAtLocation);
    bool IsStreamingCompleteAtLocation(FVector& InQueryPoint, bool InQueryWorldTiles, bool InUseSlowAccurateCheck, bool InConsiderFutureRequestAtLocation, int32_t MinPriorityToCheck, bool bCheckTextureAndMeshStreaming);
    bool IsStreamingComplete(bool bCheckOnlyLOD0, bool bUseDelay, bool bConsiderUpdatePending, bool bConsiderUnloads);
    void InvalidateStreamingComplete(bool InRequireFullUpdates);
    EStreamingBehaviorTactic GetStreamingBehaviorTactic();
    EStreamingBehaviorMode GetStreamingBehaviorMode();
    static UAvaStreamingManager* GetPure();
    static UAvaStreamingManager* Get();
    void FlushStreaming();
    void AsyncLoadAssetList(UObject* WorldContextObject, TArray<void*>& AssetsToStream, int32_t& UniqueId);
}; // Size: 0x2c0
#pragma pack(pop)
