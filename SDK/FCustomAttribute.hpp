#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FCustomAttribute {
    FName Name; // 0x0
    int32_t VariantType; // 0x8
    char pad_c[0x4];
    TArray<float> Times; // 0x10
    char pad_20[0x10];
}; // Size: 0x30
#pragma pack(pop)
