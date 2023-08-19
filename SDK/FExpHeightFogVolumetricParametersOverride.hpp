#pragma once
#include <cstdint>
#include "FColor.hpp"
#include "FLinearColor.hpp"
#pragma pack(push, 1)
struct FExpHeightFogVolumetricParametersOverride {
    uint8_t bOverride_bVolumetricFog : 1; // 0x0
    uint8_t bOverride_VolumetricFogScatteringDistribution : 1; // 0x0
    uint8_t bOverride_VolumetricFogAlbedo : 1; // 0x0
    uint8_t bOverride_VolumetricFogEmissive : 1; // 0x0
    uint8_t bOverride_VolumetricFogExtinctionScale : 1; // 0x0
    uint8_t bOverride_VolumetricFogDistance : 1; // 0x0
    uint8_t bOverride_bOverrideLightColorsWithFogInscatteringColors : 1; // 0x0
    uint8_t bOverride_VolumetricFogStaticLightingScatteringIntensity : 1; // 0x0
    uint8_t bOverride_VolumetricFogDepthDistributionScale : 1; // 0x1
    uint8_t bOverride_VolumetricFogHistoryWeight : 1; // 0x1
    uint8_t bOverride_VolumetricFogHistoryWeightFarFog : 1; // 0x1
    uint8_t bOverride_OutsideVolumeSunMultiplier : 1; // 0x1
    uint8_t bOverride_VolumetricInscatteringContribution : 1; // 0x1
    uint8_t bOverride_VolumetricDirectionalInscatteringContribution : 1; // 0x1
    uint8_t bOverride_VolumetricFogHeightFogNearStartDistance : 1; // 0x1
    uint8_t bOverride_VolumetricFogHeightFogNearFullDistance : 1; // 0x1
    uint8_t bOverride_VolumetricFogHeightFogColorationBlendStartDistance : 1; // 0x2
    uint8_t bOverride_VolumetricFogHeightFogColorationBlendFullDistance : 1; // 0x2
    uint8_t bOverride_VolumetricFogHeightFogColorationBlendStrength : 1; // 0x2
    uint8_t pad_bitfield_2_3 : 5;
    bool bVolumetricFog; // 0x3
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
