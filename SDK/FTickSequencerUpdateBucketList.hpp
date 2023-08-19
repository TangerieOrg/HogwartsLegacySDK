#pragma once
#include <cstdint>
#include "FTickSequencerGroupBucket.hpp"
#pragma pack(push, 1)
struct FTickSequencerUpdateBucketList {
    TArray<FTickSequencerGroupBucket> Buckets; // 0x0
}; // Size: 0x10
#pragma pack(pop)
