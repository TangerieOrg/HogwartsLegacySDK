#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EHairInterpolationWeight : uint8_t {
    Parametric = 0,
    Root = 1,
    Index = 2,
    Unknown = 3,
    EHairInterpolationWeight_MAX = 4,
};
#pragma pack(pop)
