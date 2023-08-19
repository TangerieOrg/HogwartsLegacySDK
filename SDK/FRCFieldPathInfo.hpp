#pragma once
#include <cstdint>
#include "FRCFieldPathSegment.hpp"
#pragma pack(push, 1)
struct FRCFieldPathInfo {
    TArray<FRCFieldPathSegment> Segments; // 0x0
    uint32_t PathHash; // 0x10
    char pad_14[0x4];
}; // Size: 0x18
#pragma pack(pop)
