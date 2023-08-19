#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECreatureTargetPredictionStraightLineReachableOption : int32_t {
    FromCurrentLocation = 0,
    FromInitialLocation = 1,
    ECreatureTargetPredictionStraightLineReachableOption_MAX = 2,
};
#pragma pack(pop)
