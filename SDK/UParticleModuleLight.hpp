#pragma once
#include <cstdint>
#include "FLightingChannels.hpp"
#include "FRawDistributionFloat.hpp"
#include "FRawDistributionVector.hpp"
#include "UParticleModuleLightBase.hpp"
#pragma pack(push, 1)
class UParticleModuleLight : public UParticleModuleLightBase {
public:
    bool bUseInverseSquaredFalloff; // 0x30
    bool bAffectsVolumetricLighting; // 0x31
    bool bPreviewLightRadius; // 0x32
    char pad_33[0x1];
    float SpawnFraction; // 0x34
    FRawDistributionVector ColorScaleOverLife; // 0x38
    FRawDistributionFloat BrightnessOverLife; // 0x80
    FRawDistributionFloat RadiusScale; // 0xb0
    FRawDistributionFloat LightExponent; // 0xe0
    float MinDistance; // 0x110
    FLightingChannels LightingChannels; // 0x114
    char pad_115[0x3];
    float VolumetricScatteringIntensity; // 0x118
    bool bHighQualityLights; // 0x11c
    bool bShadowCastingLights; // 0x11d
    char pad_11e[0x2];
    static UParticleModuleLight* StaticClass();
}; // Size: 0x120
#pragma pack(pop)
