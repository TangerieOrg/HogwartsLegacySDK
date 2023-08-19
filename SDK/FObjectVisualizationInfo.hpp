#pragma once
#include <cstdint>
#include "FColor.hpp"
#pragma pack(push, 1)
struct FObjectVisualizationInfo {
    bool bDrawObject; // 0x0
    char pad_1[0x3];
    FColor ObjectActiveColor; // 0x4
    FColor ObjectInactiveColor; // 0x8
}; // Size: 0xc
#pragma pack(pop)
