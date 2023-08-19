#pragma once
#include <cstdint>
#include "EGlobalLightingBlendableInputType.hpp"
#include "UGlobalLightingBlendable.hpp"
class UGlobalLightingDefaults;
#pragma pack(push, 1)
class UGlobalLightingBlendableUseDefaults : public UGlobalLightingBlendable {
public:
    UGlobalLightingDefaults* Defaults; // 0x28
    bool bDirectionalLightDirection; // 0x30
    bool bDirectionalLightParameters; // 0x31
    bool bSecondaryDirectionalLightDirection; // 0x32
    bool bSecondaryDirectionalLightParameters; // 0x33
    bool bSkyLightParameters; // 0x34
    bool bSkyAtmosphereParameters; // 0x35
    bool bExpHeightFogParameters; // 0x36
    bool bVolumetricCloudsParameters; // 0x37
    bool bCloudsPresetParameters; // 0x38
    bool bCloudsWindParameters; // 0x39
    bool bProbeLightingParameters; // 0x3a
    bool bCustomBlendables; // 0x3b
    EGlobalLightingBlendableInputType OverrideSource; // 0x3c
    char pad_3d[0x3];
    static UGlobalLightingBlendableUseDefaults* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
