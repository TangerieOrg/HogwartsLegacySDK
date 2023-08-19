#pragma once
#include <cstdint>
#include "EPropertyAccessCopyType.hpp"
#pragma pack(push, 1)
struct FPropertyAccessCopy {
    int32_t AccessIndex; // 0x0
    int32_t DestAccessStartIndex; // 0x4
    int32_t DestAccessEndIndex; // 0x8
    EPropertyAccessCopyType Type; // 0xc
    char pad_d[0x3];
}; // Size: 0x10
#pragma pack(pop)
