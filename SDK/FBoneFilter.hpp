#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FBoneFilter {
    bool bExcludeSelf; // 0x0
    char pad_1[0x3];
    FName BoneName; // 0x4
}; // Size: 0xc
#pragma pack(pop)
