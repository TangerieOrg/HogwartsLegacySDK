#pragma once
#include <cstdint>
#include "USceneAction_WeatherSequence.hpp"
class UAkAudioEvent;
#pragma pack(push, 1)
class USceneAction_WeatherSequenceAudioAmbience : public USceneAction_WeatherSequence {
public:
    UAkAudioEvent* StartSoundFX; // 0x88
    UAkAudioEvent* EndSoundFX; // 0x90
    static USceneAction_WeatherSequenceAudioAmbience* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
