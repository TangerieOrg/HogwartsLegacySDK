#pragma once
#include <cstdint>
#include "EAnimInterpolationType.hpp"
#include "ERootMotionRootLock\Type.hpp"
#include "UAnimSequenceBase.hpp"
class UAnimBoneCompressionSettings;
class UAnimCurveCompressionSettings;
#pragma pack(push, 1)
class UAnimStreamable : public UAnimSequenceBase {
public:
    int32_t NumFrames; // 0xa8
    EAnimInterpolationType Interpolation; // 0xac
    char pad_ad[0x3];
    FName RetargetSource; // 0xb0
    char pad_b8[0x10];
    UAnimBoneCompressionSettings* BoneCompressionSettings; // 0xc8
    UAnimCurveCompressionSettings* CurveCompressionSettings; // 0xd0
    bool bEnableRootMotion; // 0xd8
    ERootMotionRootLock::Type RootMotionRootLock; // 0xd9
    bool bForceRootLock; // 0xda
    bool bUseNormalizedRootMotionScale; // 0xdb
    char pad_dc[0x4];
    static UAnimStreamable* StaticClass();
}; // Size: 0xe0
#pragma pack(pop)
