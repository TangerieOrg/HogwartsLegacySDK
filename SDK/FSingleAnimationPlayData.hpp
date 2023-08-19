#pragma once
#include <cstdint>
class UAnimationAsset;
#pragma pack(push, 1)
struct FSingleAnimationPlayData {
    UAnimationAsset* AnimToPlay; // 0x0
    uint8_t bSavedLooping : 1; // 0x8
    uint8_t bSavedPlaying : 1; // 0x8
    uint8_t pad_bitfield_8_2 : 6;
    char pad_9[0x3];
    float SavedPosition; // 0xc
    float SavedPlayRate; // 0x10
    char pad_14[0x4];
}; // Size: 0x18
#pragma pack(pop)
