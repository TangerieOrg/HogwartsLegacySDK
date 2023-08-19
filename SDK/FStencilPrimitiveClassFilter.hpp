#pragma once
#include <cstdint>
#include "EStencilRule.hpp"
#pragma pack(push, 1)
struct FStencilPrimitiveClassFilter {
    TArray<void*> PrimitiveClasses; // 0x0
    EStencilRule Rule; // 0x10
    bool bIncludeSubclasses; // 0x11
    char pad_12[0x2];
    FName IgnoreTag; // 0x14
    char pad_1c[0x4];
}; // Size: 0x20
#pragma pack(pop)
