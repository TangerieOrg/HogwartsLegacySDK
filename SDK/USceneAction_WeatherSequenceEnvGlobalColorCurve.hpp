#pragma once
#include <cstdint>
#include "FRuntimeCurveLinearColor.hpp"
#include "USceneAction_WeatherSequenceEnvGlobalColor.hpp"
#pragma pack(push, 1)
class USceneAction_WeatherSequenceEnvGlobalColorCurve : public USceneAction_WeatherSequenceEnvGlobalColor {
public:
    FRuntimeCurveLinearColor Value; // 0xa8
    float BlendInTime; // 0x2b0
    bool bStretchToDuration; // 0x2b4
    char pad_2b5[0x3];
    static USceneAction_WeatherSequenceEnvGlobalColorCurve* StaticClass();
}; // Size: 0x2b8
#pragma pack(pop)
