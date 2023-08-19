#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECreatureTargetPredictionLookAheadOption : int32_t {
    FromServiceActivation = 0,
    Fixed = 1,
    ECreatureTargetPredictionLookAheadOption_MAX = 2,
};
#pragma pack(pop)
