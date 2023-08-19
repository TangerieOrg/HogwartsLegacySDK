#pragma once
#include <cstdint>
#include "ETimelineLengthMode.hpp"
#include "FTimelineEventEntry.hpp"
#include "FTimelineFloatTrack.hpp"
#include "FTimelineLinearColorTrack.hpp"
#include "FTimelineVectorTrack.hpp"
#pragma pack(push, 1)
struct FTimeline {
    ETimelineLengthMode LengthMode; // 0x0
    uint8_t bLooping : 1; // 0x1
    uint8_t bReversePlayback : 1; // 0x1
    uint8_t bPlaying : 1; // 0x1
    uint8_t pad_bitfield_1_3 : 5;
    char pad_2[0x2];
    float Length; // 0x4
    float PlayRate; // 0x8
    float Position; // 0xc
    TArray<FTimelineEventEntry> Events; // 0x10
    TArray<FTimelineVectorTrack> InterpVectors; // 0x20
    TArray<FTimelineFloatTrack> InterpFloats; // 0x30
    TArray<FTimelineLinearColorTrack> InterpLinearColors; // 0x40
    char pad_50[0x28];
    FName DirectionPropertyName; // 0x78
    char pad_80[0x18];
}; // Size: 0x98
#pragma pack(pop)
