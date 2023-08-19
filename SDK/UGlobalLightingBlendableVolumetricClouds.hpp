#pragma once
#include <cstdint>
#include "EGlobalLightingBlendableInputType.hpp"
#include "UGlobalLightingBlendable.hpp"
class UCloudLightingParams;
#pragma pack(push, 1)
class UGlobalLightingBlendableVolumetricClouds : public UGlobalLightingBlendable {
public:
    UCloudLightingParams* VolumetricCloudsParameters; // 0x28
    EGlobalLightingBlendableInputType OverrideSource; // 0x30
    char pad_31[0x7];
    static UGlobalLightingBlendableVolumetricClouds* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
