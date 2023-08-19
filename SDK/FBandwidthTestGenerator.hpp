#pragma once
#include <cstdint>
#include "FBandwidthTestItem.hpp"
#pragma pack(push, 1)
struct FBandwidthTestGenerator {
    TArray<FBandwidthTestItem> ReplicatedBuffers; // 0x0
    char pad_10[0x10];
}; // Size: 0x20
#pragma pack(pop)
