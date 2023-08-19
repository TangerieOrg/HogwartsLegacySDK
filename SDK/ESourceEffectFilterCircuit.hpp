#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESourceEffectFilterCircuit : uint8_t {
    OnePole = 0,
    StateVariable = 1,
    Ladder = 2,
    Count = 3,
    ESourceEffectFilterCircuit_MAX = 4,
};
#pragma pack(pop)
