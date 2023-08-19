#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UDataAsset.hpp"
class UFlyingBroomMovementComponent;
class UFlyingBroomPhysicsScratch;
#pragma pack(push, 1)
class UFlyingBroomPhysics : public UDataAsset {
public:
    bool bDebugDraw; // 0x30
    bool bDisablePhysics; // 0x31
    char pad_32[0x6];
    static UFlyingBroomPhysics* StaticClass();
    void PhysicsUpdate(UFlyingBroomMovementComponent* FlyingBroomMovementComponent, UFlyingBroomPhysicsScratch* Scratch, float DeltaTime);
    void PhysicsRemoved(UFlyingBroomMovementComponent* FlyingBroomMovementComponent, UFlyingBroomPhysicsScratch* Scratch);
    void PhysicsPostIteration(UFlyingBroomMovementComponent* FlyingBroomMovementComponent, UFlyingBroomPhysicsScratch* Scratch, FVector& Adjusted, float timeTick);
    FVector PhysicsIteration(UFlyingBroomMovementComponent* FlyingBroomMovementComponent, UFlyingBroomPhysicsScratch* Scratch, float timeTick);
    void PhysicsAdded(UFlyingBroomMovementComponent* FlyingBroomMovementComponent, UFlyingBroomPhysicsScratch* Scratch);
    UFlyingBroomPhysicsScratch* CreateScratch(UFlyingBroomMovementComponent* InOwner);
    void AnimationUpdate(UFlyingBroomMovementComponent* FlyingBroomMovementComponent, UFlyingBroomPhysicsScratch* Scratch);
}; // Size: 0x38
#pragma pack(pop)
