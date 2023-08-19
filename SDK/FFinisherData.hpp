#pragma once
#include <cstdint>
#include "FGameplayTagContainer.hpp"
#pragma pack(push, 1)
struct FFinisherData {
    char pad_0[0x28];
    FGameplayTagContainer MunitionTags; // 0x28
    int32_t weight; // 0x48
    char pad_4c[0x4];
}; // Size: 0x50
#pragma pack(pop)
