#pragma once
#include <cstdint>
#include "FDataTableRowHandle.hpp"
#include "USceneAction_WeatherSequenceCloudsPreset.hpp"
#pragma pack(push, 1)
class USceneAction_WeatherSequenceCloudsPresetDataTable : public USceneAction_WeatherSequenceCloudsPreset {
public:
    FDataTableRowHandle Preset; // 0x88
    float HeightOffset; // 0x98
    bool bSuperExpensiveCloudsCinematicOnly; // 0x9c
    bool bOverrideCoverageChance; // 0x9d
    char pad_9e[0x2];
    float OverrideCoverageChance; // 0xa0
    bool bOverrideTypeChance; // 0xa4
    char pad_a5[0x3];
    float OverrideTypeChance; // 0xa8
    bool bOverridePrecipitationChance; // 0xac
    char pad_ad[0x3];
    float OverridePrecipitationChance; // 0xb0
    bool bOverrideHighAltitudeChance; // 0xb4
    char pad_b5[0x3];
    float OverrideHighAltitudeChance; // 0xb8
    bool bOverrideLayerRadius; // 0xbc
    char pad_bd[0x3];
    float OverrideLayerRadius; // 0xc0
    bool bOverrideLayerVerticalHeight; // 0xc4
    char pad_c5[0x3];
    float OverrideLayerVerticalHeight; // 0xc8
    bool bOverrideCoverageCameraFade; // 0xcc
    char pad_cd[0x3];
    float OverrideCoverageCameraFade; // 0xd0
    char pad_d4[0x4];
    static USceneAction_WeatherSequenceCloudsPresetDataTable* StaticClass();
}; // Size: 0xd8
#pragma pack(pop)
