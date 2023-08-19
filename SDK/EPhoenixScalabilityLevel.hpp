#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EPhoenixScalabilityLevel : uint8_t {
    Low = 0,
    Medium = 1,
    High = 2,
    Epic = 3,
    Cinematic = 4,
    EPhoenixScalabilityLevel_MAX = 5,
};
#pragma pack(pop)
