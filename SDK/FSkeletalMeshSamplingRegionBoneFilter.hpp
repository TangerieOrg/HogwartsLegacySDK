#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FSkeletalMeshSamplingRegionBoneFilter {
    FName BoneName; // 0x0
    uint8_t bIncludeOrExclude : 1; // 0x8
    uint8_t bApplyToChildren : 1; // 0x8
    uint8_t pad_bitfield_8_2 : 6;
    char pad_9[0x3];
}; // Size: 0xc
#pragma pack(pop)
