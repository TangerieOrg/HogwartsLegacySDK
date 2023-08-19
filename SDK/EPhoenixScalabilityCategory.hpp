#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EPhoenixScalabilityCategory : uint8_t {
    ViewDistance = 0,
    AntiAliasing = 1,
    Shadow = 2,
    PostProcess = 3,
    Texture = 4,
    Effects = 5,
    Foliage = 6,
    Shading = 7,
    Volumetrics = 8,
    Sky = 9,
    Population = 10,
    EPhoenixScalabilityCategory_MAX = 11,
};
#pragma pack(pop)
