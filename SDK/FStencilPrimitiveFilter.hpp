#pragma once
#include <cstdint>
#include "EStencilFilterPrimitiveMatchMode.hpp"
#include "EStencilRule.hpp"
#pragma pack(push, 1)
struct FStencilPrimitiveFilter {
    TArray<FName> Primitives; // 0x0
    EStencilRule Rule; // 0x10
    EStencilFilterPrimitiveMatchMode MatchMode; // 0x11
    char pad_12[0x6];
}; // Size: 0x18
#pragma pack(pop)
