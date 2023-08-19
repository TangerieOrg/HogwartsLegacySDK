#pragma once
#include <cstdint>
#include "FRuntimeFloatCurve.hpp"
#include "USceneAction_WeatherSequenceLightingPostProcessing.hpp"
#pragma pack(push, 1)
class USceneAction_WeatherSequenceLightingPostProcessingBlendCurve : public USceneAction_WeatherSequenceLightingPostProcessing {
public:
    FRuntimeFloatCurve BlendWeight; // 0x6c0
    bool bStretchToDuration; // 0x748
    char pad_749[0x7];
    static USceneAction_WeatherSequenceLightingPostProcessingBlendCurve* StaticClass();
}; // Size: 0x750
#pragma pack(pop)
