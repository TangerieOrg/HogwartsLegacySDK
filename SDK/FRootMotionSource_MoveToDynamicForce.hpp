#pragma once
#include <cstdint>
#include "FRootMotionSource.hpp"
#include "FVector.hpp"
class UCurveVector;
class UCurveFloat;
#pragma pack(push, 1)
struct FRootMotionSource_MoveToDynamicForce : public FRootMotionSource {
    char pad_a0[0x4];
    FVector InitialTargetLocation; // 0xa4
    FVector TargetLocation; // 0xb0
    bool bRestrictSpeedToExpected; // 0xbc
    char pad_bd[0x3];
    UCurveVector* PathOffsetCurve; // 0xc0
    UCurveFloat* TimeMappingCurve; // 0xc8
}; // Size: 0xd0
#pragma pack(pop)
