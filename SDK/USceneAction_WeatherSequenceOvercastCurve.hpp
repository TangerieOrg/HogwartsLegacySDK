#pragma once
#include <cstdint>
#include "FRuntimeFloatCurve.hpp"
#include "USceneAction_WeatherSequenceOvercast.hpp"
#pragma pack(push, 1)
class USceneAction_WeatherSequenceOvercastCurve : public USceneAction_WeatherSequenceOvercast {
public:
    FRuntimeFloatCurve Overcast; // 0x88
    bool bStretchToDuration; // 0x110
    char pad_111[0x3];
    float BlendDuration; // 0x114
    static USceneAction_WeatherSequenceOvercastCurve* StaticClass();
}; // Size: 0x118
#pragma pack(pop)
