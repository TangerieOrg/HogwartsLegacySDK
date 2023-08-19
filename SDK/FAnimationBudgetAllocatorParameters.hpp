#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FAnimationBudgetAllocatorParameters {
    float BudgetInMs; // 0x0
    float MinQuality; // 0x4
    int32_t MaxTickRate; // 0x8
    float WorkUnitSmoothingSpeed; // 0xc
    float AlwaysTickFalloffAggression; // 0x10
    float InterpolationFalloffAggression; // 0x14
    int32_t InterpolationMaxRate; // 0x18
    int32_t MaxInterpolatedComponents; // 0x1c
    float InterpolationTickMultiplier; // 0x20
    float InitialEstimatedWorkUnitTimeMs; // 0x24
    int32_t MaxTickedOffsreenComponents; // 0x28
    int32_t StateChangeThrottleInFrames; // 0x2c
    float BudgetFactorBeforeReducedWork; // 0x30
    float BudgetFactorBeforeReducedWorkEpsilon; // 0x34
    float BudgetPressureSmoothingSpeed; // 0x38
    int32_t ReducedWorkThrottleMinInFrames; // 0x3c
    int32_t ReducedWorkThrottleMaxInFrames; // 0x40
    float BudgetFactorBeforeAggressiveReducedWork; // 0x44
    int32_t ReducedWorkThrottleMaxPerFrame; // 0x48
    float BudgetPressureBeforeEmergencyReducedWork; // 0x4c
}; // Size: 0x50
#pragma pack(pop)
