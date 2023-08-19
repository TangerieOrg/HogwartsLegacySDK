#pragma once
#include <cstdint>
#include "UAmbulatory_MovementComponent.hpp"
class UPhysicsAsset;
class USkeletalMeshComponent;
#pragma pack(push, 1)
class UBiped_MovementComponent : public UAmbulatory_MovementComponent {
public:
    bool bEnableStickyLedges; // 0xfb0
    char pad_fb1[0x3];
    float MaxSpeedForStickyLedges; // 0xfb4
    char pad_fb8[0x78];
    bool bAllowLanding; // 0x1030
    char pad_1031[0x3];
    float DefaultWalkableFloorAngle; // 0x1034
    float FallingWalkableFloorAngle; // 0x1038
    float MaxFloorAngleForMovement; // 0x103c
    TArray<USkeletalMeshComponent*> CollidingCloths; // 0x1040
    static UBiped_MovementComponent* StaticClass();
}; // Size: 0x1050
#pragma pack(pop)
