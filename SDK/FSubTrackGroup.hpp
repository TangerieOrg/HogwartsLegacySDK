#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FSubTrackGroup {
    FString GroupName; // 0x0
    TArray<int32_t> TrackIndices; // 0x10
    uint8_t bIsCollapsed : 1; // 0x20
    uint8_t bIsSelected : 1; // 0x20
    uint8_t pad_bitfield_20_2 : 6;
    char pad_21[0x7];
}; // Size: 0x28
#pragma pack(pop)
