#pragma once
#include <cstdint>
#include "FColor.hpp"
#pragma pack(push, 1)
struct FStatColorMapEntry {
    float In; // 0x0
    FColor Out; // 0x4
}; // Size: 0x8
#pragma pack(pop)
