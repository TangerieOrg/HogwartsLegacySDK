#pragma once
#include <cstdint>
#include "USceneActionState_WeatherSequence.hpp"
#pragma pack(push, 1)
class USceneActionState_WeatherSequenceAudioAmbience : public USceneActionState_WeatherSequence {
public:
    int32_t SoundHandle; // 0x50
    char pad_54[0x4];
    static USceneActionState_WeatherSequenceAudioAmbience* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
