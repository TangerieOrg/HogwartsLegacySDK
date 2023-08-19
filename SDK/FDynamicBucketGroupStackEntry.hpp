#pragma once
#include <cstdint>
#include "ETickSequencerGroup.hpp"
#pragma pack(push, 1)
struct FDynamicBucketGroupStackEntry {
    char pad_0[0x8];
    ETickSequencerGroup Group; // 0x8
    char pad_9[0x3];
}; // Size: 0xc
#pragma pack(pop)
