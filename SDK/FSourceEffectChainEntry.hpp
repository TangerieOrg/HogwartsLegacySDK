#pragma once
#include <cstdint>
class USoundEffectSourcePreset;
#pragma pack(push, 1)
struct FSourceEffectChainEntry {
    USoundEffectSourcePreset* Preset; // 0x0
    uint8_t bBypass : 1; // 0x8
    uint8_t pad_bitfield_8_1 : 7;
    char pad_9[0x7];
}; // Size: 0x10
#pragma pack(pop)
