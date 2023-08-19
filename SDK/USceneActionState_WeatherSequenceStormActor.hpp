#pragma once
#include <cstdint>
#include "USceneActionState_WeatherSequence.hpp"
#pragma pack(push, 1)
class USceneActionState_WeatherSequenceStormActor : public USceneActionState_WeatherSequence {
public:
    char pad_50[0x8];
    static USceneActionState_WeatherSequenceStormActor* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
