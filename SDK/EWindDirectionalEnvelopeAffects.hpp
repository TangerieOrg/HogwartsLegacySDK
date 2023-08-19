#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EWindDirectionalEnvelopeAffects : uint8_t {
    Speed = 0,
    Strength = 1,
    EWindDirectionalEnvelopeAffects_MAX = 2,
};
#pragma pack(pop)
