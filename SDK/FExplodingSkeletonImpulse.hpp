#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FExplodingSkeletonImpulse {
    FVector ImpulseOrigin; // 0x0
    FVector LinearImpulse; // 0xc
    bool bUseLinearImpulseOrigin; // 0x18
    char pad_19[0x3];
    float RadialImpulseRadius; // 0x1c
    float RadialImpulseStrength; // 0x20
    bool bRadialImpulseFalloff; // 0x24
    bool bUseSkeletalCentroidAsImpulseOrigin; // 0x25
    char pad_26[0x2];
}; // Size: 0x28
#pragma pack(pop)
