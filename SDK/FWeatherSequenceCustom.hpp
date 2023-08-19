#pragma once
#include <cstdint>
#include "FWeatherSequenceInfoWithProbability.hpp"
#pragma pack(push, 1)
struct FWeatherSequenceCustom {
    FName Name; // 0x0
    TArray<FWeatherSequenceInfoWithProbability> Sequences; // 0x8
    float PlaybackScale; // 0x18
    char pad_1c[0x4];
}; // Size: 0x20
#pragma pack(pop)
