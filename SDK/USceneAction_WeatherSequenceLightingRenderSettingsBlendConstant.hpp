#pragma once
#include <cstdint>
#include "USceneAction_WeatherSequenceLightingRenderSettings.hpp"
#pragma pack(push, 1)
class USceneAction_WeatherSequenceLightingRenderSettingsBlendConstant : public USceneAction_WeatherSequenceLightingRenderSettings {
public:
    float BlendWeight; // 0x130
    char pad_134[0x4];
    static USceneAction_WeatherSequenceLightingRenderSettingsBlendConstant* StaticClass();
}; // Size: 0x138
#pragma pack(pop)
