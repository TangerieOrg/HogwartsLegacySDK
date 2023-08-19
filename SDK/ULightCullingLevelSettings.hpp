#pragma once
#include <cstdint>
#include "FLightCullingLevelName.hpp"
#include "FLightCullingPerLevelSettings.hpp"
#include "FSimpleBlobShadowDecalComponentMapper.hpp"
#include "UDataAsset.hpp"
class ULightCullingSettings;
#pragma pack(push, 1)
class ULightCullingLevelSettings : public UDataAsset {
public:
    ULightCullingSettings* LevelDefaultSettings; // 0x30
    TArray<FLightCullingPerLevelSettings> LevelSettings; // 0x38
    TArray<FLightCullingLevelName> DisableLevels; // 0x48
    TArray<FName> DisableProceduralLevels; // 0x58
    FSimpleBlobShadowDecalComponentMapper SimpleBlobShadowDecalComponentMapper; // 0x68
    static ULightCullingLevelSettings* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
