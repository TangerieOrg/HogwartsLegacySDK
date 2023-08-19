#pragma once
#include <cstdint>
#include "FStencilRules.hpp"
#pragma pack(push, 1)
struct FStencilManagerCutsomDepthFX {
    uint32_t StencilValue; // 0x0
    char pad_4[0x4];
    FStencilRules StencilRules; // 0x8
    bool bRenderCustomDepth; // 0xa0
    char pad_a1[0x7];
}; // Size: 0xa8
#pragma pack(pop)
