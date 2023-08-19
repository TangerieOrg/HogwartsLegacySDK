#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FSubmixEffectDynamicProcessorFilterSettings {
    uint8_t bEnabled : 1; // 0x0
    uint8_t pad_bitfield_0_1 : 7;
    char pad_1[0x3];
    float Cutoff; // 0x4
    float GainDb; // 0x8
}; // Size: 0xc
#pragma pack(pop)
