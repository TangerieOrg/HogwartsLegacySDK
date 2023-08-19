#pragma once
#include <cstdint>
#include "FMaterialSwapActorRules.hpp"
#pragma pack(push, 1)
struct FMaterialSwapDependentRules {
    uint8_t bComponentChildren : 1; // 0x0
    uint8_t bDirectChildren : 1; // 0x0
    uint8_t bAttachedChildren : 1; // 0x0
    uint8_t bLimitDepth : 1; // 0x0
    uint8_t pad_bitfield_0_4 : 4;
    char pad_1[0x7];
    FMaterialSwapActorRules ActorRules; // 0x8
    int32_t MaxDepth; // 0x48
    char pad_4c[0x4];
}; // Size: 0x50
#pragma pack(pop)
