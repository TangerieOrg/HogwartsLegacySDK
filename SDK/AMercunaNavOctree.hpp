#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "ECollisionChannel.hpp"
#include "EMerOctreeDebugDrawMode.hpp"
#include "FBox.hpp"
#include "FVector.hpp"
class UMercunaOctreeSettings;
class AMercunaNavModifierVolume;
class UMercunaPath;
class UMerNavOctreeRenderingComponent;
struct FRotator;
class UMercunaSpline;
#pragma pack(push, 1)
class AMercunaNavOctree : public AActor {
public:
    bool bUseOverride; // 0x248
    char pad_249[0x7];
    UMercunaOctreeSettings* SettingsOverride; // 0x250
    float CellSize; // 0x258
    int32_t MinPawnRadius; // 0x25c
    int32_t MaxPawnRadius; // 0x260
    bool bNeverSave; // 0x264
    bool bAllowOctreeMerging; // 0x265
    ECollisionChannel GeometryCollisionChannel; // 0x266
    bool bRecordOctreeDeltas; // 0x267
    char pad_268[0x68];
    EMerOctreeDebugDrawMode DebugDrawMode; // 0x2d0
    char pad_2d1[0x7];
    UMerNavOctreeRenderingComponent* MerNavOctreeRenderingComponent; // 0x2d8
    bool bBuildAsSublevel; // 0x2e0
    bool bNeedsRebuild; // 0x2e1
    char pad_2e2[0x2e];
    static AMercunaNavOctree* StaticClass();
    void UpdateModifierVolumeParams(AMercunaNavModifierVolume* ModifierVolume);
    void SetNavigationRotation(FRotator& Rotation);
    void RemoveModifierVolume(AMercunaNavModifierVolume* ModifierVolume);
    void RebuildVolumes(TArray<FBox>& Volumes, bool StagedBuild);
    void RebuildActorVolume(AActor* Volume, bool StagedBuild);
    void Raycast(FVector Start, FVector End, float NavigationRadius, FVector& HitPosition, bool& RayHit);
    void MercunaRebuildComplete__DelegateSignature(AActor* Volume);
    void MercunaLoadComplete__DelegateSignature();
    void MercunaBuildComplete__DelegateSignature();
    bool IsReachableSingle(FVector Start, FVector End, float NavigationRadius, float MaxPathLength);
    bool IsReachable(FVector Start, FVector End, float NavigationRadius, float MaxPathLength, bool AccuratePathLength);
    void IsNavigableMulti(TArray<FVector>& Positions, float NavigationRadius, TArray<bool>& Results);
    void IsNavigable(FVector Position, float NavigationRadius, bool& Result);
    UMercunaSpline* FindSplineToLocation(FVector Start, FVector End, float NavigationRadius, float MaxSpeed, float MaxAcceleration, bool AllowPartial, float MaxPathLength);
    UMercunaPath* FindPathToLocation(FVector Start, FVector End, float NavigationRadius, bool AllowPartial, float MaxPathLength);
    UMercunaPath* FindPathToActor(FVector Start, AActor* GoalActor, float NavigationRadius, bool AllowPartial, float MaxPathLength);
    void ClampToNavigable(FVector Position, float NavigationRadius, float SearchRadius, FVector& ClampedPosition, bool& Result);
    void CheckReachable(FVector Start, FVector End, float NavigationRadius, float MaxPathLength, bool& Result);
    void Build();
}; // Size: 0x310
#pragma pack(pop)
