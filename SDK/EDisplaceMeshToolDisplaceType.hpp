#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EDisplaceMeshToolDisplaceType : uint8_t {
    Constant = 0,
    RandomNoise = 1,
    PerlinNoise = 2,
    DisplacementMap = 3,
    SineWave = 4,
    EDisplaceMeshToolDisplaceType_MAX = 5,
};
#pragma pack(pop)
