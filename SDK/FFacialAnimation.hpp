#pragma once
#include <cstdint>
#include "FGameplayTagContainer.hpp"
#pragma pack(push, 1)
struct FFacialAnimation {
    float Transition; // 0x0
    char pad_4[0x4];
    FGameplayTagContainer AnimTags; // 0x8
    bool bStartAtRandomTime; // 0x28
    char pad_29[0x7];
}; // Size: 0x30
#pragma pack(pop)
