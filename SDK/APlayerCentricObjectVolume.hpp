#pragma once
#include <cstdint>
#include "ATargetPoint.hpp"
#include "ESpawnVolumeType.hpp"
#include "FBox.hpp"
#include "FObjectVisualizationInfo.hpp"
#include "FSpawnSelectInfo.hpp"
#include "FVector.hpp"
class UPrimitiveComponent;
class UManualNavigationInvokerComponent;
class AActor;
#pragma pack(push, 1)
class APlayerCentricObjectVolume : public ATargetPoint {
public:
    FObjectVisualizationInfo VolumeVisualization; // 0x248
    bool bShowActivationDistances; // 0x254
    bool bEnableAutoActivation; // 0x255
    char pad_256[0x2];
    float TriggerDistance; // 0x258
    float CullDistance; // 0x25c
    bool bEnableSpawning; // 0x260
    char pad_261[0x3];
    float ExtentsPercentageForDefaultSpawnLocation; // 0x264
    float RespawnDistance; // 0x268
    float PlayerOffsetForDefaultSpawnLocation; // 0x26c
    ESpawnVolumeType SpawnVolumeType; // 0x270
    char pad_271[0x7];
    TArray<FSpawnSelectInfo> ItemsToSpawn; // 0x278
    char pad_288[0x50];
    UPrimitiveComponent* VolumeComponent; // 0x2d8
    UManualNavigationInvokerComponent* NavInvokerComponent; // 0x2e0
    char pad_2e8[0x5f8];
    static APlayerCentricObjectVolume* StaticClass();
    void SetSpawnBoundsFromVectors(FVector& Min, FVector& Max);
    void SetSpawnBounds(FBox& SpawnBounds);
    void SetEnableSpawning(bool bSpawningEnabled, bool bCullActive);
    void SetAllowAutoActivation(bool bAllowAutoActivate);
    void OnFinishedSpawning(FName& GroupName);
    void OnActorSpawned(AActor* SpawnedActor, FName& GroupName);
    void ObjectLoaded();
    bool HasSpawned();
    FVector GetVolumeExtents();
    FBox GetVolumeBounds();
    FBox GetSpawnBounds();
    int32_t GetSpawnActorCount();
    int32_t GetAliveActorCount();
    int32_t GetActiveActorCount();
    void ForceDeactivate();
    void ForceActivate();
    bool DoneSpawning();
}; // Size: 0x8e0
#pragma pack(pop)
