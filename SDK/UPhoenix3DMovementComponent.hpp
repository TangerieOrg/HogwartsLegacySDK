#pragma once
#include <cstdint>
#include "FRootMotionMovementParams.hpp"
#include "UIcarus3DMovementComponent.hpp"
#pragma pack(push, 1)
class UPhoenix3DMovementComponent : public UIcarus3DMovementComponent {
public:
    bool bEnableRootMotion; // 0x250
    uint8_t bEnablePhysicsInteraction : 1; // 0x251
    uint8_t bPushForceScaledToMass : 1; // 0x251
    uint8_t bPushForceUsingZOffset : 1; // 0x251
    uint8_t bScalePushForceToVelocity : 1; // 0x251
    uint8_t pad_bitfield_251_4 : 4;
    char pad_252[0x2];
    float InitialPushForceFactor; // 0x254
    float PushForceFactor; // 0x258
    float PushForcePointZOffsetFactor; // 0x25c
    FRootMotionMovementParams RootMotionParams; // 0x260
    char pad_2a0[0x3b0];
    static UPhoenix3DMovementComponent* StaticClass();
    void OnFullRagdollStart();
}; // Size: 0x650
#pragma pack(pop)
