#pragma once
#include <cstdint>
#include "FLandscapePointData.hpp"
#pragma pack(push, 1)
struct FLandscapeRoadData {
    TArray<FLandscapePointData> RoadPoints; // 0x0
}; // Size: 0x10
#pragma pack(pop)
