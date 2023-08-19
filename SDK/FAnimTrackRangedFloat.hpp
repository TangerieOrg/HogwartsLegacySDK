#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FAnimTrackRangedFloat {
    bool UseRange; // 0x0
    char pad_1[0x3];
    float RangeMin; // 0x4
    float RangeMax; // 0x8
}; // Size: 0xc
#pragma pack(pop)
