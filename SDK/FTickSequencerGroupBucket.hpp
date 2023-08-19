#pragma once
#include <cstdint>
#include "FTickSequencerBucketDelegate.hpp"
#pragma pack(push, 1)
struct FTickSequencerGroupBucket {
    FName Bucket; // 0x0
    TArray<FTickSequencerBucketDelegate> Delegates; // 0x8
}; // Size: 0x18
#pragma pack(pop)
