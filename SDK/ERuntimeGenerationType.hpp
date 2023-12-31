#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ERuntimeGenerationType : uint8_t {
    Static = 0,
    DynamicModifiersOnly = 1,
    Dynamic = 2,
    LegacyGeneration = 3,
    ERuntimeGenerationType_MAX = 4,
};
#pragma pack(pop)
