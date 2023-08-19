#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESpaceCurveControlPointTransformMode : int32_t {
    Shared = 0,
    PerVertex = 1,
    ESpaceCurveControlPointTransformMode_MAX = 2,
};
#pragma pack(pop)
