#pragma once
#include <cstdint>
#include "USceneActionState_WeatherSequenceAuto.hpp"
#pragma pack(push, 1)
class USceneActionState_WeatherSequenceWind : public USceneActionState_WeatherSequenceAuto {
public:
    char pad_50[0x8];
    static USceneActionState_WeatherSequenceWind* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
