#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FMaterialTextureInfo {
    float SamplingScale; // 0x0
    int32_t UVChannelIndex; // 0x4
    FName TextureName; // 0x8
}; // Size: 0x10
#pragma pack(pop)
