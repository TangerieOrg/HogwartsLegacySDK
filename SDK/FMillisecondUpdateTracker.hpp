#pragma once
#include <cstdint>
#include "FDateTime.hpp"
#pragma pack(push, 1)
struct FMillisecondUpdateTracker {
    FDateTime LastUpdate; // 0x0
    float LastMS; // 0x8
    float AverageMS; // 0xc
    int32_t AverageSamples; // 0x10
    int32_t AverageMaxSamples; // 0x14
    bool bAverageRollover; // 0x18
    char pad_19[0x7];
}; // Size: 0x20
#pragma pack(pop)
