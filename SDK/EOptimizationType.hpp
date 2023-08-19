#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EOptimizationType : uint8_t {
    OT_NumOfTriangles = 0,
    OT_MaxDeviation = 1,
    OT_MAX = 2,
};
#pragma pack(pop)
