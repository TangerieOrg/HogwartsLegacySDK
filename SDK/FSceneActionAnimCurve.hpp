#pragma once
#include <cstdint>
#include "FSkeletonCurveReference.hpp"
class UFloatProvider;
#pragma pack(push, 1)
struct FSceneActionAnimCurve {
    FSkeletonCurveReference CurveName; // 0x0
    UFloatProvider* Value; // 0x8
}; // Size: 0x10
#pragma pack(pop)
