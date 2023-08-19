#pragma once
#include <cstdint>
#include "FVector4.hpp"
#pragma pack(push, 1)
struct FFluidSimEmitterParams {
    float EmitterMultiplier; // 0x0
    char pad_4[0xc];
    FVector4 EmitterDir; // 0x10
    float EmitterBias; // 0x20
    float MotionVectorStrength; // 0x24
    char pad_28[0x18];
}; // Size: 0x40
#pragma pack(pop)
