#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FVariantDependency {
    char pad_0[0x50];
    bool bEnabled; // 0x50
    char pad_51[0x7];
}; // Size: 0x58
#pragma pack(pop)
