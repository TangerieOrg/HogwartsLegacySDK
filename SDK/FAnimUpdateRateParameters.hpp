#pragma once
#include <cstdint>
#include "EUpdateRateShiftBucket.hpp"
#pragma pack(push, 1)
struct FAnimUpdateRateParameters {
    char pad_0[0x1];
    EUpdateRateShiftBucket ShiftBucket; // 0x1
    uint8_t bInterpolateSkippedFrames : 1; // 0x2
    uint8_t bShouldUseLodMap : 1; // 0x2
    uint8_t bShouldUseMinLod : 1; // 0x2
    uint8_t bSkipUpdate : 1; // 0x2
    uint8_t bSkipEvaluation : 1; // 0x2
    uint8_t bForceTrailMode : 1; // 0x2
    uint8_t pad_bitfield_2_6 : 2;
    char pad_3[0x1];
    int32_t ForceRate; // 0x4
    int32_t UpdateRate; // 0x8
    int32_t EvaluationRate; // 0xc
    float TickedPoseOffestTime; // 0x10
    float AdditionalTime; // 0x14
    char pad_18[0x4];
    int32_t BaseNonRenderedUpdateRate; // 0x1c
    int32_t MaxEvalRateForInterpolation; // 0x20
    char pad_24[0x4];
    TArray<float> BaseVisibleDistanceFactorThesholds; // 0x28
    char pad_38[0x50];
    int32_t SkippedUpdateFrames; // 0x88
    int32_t SkippedEvalFrames; // 0x8c
}; // Size: 0x90
#pragma pack(pop)
