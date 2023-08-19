#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EClothMassMode : uint8_t {
    UniformMass = 0,
    TotalMass = 1,
    Density = 2,
    MaxClothMassMode = 3,
    EClothMassMode_MAX = 4,
};
#pragma pack(pop)
