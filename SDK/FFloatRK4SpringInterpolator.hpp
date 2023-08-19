#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FFloatRK4SpringInterpolator {
    float StiffnessConstant; // 0x0
    float DampeningRatio; // 0x4
}; // Size: 0x8
#pragma pack(pop)
