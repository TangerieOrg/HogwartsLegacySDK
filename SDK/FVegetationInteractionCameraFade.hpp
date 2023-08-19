#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FVegetationInteractionCameraFade {
    char pad_0[0x8];
    float CapsuleInnerRadiusAtCamera; // 0x8
    float CapsuleOuterRadiusAtCamera; // 0xc
    float CapsuleInnerRadiusAtTarget; // 0x10
    float CapsuleOuterRadiusAtTarget; // 0x14
    float FadeFalloffPower; // 0x18
    float AspectRatio; // 0x1c
    float Strength; // 0x20
    float MinimumVegetationHeight; // 0x24
    float PlayerZOffset; // 0x28
    float TargetZOffset; // 0x2c
    float TargetRelativeDistanceMeters; // 0x30
    float PlayerTargetLerp; // 0x34
}; // Size: 0x38
#pragma pack(pop)
