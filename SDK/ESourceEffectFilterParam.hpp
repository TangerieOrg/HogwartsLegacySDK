#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESourceEffectFilterParam : uint8_t {
    FilterFrequency = 0,
    FilterResonance = 1,
    Count = 2,
    ESourceEffectFilterParam_MAX = 3,
};
#pragma pack(pop)
