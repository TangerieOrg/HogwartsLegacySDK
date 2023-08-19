#pragma once
#include <cstdint>
#include "ENPC_PathSpec.hpp"
#include "FNPC_MobilityAnimData.hpp"
#include "FNPC_MobilityDistanceData.hpp"
#include "FNPC_MobilityMovementData.hpp"
#include "FNPC_MobilitySpeedData.hpp"
#include "FNPC_MobilityTurnAssistStateData.hpp"
#include "FNPC_TurnAssistData.hpp"
#include "FNPC_TurnAssistDataContainer.hpp"
#pragma pack(push, 1)
struct FNPC_MobilityData {
    bool bApplySpeed; // 0x0
    char pad_1[0x3];
    float SpeedMin; // 0x4
    float SpeedMax; // 0x8
    float MaxTravelDist; // 0xc
    float EnergyCost; // 0x10
    char pad_14[0x4];
    TArray<FNPC_MobilitySpeedData> SpeedData; // 0x18
    float MoveDistThreshold; // 0x28
    float DestinationTolerance; // 0x2c
    float MoveMaxHeadingChangeAngle; // 0x30
    bool MoveToWaypointOffScreen; // 0x34
    bool bMoveStopOnOverlap; // 0x35
    bool bDoLOSCheck; // 0x36
    char pad_37[0x1];
    float LOSCollisionInterval; // 0x38
    float LOSCollisionDist; // 0x3c
    bool bUseCorridorCheck; // 0x40
    bool bDoRunPastCheck; // 0x41
    bool bDoWaypointAwayCheck; // 0x42
    bool bDoProgressTowardsCheck; // 0x43
    bool bDoDestinationAwayCheck; // 0x44
    bool bAbruptDestinationChangeCheck; // 0x45
    char pad_46[0x2];
    float AbruptDestinationChangeAngle; // 0x48
    ENPC_PathSpec PathSpec; // 0x4c
    char pad_4d[0x3];
    TArray<FNPC_MobilityAnimData> AnimData; // 0x50
    TArray<FNPC_MobilityDistanceData> DistanceData; // 0x60
    TArray<FNPC_TurnAssistData> TurnAssistData; // 0x70
    TArray<FNPC_TurnAssistDataContainer> TurnAssistDataContainer; // 0x80
    TArray<FNPC_MobilityTurnAssistStateData> TurnAssistStateData; // 0x90
    TArray<FNPC_MobilityMovementData> MovementData; // 0xa0
}; // Size: 0xb0
#pragma pack(pop)
