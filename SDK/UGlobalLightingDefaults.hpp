#pragma once
#include <cstdint>
#include "FDataTableRowHandle.hpp"
#include "FDirectionalLightParameters.hpp"
#include "FExpHeightFogParameters.hpp"
#include "FProbeLightingParameters.hpp"
#include "FRotator.hpp"
#include "FSkyAtmosphereParameters.hpp"
#include "FSkyLightLightingParameters.hpp"
#include "FVolumetricCloudsLightingParameters.hpp"
#include "FVolumetricCloudsWindParameters.hpp"
#include "FZeroDirectionalLightSettings.hpp"
#include "UDataAsset.hpp"
class UMaterialInterface;
class UGlobalLightingCustomBlendablesValueAllowDefaults;
class UGlobalLightingBlendable;
#pragma pack(push, 1)
class UGlobalLightingDefaults : public UDataAsset {
public:
    FRotator LightDirection; // 0x30
    FDirectionalLightParameters LightParameters; // 0x3c
    FZeroDirectionalLightSettings ZeroDirectionalLightSettings; // 0x118
    FRotator SecondaryLightDirection; // 0x120
    FDirectionalLightParameters SecondaryLightParameters; // 0x12c
    FZeroDirectionalLightSettings SecondaryZeroDirectionalLightSettings; // 0x208
    FSkyLightLightingParameters SkyLightParameters; // 0x210
    FSkyAtmosphereParameters SkyAtmosphereParameters; // 0x2b8
    UMaterialInterface* SingleDirectionalLightMaterialOverride; // 0x400
    UMaterialInterface* DualDirectionalLightMaterialOverride; // 0x408
    FExpHeightFogParameters ExpHeightFogParameters; // 0x410
    FVolumetricCloudsLightingParameters CloudLightingParameters; // 0x5e8
    FProbeLightingParameters ProbeLightingParameters; // 0x668
    FDataTableRowHandle CloudsPreset; // 0x698
    FVolumetricCloudsWindParameters CloudsWindParameters; // 0x6a8
    char pad_6e4[0x4];
    TArray<UGlobalLightingCustomBlendablesValueAllowDefaults*> CustomBlendDefaultValues; // 0x6e8
    bool bCameraExpHeightFogHeight; // 0x6f8
    bool bCloudSceneLightingDefaultToDirectionalLight; // 0x6f9
    char pad_6fa[0x6];
    TArray<UGlobalLightingBlendable*> ExtraBlendables; // 0x700
    TArray<UGlobalLightingBlendable*> PostBlendables; // 0x710
    static UGlobalLightingDefaults* StaticClass();
}; // Size: 0x720
#pragma pack(pop)
