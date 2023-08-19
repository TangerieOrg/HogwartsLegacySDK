#pragma once
#include <cstdint>
#include "FRuntimeFloatCurve.hpp"
#include "USceneAction_WeatherSequenceEnvGlobalScalar.hpp"
#pragma pack(push, 1)
class USceneAction_WeatherSequenceEnvGlobalScalarCurve : public USceneAction_WeatherSequenceEnvGlobalScalar {
public:
    FRuntimeFloatCurve Value; // 0xa0
    float ClampMin; // 0x128
    float ClampMax; // 0x12c
    float BlendInTime; // 0x130
    bool bStretchToDuration; // 0x134
    bool bClampMinValue; // 0x135
    bool bClampMaxValue; // 0x136
    char pad_137[0x1];
    static USceneAction_WeatherSequenceEnvGlobalScalarCurve* StaticClass();
}; // Size: 0x138
#pragma pack(pop)
