#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FEnvironmentalGlobalsIndoors {
    float GameIndoors; // 0x0
    float ProbeIndoors; // 0x4
    float WeatherIndoors; // 0x8
    float AudioIndoors; // 0xc
    float StreamingIndoors; // 0x10
    uint8_t bValidGameIndoors : 1; // 0x14
    uint8_t bValidProbeIndoors : 1; // 0x14
    uint8_t bValidWeatherIndoors : 1; // 0x14
    uint8_t bValidAudioIndoors : 1; // 0x14
    uint8_t bValidStreamingIndoors : 1; // 0x14
    uint8_t pad_bitfield_14_5 : 3;
    char pad_15[0x3];
}; // Size: 0x18
#pragma pack(pop)
