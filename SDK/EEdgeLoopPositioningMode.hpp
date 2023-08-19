#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEdgeLoopPositioningMode : int32_t {
    Even = 0,
    ProportionOffset = 1,
    DistanceOffset = 2,
    EEdgeLoopPositioningMode_MAX = 3,
};
#pragma pack(pop)
