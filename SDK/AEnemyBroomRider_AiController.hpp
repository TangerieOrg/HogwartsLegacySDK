#pragma once
#include <cstdint>
#include "AController.hpp"
#include "EBroomEnemyState\Type.hpp"
class UFlyingBroomPhysics;
class UScheduledEntity;
class ACharacter;
class UFlyingBroomPhysicsScratch_Spline;
#pragma pack(push, 1)
class AEnemyBroomRider_AiController : public AController {
public:
    UFlyingBroomPhysics* BroomPhysics; // 0x2c0
    EBroomEnemyState::Type BroomEnemyState; // 0x2c8
    bool OverrideYaw; // 0x2c9
    char pad_2ca[0x16];
    UScheduledEntity* OwnedScheduledEntity; // 0x2e0
    static AEnemyBroomRider_AiController* StaticClass();
    void StopAndWaitForPlayer(float CriticalDistance);
    void SetBroomYaw(float Yaw);
    void ResumeBroom();
    void PauseBroom();
    void GoToPointOnSpline(int32_t Point);
    float GetDistanceFromPlayer(UFlyingBroomPhysicsScratch_Spline* SplinePhysicsScratch, ACharacter* Player);
    void BarrelRollRight();
    void BarrelRollLeft();
}; // Size: 0x2e8
#pragma pack(pop)
