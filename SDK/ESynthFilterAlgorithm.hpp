#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESynthFilterAlgorithm : uint8_t {
    OnePole = 0,
    StateVariable = 1,
    Ladder = 2,
    Count = 3,
    ESynthFilterAlgorithm_MAX = 4,
};
#pragma pack(pop)
