#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum SkeletalMeshOptimizationType : uint8_t {
    SMOT_NumOfTriangles = 0,
    SMOT_MaxDeviation = 1,
    SMOT_TriangleOrDeviation = 2,
    SMOT_MAX = 3,
};
#pragma pack(pop)
