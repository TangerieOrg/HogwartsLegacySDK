#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FCachedStationPath {
    TArray<FVector> PathPoints; // 0x0
    float PathLength; // 0x10
    char pad_14[0x4];
}; // Size: 0x18
#pragma pack(pop)
