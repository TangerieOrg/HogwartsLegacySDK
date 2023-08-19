#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESpaceCurveControlPointOriginMode : int32_t {
    Shared = 0,
    First = 1,
    Last = 2,
    ESpaceCurveControlPointOriginMode_MAX = 3,
};
#pragma pack(pop)
