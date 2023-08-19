#pragma once
#include <cstdint>
#include "USceneActionState_WeatherSequence.hpp"
class UWeatherSurfaceDataAsset;
#pragma pack(push, 1)
class USceneActionState_WeatherSequenceStorm : public USceneActionState_WeatherSequence {
public:
    UWeatherSurfaceDataAsset* Precipitation; // 0x50
    bool bKickedOff; // 0x58
    char pad_59[0x17];
    static USceneActionState_WeatherSequenceStorm* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
