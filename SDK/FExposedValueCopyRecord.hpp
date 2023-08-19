#pragma once
#include <cstdint>
#include "EPostCopyOperation.hpp"
#pragma pack(push, 1)
struct FExposedValueCopyRecord {
    int32_t CopyIndex; // 0x0
    EPostCopyOperation PostCopyOperation; // 0x4
    char pad_5[0x3];
}; // Size: 0x8
#pragma pack(pop)
