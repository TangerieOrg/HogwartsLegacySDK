#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FGroundSwarmBurrowingParameters {
    float BurrowingMinDelay; // 0x0
    float BurrowingMaxDelay; // 0x4
    float BurrowingForce; // 0x8
    float BurrowingMaxSpeed; // 0xc
    float SwarmForceFactor; // 0x10
    float SurfaceVelocityDampening; // 0x14
    float BurrowingDeathTimeout; // 0x18
    float DeathLeapTimeout; // 0x1c
    float DeathLeapImpulse; // 0x20
    float DeathLeapThresholdAngleDegrees; // 0x24
    float FreefallingDeathDuration; // 0x28
    bool bAlignToVelocity; // 0x2c
    char pad_2d[0x3];
}; // Size: 0x30
#pragma pack(pop)
