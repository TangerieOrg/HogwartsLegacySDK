#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FSubmixEffectDelaySettings {
    float MaximumDelayLength; // 0x0
    float InterpolationTime; // 0x4
    float DelayLength; // 0x8
}; // Size: 0xc
#pragma pack(pop)
