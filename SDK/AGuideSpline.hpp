#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FGuideSplineTrajectory.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
class UNonUniformSplineComponent;
class USplineComponent;
#pragma pack(push, 1)
class AGuideSpline : public AActor {
public:
    float TimeOutPeriod; // 0x248
    float MaximumDistanceFromPlayer; // 0x24c
    float MaximumDistanceFromPlayerMounted; // 0x250
    float DestinationArrivalDistance; // 0x254
    float HeightAdjustCollissionPassRange; // 0x258
    float MinHeightOffset; // 0x25c
    float MaxHeightOffset; // 0x260
    float MaxHeightTurnDepth; // 0x264
    float ShootForwardOffset; // 0x268
    FVector2D LoopSideOffset; // 0x26c
    float LoopAroundYawThreshold; // 0x274
    float LoopAroundPitchThreshold; // 0x278
    float SplineStartRestoreAngleThreshold; // 0x27c
    float RoughTimeBetweenAdjustStartAndVFX; // 0x280
    float RoughTimeBetweenInitializeAndVFX; // 0x284
    FGuideSplineTrajectory Trajectory; // 0x288
    int32_t ResimulationNumBufferPoints; // 0x360
    int32_t DrawDebugSegmentsPerPoint; // 0x364
    UNonUniformSplineComponent* BaseSpline; // 0x368
    USplineComponent* SmoothedSpline; // 0x370
    char pad_378[0x110];
    static AGuideSpline* StaticClass();
    void RemovePath();
    void PreparePathRemoval();
    void OnPathInitialized();
    void OnPathArrived();
    void InitializeFromPath(TArray<FVector>& Path);
    TArray<FVector> GetTrajectoryPoints();
    void CompletePathRemoval();
}; // Size: 0x488
#pragma pack(pop)
