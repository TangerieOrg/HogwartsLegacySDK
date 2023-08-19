#pragma once
#include <cstdint>
#include "FVector.hpp"
class UMaterialInterface;
#pragma pack(push, 1)
struct FMultiFX2_FootprintInfo {
    UMaterialInterface* Material; // 0x0
    FVector DecalRandomSizeMin; // 0x8
    FVector DecalRandomSizeMax; // 0x14
    bool DirectionalDecal; // 0x20
    bool FlipLeftFoot; // 0x21
    char pad_22[0x2];
    int32_t DecalFrameCount; // 0x24
    float FadeInDelay; // 0x28
    float FadeInTime; // 0x2c
    float LifeSpan; // 0x30
    float FadeTime; // 0x34
    bool bRenderAfterWeather; // 0x38
    char pad_39[0x7];
}; // Size: 0x40
#pragma pack(pop)
