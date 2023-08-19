#pragma once
#include <cstdint>
#include "AAIController.hpp"
#include "FRuntimeFloatCurve.hpp"
class ACreature_Character;
class ANPC_Character;
class UCreature_MountComponent;
class APathNode;
class ANPC_Spline;
class UIcarus3DMovementComponent;
class UCreature_PathFollowingComponent;
#pragma pack(push, 1)
class AMountedAI_Controller : public AAIController {
public:
    float DistanceFromGroundPathNodeThreshold; // 0x350
    float DistanceFromAirPathNodeThreshold; // 0x354
    float DistanceFromSplineThreshold; // 0x358
    float SplineTrackingPointHeadstartDistance; // 0x35c
    float TicksForPredictedLocation; // 0x360
    bool bKeepWithinDistanceOfPlayer; // 0x364
    char pad_365[0x3];
    float DistanceFromPlayerWaitThreshold; // 0x368
    float DistanceFromPlayerSlowDownThreshold; // 0x36c
    float PlayerDistanceThresholdChangeDistance; // 0x370
    char pad_374[0x4];
    FRuntimeFloatCurve DistanceFromPlayerToTargetSpeedMultiplierCurve; // 0x378
    FRuntimeFloatCurve DistanceFromPlayerToMaxSpeedMultiplierCurve; // 0x400
    ACreature_Character* CreatureCharacter; // 0x488
    ANPC_Character* RiderCharacter; // 0x490
    UCreature_MountComponent* CreatureMountComponent; // 0x498
    UIcarus3DMovementComponent* FlightMovementComponent; // 0x4a0
    UCreature_PathFollowingComponent* CreaturePathFollowingComponent; // 0x4a8
    char pad_4b0[0x8];
    APathNode* PathNode; // 0x4b8
    APathNode* NextPathNode; // 0x4c0
    char pad_4c8[0x18];
    ANPC_Spline* Spline; // 0x4e0
    char pad_4e8[0x18];
    static AMountedAI_Controller* StaticClass();
    void StartMovingToPathNode(APathNode* InPathNode);
    void StartMoving();
}; // Size: 0x500
#pragma pack(pop)
