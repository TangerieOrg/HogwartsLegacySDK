#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESubmixFilterAlgorithm : uint8_t {
    OnePole = 0,
    StateVariable = 1,
    Ladder = 2,
    Count = 3,
    ESubmixFilterAlgorithm_MAX = 4,
};
#pragma pack(pop)
