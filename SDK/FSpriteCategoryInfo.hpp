#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FSpriteCategoryInfo {
    FName Category; // 0x0
    char pad_8[0x30];
}; // Size: 0x38
#pragma pack(pop)
