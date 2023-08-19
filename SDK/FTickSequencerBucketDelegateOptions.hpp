#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FTickSequencerBucketDelegateOptions {
    uint8_t bTickWhenPaused : 1; // 0x0
    uint8_t bSuspend : 1; // 0x0
    uint8_t bTickInEditor : 1; // 0x0
    uint8_t bTickOnlyInEditor : 1; // 0x0
    uint8_t pad_bitfield_0_4 : 4;
}; // Size: 0x1
#pragma pack(pop)
