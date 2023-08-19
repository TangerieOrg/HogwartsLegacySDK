#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FGroundSwarmInitialShapeSettings {
    float RandomConeHalfAngle; // 0x0
    float Offset; // 0x4
    bool bRefreshOnBeginPlay; // 0x8
    char pad_9[0x3];
}; // Size: 0xc
#pragma pack(pop)
