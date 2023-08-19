#pragma once
#include <cstdint>
class UBlendProfile;
#pragma pack(push, 1)
struct FAnimationActiveTransitionEntry {
    char pad_0[0xb8];
    UBlendProfile* BlendProfile; // 0xb8
    char pad_c0[0x8];
}; // Size: 0xc8
#pragma pack(pop)
