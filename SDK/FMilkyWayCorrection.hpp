#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FMilkyWayCorrection {
    FVector Rotation; // 0x0
    float VCorrect; // 0xc
}; // Size: 0x10
#pragma pack(pop)
