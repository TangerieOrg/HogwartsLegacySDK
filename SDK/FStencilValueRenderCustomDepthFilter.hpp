#pragma once
#include <cstdint>
#include "EStencilValueRenderCustomDepthRule.hpp"
#pragma pack(push, 1)
struct FStencilValueRenderCustomDepthFilter {
    TArray<FName> Tags; // 0x0
    EStencilValueRenderCustomDepthRule Rule; // 0x10
    bool bExcludeFX; // 0x11
    char pad_12[0x6];
}; // Size: 0x18
#pragma pack(pop)
