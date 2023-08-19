#pragma once
#include <cstdint>
#include "FSavePrimitiveRenderCustomDepthOwner.hpp"
#pragma pack(push, 1)
struct FSaveAndOverridePrimitiveRenderCustomDepthOwner : public FSavePrimitiveRenderCustomDepthOwner {
    uint32_t StencilValueOverride; // 0x10
    uint8_t bRenderCustomDepthOverride : 1; // 0x14
    uint8_t bOverridestencilValue : 1; // 0x14
    uint8_t bOverrideRenderCustomDepth : 1; // 0x14
    uint8_t pad_bitfield_14_3 : 5;
    char pad_15[0x3];
}; // Size: 0x18
#pragma pack(pop)
