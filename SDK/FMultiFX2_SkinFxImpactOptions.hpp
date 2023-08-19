#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FMultiFX2_SkinFxImpactOptions {
    uint8_t bWorldPoint : 1; // 0x0
    uint8_t bWorldNormal : 1; // 0x0
    uint8_t bWorldFullBasis : 1; // 0x0
    uint8_t bAttachedPoint : 1; // 0x0
    uint8_t bAttachedNormal : 1; // 0x0
    uint8_t bAttachedUseClosestBone : 1; // 0x0
    uint8_t bAttachedFullBasis : 1; // 0x0
    uint8_t pad_bitfield_0_7 : 1;
}; // Size: 0x1
#pragma pack(pop)
