#pragma once
#include <cstdint>
#include "EDesiredImageFormat.hpp"
#pragma pack(push, 1)
struct FImageWriteOptions {
    EDesiredImageFormat Format; // 0x0
    char pad_1[0x13];
    int32_t CompressionQuality; // 0x14
    bool bOverwriteFile; // 0x18
    bool bAsync; // 0x19
    char pad_1a[0x46];
}; // Size: 0x60
#pragma pack(pop)
