#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FPhysicalAnimationData {
    FName BodyName; // 0x0
    uint8_t bIsLocalSimulation : 1; // 0x8
    uint8_t pad_bitfield_8_1 : 7;
    char pad_9[0x3];
    float OrientationStrength; // 0xc
    float AngularVelocityStrength; // 0x10
    float PositionStrength; // 0x14
    float VelocityStrength; // 0x18
    float MaxLinearForce; // 0x1c
    float MaxAngularForce; // 0x20
}; // Size: 0x24
#pragma pack(pop)
