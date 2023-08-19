#pragma once
#include <cstdint>
#include "EAnimateLightColorIntensityBlend.hpp"
#include "FLinearColor.hpp"
#include "FRuntimeCurveLinearColor.hpp"
#include "USceneAction_AnimateLightColorIntensity.hpp"
#pragma pack(push, 1)
class USceneAction_AnimateLightColor : public USceneAction_AnimateLightColorIntensity {
public:
    FRuntimeCurveLinearColor Color; // 0xa8
    FLinearColor Default; // 0x2b0
    EAnimateLightColorIntensityBlend Blend; // 0x2c0
    char pad_2c1[0x7];
    static USceneAction_AnimateLightColor* StaticClass();
}; // Size: 0x2c8
#pragma pack(pop)
