#pragma once
#include <cstdint>
#include "EStereoDelayFiltertype.hpp"
#include "EStereoDelaySourceEffect.hpp"
#pragma pack(push, 1)
struct FSourceEffectStereoDelaySettings {
    EStereoDelaySourceEffect DelayMode; // 0x0
    char pad_1[0x3];
    float DelayTimeMsec; // 0x4
    float Feedback; // 0x8
    float DelayRatio; // 0xc
    float WetLevel; // 0x10
    float DryLevel; // 0x14
    bool bFilterEnabled; // 0x18
    EStereoDelayFiltertype FilterType; // 0x19
    char pad_1a[0x2];
    float FilterFrequency; // 0x1c
    float FilterQ; // 0x20
}; // Size: 0x24
#pragma pack(pop)
