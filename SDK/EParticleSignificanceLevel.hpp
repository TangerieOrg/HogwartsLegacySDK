#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EParticleSignificanceLevel : uint8_t {
    Low = 0,
    Medium = 1,
    High = 2,
    Critical = 3,
    Num = 4,
    EParticleSignificanceLevel_MAX = 5,
};
#pragma pack(pop)
