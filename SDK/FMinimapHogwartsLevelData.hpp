#pragma once
#include <cstdint>
#include "FTableRowBase.hpp"
#pragma pack(push, 1)
struct FMinimapHogwartsLevelData : public FTableRowBase {
    float BottomZValue; // 0x8
    char pad_c[0x4];
}; // Size: 0x10
#pragma pack(pop)
