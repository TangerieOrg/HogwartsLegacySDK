#pragma once
#include <cstdint>
#include "USceneActionState_WeatherSequenceAuto.hpp"
#pragma pack(push, 1)
class USceneActionState_WeatherSequenceCloudsLegacy : public USceneActionState_WeatherSequenceAuto {
public:
    float LatchedBlendIn; // 0x50
    char pad_54[0x4];
    static USceneActionState_WeatherSequenceCloudsLegacy* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
