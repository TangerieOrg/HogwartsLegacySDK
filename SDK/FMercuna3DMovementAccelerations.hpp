#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FMercuna3DMovementAccelerations {
    float Forward; // 0x0
    float Backward; // 0x4
    float Sideways; // 0x8
}; // Size: 0xc
#pragma pack(pop)
