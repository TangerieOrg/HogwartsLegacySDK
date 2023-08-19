#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FStencilValueRenderCustomDepth {
    int32_t StencilValue; // 0x0
    bool bRenderCustomDepth; // 0x4
    bool bOverridestencilValue; // 0x5
    bool bOverrideRenderCustomDepth; // 0x6
    char pad_7[0x1];
}; // Size: 0x8
#pragma pack(pop)
