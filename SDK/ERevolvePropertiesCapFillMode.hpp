#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ERevolvePropertiesCapFillMode : uint8_t {
    None = 0,
    Delaunay = 1,
    EarClipping = 2,
    CenterFan = 3,
    ERevolvePropertiesCapFillMode_MAX = 4,
};
#pragma pack(pop)
