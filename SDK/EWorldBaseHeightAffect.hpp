#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EWorldBaseHeightAffect : uint8_t {
    Clouds = 0,
    ExponentialHeightFog = 1,
    Atmosphere = 2,
    EWorldBaseHeightAffect_MAX = 3,
};
#pragma pack(pop)
