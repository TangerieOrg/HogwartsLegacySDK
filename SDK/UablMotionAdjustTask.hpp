#pragma once
#include <cstdint>
#include "EAlphaBlendOption.hpp"
#include "EMovementMode.hpp"
#include "FAlphaBlend.hpp"
#include "FVector.hpp"
#include "UAblAbilityTask.hpp"
class UablMotionAdjustTargetLocationGetter;
#pragma pack(push, 1)
class UablMotionAdjustTask : public UAblAbilityTask {
public:
    UablMotionAdjustTargetLocationGetter* TargetLocationGetter; // 0x70
    bool bTrackTarget; // 0x78
    bool bUseRootMotionForPrediction; // 0x79
    bool bIgnoreMeshScale; // 0x7a
    char pad_7b[0x1];
    float InterceptTime; // 0x7c
    FVector InterceptOffset; // 0x80
    bool bLimitMaxImpulse; // 0x8c
    char pad_8d[0x3];
    float MaxImpulse; // 0x90
    EAlphaBlendOption AdjustCurve; // 0x94
    char pad_95[0x3];
    FAlphaBlend BlendIn; // 0x98
    bool bCanAdjustZAxis; // 0xc8
    bool bGuaranteeOnTargetAtTaskEnd; // 0xc9
    EMovementMode TaskEndMovementMode; // 0xca
    bool bDebugDrawEnabled; // 0xcb
    bool bDebugDrawTranslationCorrection; // 0xcc
    bool bDebugDrawTarget; // 0xcd
    bool bDebugDrawRootMotion; // 0xce
    bool bDebugDrawTransform; // 0xcf
    static UablMotionAdjustTask* StaticClass();
}; // Size: 0xd0
#pragma pack(pop)
