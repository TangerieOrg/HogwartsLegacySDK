#pragma once
#include <cstdint>
#include "FAdjustedValueBoolean.hpp"
#include "FAdjustedValueFloat.hpp"
#include "FColor.hpp"
#include "FLinearColor.hpp"
#pragma pack(push, 1)
struct FExpHeightFogVolumetricParametersRelative {
    uint8_t bOverride_VolumetricFogAlbedo : 1; // 0x0
    uint8_t bOverride_VolumetricFogEmissive : 1; // 0x0
    uint8_t pad_bitfield_0_2 : 6;
    FAdjustedValueBoolean bVolumetricFog; // 0x1
    char pad_2[0x2];
    FAdjustedValueFloat VolumetricFogScatteringDistribution; // 0x4
    FColor VolumetricFogAlbedo; // 0x24
    FLinearColor VolumetricFogEmissive; // 0x28
    FAdjustedValueFloat VolumetricFogExtinctionScale; // 0x38
    FAdjustedValueFloat VolumetricFogDistance; // 0x58
    FAdjustedValueFloat OutsideVolumeSunMultiplier; // 0x78
    FAdjustedValueFloat VolumetricInscatteringContribution; // 0x98
    FAdjustedValueFloat VolumetricDirectionalInscatteringContribution; // 0xb8
    FAdjustedValueFloat VolumetricFogHeightFogNearStartDistance; // 0xd8
    FAdjustedValueFloat VolumetricFogHeightFogNearFullDistance; // 0xf8
    FAdjustedValueFloat VolumetricFogHeightFogColorationBlendStartDistance; // 0x118
    FAdjustedValueFloat VolumetricFogHeightFogColorationBlendFullDistance; // 0x138
    FAdjustedValueFloat VolumetricFogHeightFogColorationBlendStrength; // 0x158
    FAdjustedValueFloat VolumetricFogHistoryWeight; // 0x178
    FAdjustedValueFloat VolumetricFogHistoryWeightFarFog; // 0x198
}; // Size: 0x1b8
#pragma pack(pop)
