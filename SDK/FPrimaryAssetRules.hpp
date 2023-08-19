#pragma once
#include <cstdint>
#include "EPrimaryAssetCookRule.hpp"
#pragma pack(push, 1)
struct FPrimaryAssetRules {
    int32_t Priority; // 0x0
    int32_t ChunkId; // 0x4
    bool bApplyRecursively; // 0x8
    EPrimaryAssetCookRule CookRule; // 0x9
    char pad_a[0x2];
}; // Size: 0xc
#pragma pack(pop)
