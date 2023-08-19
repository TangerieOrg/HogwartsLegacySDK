#pragma once
#include <cstdint>
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UActorComponent.hpp"
class UPhysicsHandleComponent;
class UPrimitiveComponent;
#pragma pack(push, 1)
class UTransfigurationPlacementComponent : public UActorComponent {
public:
    float PhysicsHandleLinearStiffness; // 0xc8
    float PhysicsHandleLinearDamping; // 0xcc
    bool bConstrainAngular; // 0xd0
    char pad_d1[0x3];
    float PhysicsHandleAngularStiffness; // 0xd4
    float PhysicsHandleAngularDamping; // 0xd8
    float PhysicsHandleInterpolationSpeed; // 0xdc
    float TransitionDuration; // 0xe0
    char pad_e4[0x4];
    UPhysicsHandleComponent* PhysicsHandleComponent; // 0xe8
    char pad_f0[0x10];
    static UTransfigurationPlacementComponent* StaticClass();
    void SetTargetTransform(FTransform InTransform);
    void GrabComponent(UPrimitiveComponent* InComponent, FName InBoneName, FVector InGrabLocation);
    FTransform GetTargetTransform();
}; // Size: 0x100
#pragma pack(pop)
