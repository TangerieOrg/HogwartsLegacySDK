#pragma once
#include <cstdint>
#include "FPropertyPathSegment.hpp"
class UFunction;
#pragma pack(push, 1)
struct FCachedPropertyPath {
    TArray<FPropertyPathSegment> Segments; // 0x0
    char pad_10[0x8];
    UFunction* CachedFunction; // 0x18
    char pad_20[0x8];
}; // Size: 0x28
#pragma pack(pop)
