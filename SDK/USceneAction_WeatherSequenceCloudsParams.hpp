#pragma once
#include <cstdint>
#include "FVolumetricCloudsPresetParams.hpp"
#include "USceneAction_WeatherSequenceCloudsPreset.hpp"
#pragma pack(push, 1)
class USceneAction_WeatherSequenceCloudsParams : public USceneAction_WeatherSequenceCloudsPreset {
public:
    FVolumetricCloudsPresetParams Params; // 0x88
    float HeightOffset; // 0x190
    bool bSuperExpensiveCloudsCinematicOnly; // 0x194
    char pad_195[0x3];
    static USceneAction_WeatherSequenceCloudsParams* StaticClass();
}; // Size: 0x198
#pragma pack(pop)
