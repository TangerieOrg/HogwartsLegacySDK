#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAnimCurveType : uint8_t {
    AttributeCurve = 0,
    MaterialCurve = 1,
    MorphTargetCurve = 2,
    MaxAnimCurveType = 3,
    EAnimCurveType_MAX = 4,
};
#pragma pack(pop)
