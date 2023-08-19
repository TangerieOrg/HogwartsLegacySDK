#pragma once
#include <cstdint>
#include "ERBFDistanceMethod.hpp"
#include "ERBFFunctionType.hpp"
#include "FPoseDriverTransform.hpp"
#include "FRichCurve.hpp"
#include "FRotator.hpp"
#pragma pack(push, 1)
struct FPoseDriverTarget {
    TArray<FPoseDriverTransform> BoneTransforms; // 0x0
    FRotator TargetRotation; // 0x10
    float TargetScale; // 0x1c
    ERBFDistanceMethod DistanceMethod; // 0x20
    ERBFFunctionType FunctionType; // 0x21
    bool bApplyCustomCurve; // 0x22
    char pad_23[0x5];
    FRichCurve CustomCurve; // 0x28
    FName DrivenName; // 0xa8
    char pad_b0[0x8];
    bool bIsHidden; // 0xb8
    char pad_b9[0x7];
}; // Size: 0xc0
#pragma pack(pop)
