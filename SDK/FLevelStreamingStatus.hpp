#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FLevelStreamingStatus {
    FName PackageName; // 0x0
    uint8_t bShouldBeLoaded : 1; // 0x8
    uint8_t bShouldBeVisible : 1; // 0x8
    uint8_t pad_bitfield_8_2 : 6;
    char pad_9[0x3];
    uint32_t LODIndex; // 0xc
}; // Size: 0x10
#pragma pack(pop)
