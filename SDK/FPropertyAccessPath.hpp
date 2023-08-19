#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FPropertyAccessPath {
    int32_t PathSegmentStartIndex; // 0x0
    int32_t PathSegmentCount; // 0x4
    uint8_t bHasEvents : 1; // 0x8
    uint8_t pad_bitfield_8_1 : 7;
    char pad_9[0x3];
}; // Size: 0xc
#pragma pack(pop)
