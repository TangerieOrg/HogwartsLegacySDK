#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EGameEventLocation : uint8_t {
    None = 0,
    Caster = 1,
    Impact = 2,
    Target = 3,
    Destination = 4,
    EGameEventLocation_MAX = 5,
};
#pragma pack(pop)
