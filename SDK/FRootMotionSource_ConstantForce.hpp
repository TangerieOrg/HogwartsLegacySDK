#pragma once
#include <cstdint>
#include "FRootMotionSource.hpp"
#include "FVector.hpp"
class UCurveFloat;
#pragma pack(push, 1)
struct FRootMotionSource_ConstantForce : public FRootMotionSource {
    char pad_a0[0x8];
    UCurveFloat* StrengthOverTime; // 0xa8
}; // Size: 0xb0
#pragma pack(pop)
