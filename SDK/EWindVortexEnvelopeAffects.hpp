#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EWindVortexEnvelopeAffects : uint8_t {
    Speed = 0,
    Height = 1,
    Radius = 2,
    Strength = 3,
    EWindVortexEnvelopeAffects_MAX = 4,
};
#pragma pack(pop)
