#pragma once
#include <cstdint>
#include "FVolumetricCloudsPresetParameters.hpp"
#include "FVolumetricCloudsWindParameters.hpp"
#include "UGlobalLightingBlendableBase.hpp"
#pragma pack(push, 1)
class UGlobalLightingBlendableWeatherClouds : public UGlobalLightingBlendableBase {
public:
    FVolumetricCloudsPresetParameters PresetParameters; // 0x28
    FVolumetricCloudsWindParameters WindParameters; // 0x138
    bool bPresetValid; // 0x174
    bool bWindValid; // 0x175
    char pad_176[0x2];
    static UGlobalLightingBlendableWeatherClouds* StaticClass();
}; // Size: 0x178
#pragma pack(pop)
