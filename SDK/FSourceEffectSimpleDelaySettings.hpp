#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FSourceEffectSimpleDelaySettings {
    float SpeedOfSound; // 0x0
    float DelayAmount; // 0x4
    float DryAmount; // 0x8
    float WetAmount; // 0xc
    float Feedback; // 0x10
    uint8_t bDelayBasedOnDistance : 1; // 0x14
    uint8_t pad_bitfield_14_1 : 7;
    char pad_15[0x3];
}; // Size: 0x18
#pragma pack(pop)
