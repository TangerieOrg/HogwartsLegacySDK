#pragma once
#include <cstdint>
#include "FRootMotionSource.hpp"
#include "FVector.hpp"
class UCurveVector;
#pragma pack(push, 1)
struct FRootMotionSource_MoveToForce : public FRootMotionSource {
    char pad_a0[0x4];
    FVector TargetLocation; // 0xa4
    bool bRestrictSpeedToExpected; // 0xb0
    char pad_b1[0x7];
    UCurveVector* PathOffsetCurve; // 0xb8
}; // Size: 0xc0
#pragma pack(pop)
