#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FWindDetails {
    FVector Direction; // 0x0
    FVector Velocity; // 0xc
    float Speed; // 0x18
    float NormalizedSpeed; // 0x1c
}; // Size: 0x20
#pragma pack(pop)
