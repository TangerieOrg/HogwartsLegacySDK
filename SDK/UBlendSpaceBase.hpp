#pragma once
#include <cstdint>
#include "ENotifyTriggerMode\Type.hpp"
#include "FBlendParameter.hpp"
#include "FBlendSample.hpp"
#include "FEditorElement.hpp"
#include "FInterpolationParameter.hpp"
#include "FPerBoneInterpolation.hpp"
#include "UAnimationAsset.hpp"
#pragma pack(push, 1)
class UBlendSpaceBase : public UAnimationAsset {
public:
    char pad_80[0x8];
    bool bRotationBlendInMeshSpace; // 0x88
    char pad_89[0x3];
    float AnimLength; // 0x8c
    FInterpolationParameter InterpolationParam[3]; // 0x90
    float TargetWeightInterpolationSpeedPerSec; // 0xa8
    ENotifyTriggerMode::Type NotifyTriggerMode; // 0xac
    char pad_ad[0x3];
    FBlendParameter BlendParameters[3]; // 0xb0
    TArray<FBlendSample> SampleData; // 0x110
    TArray<FPerBoneInterpolation> PerBoneBlend; // 0x120
    int32_t SampleIndexWithMarkers; // 0x130
    char pad_134[0x4];
    TArray<FEditorElement> GridSamples; // 0x138
    static UBlendSpaceBase* StaticClass();
}; // Size: 0x148
#pragma pack(pop)
