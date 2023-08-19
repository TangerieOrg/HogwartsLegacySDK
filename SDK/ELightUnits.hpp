#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ELightUnits : uint8_t {
    Unitless = 0,
    Candelas = 1,
    Lumens = 2,
    ELightUnits_MAX = 3,
};
#pragma pack(pop)
