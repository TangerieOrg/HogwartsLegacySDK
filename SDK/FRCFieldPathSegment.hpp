#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FRCFieldPathSegment {
    FName Name; // 0x0
    int32_t ArrayIndex; // 0x8
    char pad_c[0x4];
    FString ValuePropertyName; // 0x10
    FString MapKey; // 0x20
    char pad_30[0x20];
}; // Size: 0x50
#pragma pack(pop)
