#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EModifyCurveApplyMode : uint8_t {
    Add = 0,
    Scale = 1,
    Blend = 2,
    WeightedMovingAverage = 3,
    RemapCurve = 4,
    EModifyCurveApplyMode_MAX = 5,
};
#pragma pack(pop)
