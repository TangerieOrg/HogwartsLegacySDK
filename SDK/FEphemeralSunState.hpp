#pragma once
#include <cstdint>
#include "FTopographicDirection.hpp"
#pragma pack(push, 1)
struct FEphemeralSunState : public FTopographicDirection {
    float DiskScale; // 0x14
    float Visibility; // 0x18
}; // Size: 0x1c
#pragma pack(pop)
