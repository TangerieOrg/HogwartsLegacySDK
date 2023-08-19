#pragma once
#include <cstdint>
#include "FStaticParameterBase.hpp"
#pragma pack(push, 1)
struct FStaticTerrainLayerWeightParameter : public FStaticParameterBase {
    int32_t WeightmapIndex; // 0x24
    bool bWeightBasedBlend; // 0x28
    char pad_29[0x3];
}; // Size: 0x2c
#pragma pack(pop)
