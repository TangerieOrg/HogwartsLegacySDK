#pragma once
#include <cstdint>
#include "FRuntimeFloatCurve.hpp"
#include "USceneAction_WeatherSequence.hpp"
#pragma pack(push, 1)
class USceneAction_WeatherSequenceStormCurve : public USceneAction_WeatherSequence {
public:
    FRuntimeFloatCurve Curve; // 0x88
    bool bStretchToDuration; // 0x110
    char pad_111[0x7];
    static USceneAction_WeatherSequenceStormCurve* StaticClass();
}; // Size: 0x118
#pragma pack(pop)
