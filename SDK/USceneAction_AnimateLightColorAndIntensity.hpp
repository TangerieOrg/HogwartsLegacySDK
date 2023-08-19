#pragma once
#include <cstdint>
#include "EAnimateLightColorIntensityBlend.hpp"
#include "FRuntimeCurveLinearColor.hpp"
#include "FRuntimeFloatCurve.hpp"
#include "USceneAction_AnimateLightColorIntensity.hpp"
#pragma pack(push, 1)
class USceneAction_AnimateLightColorAndIntensity : public USceneAction_AnimateLightColorIntensity {
public:
    FRuntimeCurveLinearColor Color; // 0xa8
    FRuntimeFloatCurve Intensity; // 0x2b0
    EAnimateLightColorIntensityBlend ColorBlend; // 0x338
    EAnimateLightColorIntensityBlend IntensityBlend; // 0x339
    char pad_33a[0x6];
    static USceneAction_AnimateLightColorAndIntensity* StaticClass();
}; // Size: 0x340
#pragma pack(pop)
