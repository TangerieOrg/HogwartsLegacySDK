#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FFlockingSpeedMap {
    float MinSpeedMS; // 0x0
    float MaxSpeedMS; // 0x4
    float OutputLow; // 0x8
    float OutputHigh; // 0xc
}; // Size: 0x10
#pragma pack(pop)
