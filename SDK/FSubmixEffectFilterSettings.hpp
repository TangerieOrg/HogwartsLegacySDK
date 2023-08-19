#pragma once
#include <cstdint>
#include "ESubmixFilterAlgorithm.hpp"
#include "ESubmixFilterType.hpp"
#pragma pack(push, 1)
struct FSubmixEffectFilterSettings {
    ESubmixFilterType FilterType; // 0x0
    ESubmixFilterAlgorithm FilterAlgorithm; // 0x1
    char pad_2[0x2];
    float FilterFrequency; // 0x4
    float FilterQ; // 0x8
}; // Size: 0xc
#pragma pack(pop)
