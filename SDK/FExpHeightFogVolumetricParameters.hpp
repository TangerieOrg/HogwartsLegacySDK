#pragma once
#include <cstdint>
#include "FColor.hpp"
#include "FLinearColor.hpp"
#pragma pack(push, 1)
struct FExpHeightFogVolumetricParameters {
    bool bVolumetricFog; // 0x0
    char pad_1[0x3];
    float VolumetricFogScatteringDistribution; // 0x4
    FColor VolumetricFogAlbedo; // 0x8
    FLinearColor VolumetricFogEmissive; // 0xc
    float VolumetricFogExtinctionScale; // 0x1c
    float VolumetricFogDistance; // 0x20
    float OutsideVolumeSunMultiplier; // 0x24
    float VolumetricInscatteringContribution; // 0x28
    float VolumetricDirectionalInscatteringContribution; // 0x2c
    float VolumetricFogHeightFogNearStartDistance; // 0x30
    float VolumetricFogHeightFogNearFullDistance; // 0x34
    float VolumetricFogHeightFogColorationBlendStartDistance; // 0x38
    float VolumetricFogHeightFogColorationBlendFullDistance; // 0x3c
    float VolumetricFogHeightFogColorationBlendStrength; // 0x40
    float VolumetricFogDepthDistributionScale; // 0x44
    float VolumetricFogHistoryWeight; // 0x48
    float VolumetricFogHistoryWeightFarFog; // 0x4c
    bool bOverrideLightColorsWithFogInscatteringColors; // 0x50
    char pad_51[0x3];
}; // Size: 0x54
#pragma pack(pop)
