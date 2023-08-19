#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EVolumeLightingMethod : uint8_t {
    VLM_VolumetricLightmap = 0,
    VLM_SparseVolumeLightingSamples = 1,
    VLM_MAX = 2,
};
#pragma pack(pop)
