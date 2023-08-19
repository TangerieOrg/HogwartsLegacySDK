#pragma once
#include <cstdint>
#include "UPawnMovementComponent.hpp"
class UFlyingBroomPhysics;
class UFlyingBroomStats;
class UFlyingBroomPhysicsScratch;
#pragma pack(push, 1)
class UFlyingBroomMovementComponent : public UPawnMovementComponent {
public:
    int32_t MaxSimulationIterations; // 0x150
    float MaxSimulationTimeStep; // 0x154
    UFlyingBroomPhysics* FlyingBroomPhysics; // 0x158
    UFlyingBroomStats* FlyingBroomStats; // 0x160
    bool bClearAccumulatedForces; // 0x168
    char pad_169[0x7];
    TArray<UFlyingBroomPhysics*> FlyingBroomPhysicsStack; // 0x170
    UFlyingBroomPhysicsScratch* FlyingBroomPhysicsScratch; // 0x180
    char pad_188[0x198];
    static UFlyingBroomMovementComponent* StaticClass();
}; // Size: 0x320
#pragma pack(pop)
