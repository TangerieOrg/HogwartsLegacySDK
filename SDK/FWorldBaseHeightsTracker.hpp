#pragma once
#include <cstdint>
#include "FWorldBaseHeights.hpp"
#pragma pack(push, 1)
struct FWorldBaseHeightsTracker : public FWorldBaseHeights {
    int32_t Force; // 0xc
}; // Size: 0x10
#pragma pack(pop)
