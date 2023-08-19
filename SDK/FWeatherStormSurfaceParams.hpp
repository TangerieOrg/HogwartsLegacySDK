#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FWeatherStormSurfaceParams {
    FLinearColor WeatherColorModifier; // 0x0
    float WeatherRoughness; // 0x10
    float WeatherSpecular; // 0x14
    float WeatherCoverageMagnitude; // 0x18
    float WeatherCoverageThreshold; // 0x1c
    FVector WeatherDirection; // 0x20
    float WeatherEdgeStrength; // 0x2c
    float WeatherEdgeMinimum; // 0x30
    float WeatherAnimationMagnitude; // 0x34
    float WeatherAnimationEdgeStrength; // 0x38
    float WeatherAnimationEdgeMinimum; // 0x3c
    float WeatherSurfaceTiling; // 0x40
    float WeatherFarCoverage; // 0x44
    float WeatherSurfaceFadeStart; // 0x48
    float WeatherSurfaceFadeEnd; // 0x4c
    float MacroNoiseTiling1; // 0x50
    float MacroNoiseTiling2; // 0x54
    float MacroNoiseScale; // 0x58
    float MacroNoiseBias; // 0x5c
    float RippleNormalTiling; // 0x60
    float RippleNormalSpeedU; // 0x64
    float RippleNormalSpeedV; // 0x68
    float RippleNormalAmount; // 0x6c
}; // Size: 0x70
#pragma pack(pop)
