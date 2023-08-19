#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EDynamicObjectVolumeSpawnDistributionType : uint8_t {
    Uniform = 0,
    UniformWithShuffle = 1,
    VolumeDistribution = 2,
    VolumeDistributionWithShuffle = 3,
    EDynamicObjectVolumeSpawnDistributionType_MAX = 4,
};
#pragma pack(pop)
