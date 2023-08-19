#pragma once
#include <cstdint>
#include "FRuntimeFloatCurve.hpp"
#include "USceneAction_WeatherSequenceLightingRenderSettings.hpp"
#pragma pack(push, 1)
class USceneAction_WeatherSequenceLightingRenderSettingsBlendCurve : public USceneAction_WeatherSequenceLightingRenderSettings {
public:
    FRuntimeFloatCurve BlendWeight; // 0x130
    bool bStretchToDuration; // 0x1b8
    char pad_1b9[0x7];
    static USceneAction_WeatherSequenceLightingRenderSettingsBlendCurve* StaticClass();
}; // Size: 0x1c0
#pragma pack(pop)
