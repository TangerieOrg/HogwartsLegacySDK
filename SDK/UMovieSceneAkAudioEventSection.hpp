#pragma once
#include <cstdint>
#include "UMovieSceneSection.hpp"
class UAkAudioEvent;
#pragma pack(push, 1)
class UMovieSceneAkAudioEventSection : public UMovieSceneSection {
public:
    char pad_e8[0x40];
    UAkAudioEvent* Event; // 0x128
    bool RetriggerEvent; // 0x130
    char pad_131[0x3];
    int32_t ScrubTailLengthMs; // 0x134
    bool StopAtSectionEnd; // 0x138
    char pad_139[0x7];
    FString EventName; // 0x140
    char pad_150[0x20];
    float MaxSourceDuration; // 0x170
    char pad_174[0x4];
    FString MaxDurationSourceID; // 0x178
    char pad_188[0x48];
    static UMovieSceneAkAudioEventSection* StaticClass();
}; // Size: 0x1d0
#pragma pack(pop)
