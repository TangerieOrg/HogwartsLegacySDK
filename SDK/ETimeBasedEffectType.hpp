#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ETimeBasedEffectType : uint8_t {
    UnaffectedByTimeCurve = 0,
    TimeCurveEvaluatedByCurrentTime = 1,
    TimeCurveEvaluatedByNormalizedTime = 2,
    ETimeBasedEffectType_MAX = 3,
};
#pragma pack(pop)
