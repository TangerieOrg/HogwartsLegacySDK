#pragma once
#include <cstdint>
#include "ESoundGroup.hpp"
#pragma pack(push, 1)
struct FSoundGroup {
    ESoundGroup SoundGroup; // 0x0
    char pad_1[0x7];
    FString DisplayName; // 0x8
    uint8_t bAlwaysDecompressOnLoad : 1; // 0x18
    uint8_t pad_bitfield_18_1 : 7;
    char pad_19[0x3];
    float DecompressedDuration; // 0x1c
}; // Size: 0x20
#pragma pack(pop)
