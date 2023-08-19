#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ERichCurveTangentWeightMode : uint8_t {
    RCTWM_WeightedNone = 0,
    RCTWM_WeightedArrive = 1,
    RCTWM_WeightedLeave = 2,
    RCTWM_WeightedBoth = 3,
    RCTWM_MAX = 4,
};
#pragma pack(pop)
