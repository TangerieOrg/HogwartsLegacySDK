#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EUtilitySelectionMethod : uint8_t {
    FirstScore = 0,
    HighestScore = 1,
    WeightedRandom = 2,
    EUtilitySelectionMethod_MAX = 3,
};
#pragma pack(pop)
