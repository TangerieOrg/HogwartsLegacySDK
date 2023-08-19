#pragma once
#include <cstdint>
#include "FTickSequencerBucketDelegateOptions.hpp"
#pragma pack(push, 1)
struct FTickSequencerBucketDelegate {
    char pad_0[0x20];
    FTickSequencerBucketDelegateOptions OPTIONS; // 0x20
    char pad_21[0x7];
}; // Size: 0x28
#pragma pack(pop)
