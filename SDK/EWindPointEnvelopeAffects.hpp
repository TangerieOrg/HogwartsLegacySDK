#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EWindPointEnvelopeAffects : uint8_t {
    Speed = 0,
    Radius = 1,
    Strength = 2,
    EWindPointEnvelopeAffects_MAX = 3,
};
#pragma pack(pop)
