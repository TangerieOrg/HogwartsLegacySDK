#pragma once
#include <cstdint>
#include "EGlobalLightingBlendableInputType.hpp"
#include "UGlobalLightingBlendable.hpp"
class UCloudsPresetParams;
class UDirectionalLightDirection;
class UExpHeightFogParams;
class UDirectionalLightParams;
class USkyLightParams;
class USkyAtmosphereParams;
class UCloudLightingParams;
class UProbeLightingParams;
class UCloudsWindParams;
class UGlobalLightingCustomBlendablesValue;
#pragma pack(push, 1)
class UGlobalLightingBlendableFull : public UGlobalLightingBlendable {
public:
    UDirectionalLightDirection* DirectionalLightDirection; // 0x28
    UDirectionalLightParams* DirectionalLightParameters; // 0x30
    UDirectionalLightDirection* SecondaryDirectionalLightDirection; // 0x38
    UDirectionalLightParams* SecondaryDirectionalLightParameters; // 0x40
    USkyLightParams* SkyLightParameters; // 0x48
    USkyAtmosphereParams* SkyAtmosphereParameters; // 0x50
    UExpHeightFogParams* ExpHeightFogParameters; // 0x58
    UCloudLightingParams* VolumetricCloudsParameters; // 0x60
    UCloudsPresetParams* CloudsPresetParameters; // 0x68
    UCloudsWindParams* CloudsWindParameters; // 0x70
    UProbeLightingParams* ProbeLightingParameters; // 0x78
    TArray<UGlobalLightingCustomBlendablesValue*> CustomBlendables; // 0x80
    EGlobalLightingBlendableInputType OverrideSource; // 0x90
    char pad_91[0x7];
    static UGlobalLightingBlendableFull* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
