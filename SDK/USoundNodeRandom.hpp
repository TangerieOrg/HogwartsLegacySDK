#pragma once
#include <cstdint>
#include "USoundNode.hpp"
#pragma pack(push, 1)
class USoundNodeRandom : public USoundNode {
public:
    TArray<float> Weights; // 0x48
    TArray<bool> HasBeenUsed; // 0x58
    int32_t NumRandomUsed; // 0x68
    int32_t PreselectAtLevelLoad; // 0x6c
    uint8_t bShouldExcludeFromBranchCulling : 1; // 0x70
    uint8_t bSoundCueExcludedFromBranchCulling : 1; // 0x70
    uint8_t bRandomizeWithoutReplacement : 1; // 0x70
    uint8_t pad_bitfield_70_3 : 5;
    char pad_71[0x7];
    static USoundNodeRandom* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
