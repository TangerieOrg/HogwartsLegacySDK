#pragma once
#include <cstdint>
#include "FVolumetricCloudsPresetParams.hpp"
#pragma pack(push, 1)
struct FVolumetricCloudsPresetParameters : public FVolumetricCloudsPresetParams {
    float HeightOffset; // 0x108
    char pad_10c[0x4];
}; // Size: 0x110
#pragma pack(pop)
