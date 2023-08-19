#pragma once
#include <cstdint>
#include "FStencilPrimitiveClassFilter.hpp"
#include "FStencilPrimitiveFilter.hpp"
#include "FStencilPrimitiveTagRules.hpp"
#include "FStencilPrimitiveTypeRules.hpp"
#pragma pack(push, 1)
struct FStencilRules {
    FStencilPrimitiveTagRules TagFilter; // 0x0
    FStencilPrimitiveTypeRules TypeFilter; // 0x50
    char pad_59[0x7];
    FStencilPrimitiveFilter PrimitiveFilter; // 0x60
    FStencilPrimitiveClassFilter PrimitiveClassFilter; // 0x78
}; // Size: 0x98
#pragma pack(pop)
