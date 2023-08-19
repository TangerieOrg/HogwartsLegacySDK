#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FAssetTrackerData {
    FString AssetType; // 0x0
    int32_t MaxChildrenInWorld; // 0x10
    int32_t CurrentChildCount; // 0x14
    char pad_18[0x60];
}; // Size: 0x78
#pragma pack(pop)
