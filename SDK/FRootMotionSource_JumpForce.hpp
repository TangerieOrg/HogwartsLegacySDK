#pragma once
#include <cstdint>
#include "FRootMotionSource.hpp"
#include "FRotator.hpp"
class UCurveVector;
class UCurveFloat;
#pragma pack(push, 1)
struct FRootMotionSource_JumpForce : public FRootMotionSource {
    char pad_a0[0x4];
    float Distance; // 0xa4
    float Height; // 0xa8
    bool bDisableTimeout; // 0xac
    char pad_ad[0x3];
    UCurveVector* PathOffsetCurve; // 0xb0
    UCurveFloat* TimeMappingCurve; // 0xb8
    char pad_c0[0x10];
}; // Size: 0xd0
#pragma pack(pop)
