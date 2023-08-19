#pragma once
#include <cstdint>
#include "EAnimateLightColorIntensityBlend.hpp"
#include "FRuntimeFloatCurve.hpp"
#include "USceneAction_AnimateLightColorIntensity.hpp"
#pragma pack(push, 1)
class USceneAction_AnimateLightIntensity : public USceneAction_AnimateLightColorIntensity {
public:
    FRuntimeFloatCurve Intensity; // 0xa8
    float Default; // 0x130
    EAnimateLightColorIntensityBlend Blend; // 0x134
    char pad_135[0x3];
    static USceneAction_AnimateLightIntensity* StaticClass();
}; // Size: 0x138
#pragma pack(pop)
