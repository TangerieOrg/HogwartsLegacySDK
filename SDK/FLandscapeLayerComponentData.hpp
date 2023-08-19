#pragma once
#include <cstdint>
#include "FHeightmapData.hpp"
#include "FWeightmapData.hpp"
#pragma pack(push, 1)
struct FLandscapeLayerComponentData {
    FHeightmapData HeightmapData; // 0x0
    FWeightmapData WeightmapData; // 0x8
}; // Size: 0x38
#pragma pack(pop)
