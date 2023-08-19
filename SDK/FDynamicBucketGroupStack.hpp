#pragma once
#include <cstdint>
#include "FDynamicBucketGroupStackEntry.hpp"
#pragma pack(push, 1)
struct FDynamicBucketGroupStack {
    TArray<FDynamicBucketGroupStackEntry> Stack; // 0x0
}; // Size: 0x10
#pragma pack(pop)
