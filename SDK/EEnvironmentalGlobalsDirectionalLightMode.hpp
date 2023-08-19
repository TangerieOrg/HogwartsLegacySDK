#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnvironmentalGlobalsDirectionalLightMode : uint8_t {
    Unknown = 0,
    Sun = 1,
    Moon = 2,
    EEnvironmentalGlobalsDirectionalLightMode_MAX = 3,
};
#pragma pack(pop)
