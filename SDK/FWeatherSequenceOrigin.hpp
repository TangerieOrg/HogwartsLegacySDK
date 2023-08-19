#pragma once
#include <cstdint>
#include "EWeatherSequenceOriginType.hpp"
#pragma pack(push, 1)
struct FWeatherSequenceOrigin {
    FName Sequence; // 0x0
    float PlaybackScale; // 0x8
    int32_t StackID; // 0xc
    EWeatherSequenceOriginType Type; // 0x10
    char pad_11[0x3];
    int32_t PriorityBoost; // 0x14
    uint32_t PlayingID; // 0x18
    bool bInstantChange; // 0x1c
    bool bRestorePriorWeather; // 0x1d
    char pad_1e[0x2];
}; // Size: 0x20
#pragma pack(pop)
