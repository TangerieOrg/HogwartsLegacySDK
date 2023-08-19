#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EDrawPolyPathOutputMode : int32_t {
    Ribbon = 0,
    Extrusion = 1,
    Ramp = 2,
    EDrawPolyPathOutputMode_MAX = 3,
};
#pragma pack(pop)
