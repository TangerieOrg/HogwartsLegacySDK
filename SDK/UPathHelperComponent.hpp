#pragma once
#include <cstdint>
#include "EHelperState.hpp"
#include "FVector.hpp"
#include "UActorComponent.hpp"
#pragma pack(push, 1)
class UPathHelperComponent : public UActorComponent {
public:
    float TravelSpeed; // 0xc8
    float MinTravelSpeed; // 0xcc
    float TravelTime; // 0xd0
    float DistanceBeforeAttract; // 0xd4
    float Height; // 0xd8
    float HelperRadius; // 0xdc
    float Deflection; // 0xe0
    float DelayBetweenPoints; // 0xe4
    float StartDelay; // 0xe8
    float AttractHoldTime; // 0xec
    float StartMoveDistSq; // 0xf0
    bool bNearActivate; // 0xf4
    char pad_f5[0x3];
    float CameraRotationTime; // 0xf8
    int32_t DebugNumberOfPathPointsToShow; // 0xfc
    bool bIsRunningHelp; // 0x100
    bool bAllowCollisionDuringZip; // 0x101
    bool bShowExitPath; // 0x102
    bool bShowDebug; // 0x103
    bool bJustFollowPath; // 0x104
    bool bOrientActorToPath; // 0x105
    bool bHideActorAtEnd; // 0x106
    char pad_107[0x1];
    TArray<FVector> Path; // 0x108
    FVector NextPoint; // 0x118
    FVector CurrentPoint; // 0x124
    float DistanceToAvatarSq; // 0x130
    float PlayerSpeed; // 0x134
    float PlayerToPathHelperDot; // 0x138
    FVector PlayerForward; // 0x13c
    FVector CurrentVelocity; // 0x148
    float CurrentSpeed; // 0x154
    FVector FirstPointInView; // 0x158
    int32_t FirstPointInViewIndex; // 0x164
    bool FirstPointInViewAchieved; // 0x168
    char pad_169[0x3];
    float MaxZipPointDistance; // 0x16c
    float SpawnDistance; // 0x170
    float MinSpawnDistance; // 0x174
    float ReverseSpawnDistance; // 0x178
    float MinReverseSpawnDistance; // 0x17c
    char pad_180[0x2c];
    int32_t EndPointIndex; // 0x1ac
    bool HasLineOfSight; // 0x1b0
    bool UseCreatureAnimation; // 0x1b1
    char pad_1b2[0x3a];
    int32_t NumberOfFramesForTurn; // 0x1ec
    char pad_1f0[0xb8];
    static UPathHelperComponent* StaticClass();
    void StartStart();
    void StartRun();
    void StartHelp_Event();
    void StartHelp(TArray<FVector> InPath);
    void StartDeployTurn();
    void StartDeploy();
    void SetState(EHelperState InState);
    void SetNewStopAndAttractPoint(int32_t Index, FVector Point, bool CreatePoint);
    void RunStart();
    void PopOutStart();
    void EndStart();
    void DeployTurnStart();
    void DeployStart();
    float CalculateAngleBetweenTwoVectors(FVector v1, FVector v2);
    void AttractStart();
}; // Size: 0x2a8
#pragma pack(pop)
