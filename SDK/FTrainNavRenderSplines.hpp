#pragma once
#include <cstdint>
#include "ETrainSplineDirection.hpp"
#pragma pack(push, 1)
struct FTrainNavRenderSplines {
    char pad_0[0x28];
    ETrainSplineDirection Directon; // 0x28
    char pad_29[0x7];
}; // Size: 0x30
#pragma pack(pop)
