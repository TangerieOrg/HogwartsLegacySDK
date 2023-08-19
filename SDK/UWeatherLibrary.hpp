#pragma once
#include <cstdint>
#include "UDataAsset.hpp"
class UWeatherSequences;
class UCloudDefinitions;
class UFogDefinitions;
class UWeatherTypesAsset;
class UWindDefinitions;
class UGlobalLightingBlendable;
class URenderSettingsCustomBlendDomain;
#pragma pack(push, 1)
class UWeatherLibrary : public UDataAsset {
public:
    UWeatherSequences* Sequences; // 0x30
    UFogDefinitions* FogDefinitions; // 0x38
    UCloudDefinitions* CloudDefinitions; // 0x40
    UWindDefinitions* WindDefinitions; // 0x48
    UWeatherTypesAsset* WeatherSurfaceTypes; // 0x50
    UGlobalLightingBlendable* DefaultOvercastBlendable; // 0x58
    URenderSettingsCustomBlendDomain* ProhibitWeatherBlendDomain; // 0x60
    char pad_68[0x28];
    static UWeatherLibrary* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
