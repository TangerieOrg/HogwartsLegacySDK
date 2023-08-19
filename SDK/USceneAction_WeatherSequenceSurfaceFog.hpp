#pragma once
#include <cstdint>
#include "ESurfaceFogType.hpp"
#include "FRuntimeFloatCurve.hpp"
#include "USceneAction_WeatherSequence.hpp"
#pragma pack(push, 1)
class USceneAction_WeatherSequenceSurfaceFog : public USceneAction_WeatherSequence {
public:
    ESurfaceFogType Type; // 0x88
    char pad_89[0x7];
    FRuntimeFloatCurve Intensity; // 0x90
    bool bStretchToDuration; // 0x118
    char pad_119[0x7];
    static USceneAction_WeatherSequenceSurfaceFog* StaticClass();
}; // Size: 0x120
#pragma pack(pop)
