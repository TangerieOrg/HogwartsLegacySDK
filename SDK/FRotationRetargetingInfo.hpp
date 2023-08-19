#pragma once
#include <cstdint>
#include "EEasingFuncType.hpp"
#include "ERotationComponent.hpp"
#include "FRuntimeFloatCurve.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRotationRetargetingInfo {
    bool bEnabled; // 0x0
    char pad_1[0xf];
    FTransform Source; // 0x10
    FTransform Target; // 0x40
    ERotationComponent RotationComponent; // 0x70
    char pad_71[0x3];
    FVector TwistAxis; // 0x74
    bool bUseAbsoluteAngle; // 0x80
    char pad_81[0x3];
    float SourceMinimum; // 0x84
    float SourceMaximum; // 0x88
    float TargetMinimum; // 0x8c
    float TargetMaximum; // 0x90
    EEasingFuncType EasingType; // 0x94
    char pad_95[0x3];
    FRuntimeFloatCurve CustomCurve; // 0x98
    bool bFlipEasing; // 0x120
    char pad_121[0x3];
    float EasingWeight; // 0x124
    bool bClamp; // 0x128
    char pad_129[0x7];
}; // Size: 0x130
#pragma pack(pop)
