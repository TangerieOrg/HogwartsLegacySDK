#pragma once
#include <cstdint>
class UStruct;
#pragma pack(push, 1)
struct FPropertyPathSegment {
    FName Name; // 0x0
    int32_t ArrayIndex; // 0x8
    char pad_c[0x4];
    UStruct* Struct; // 0x10
    char pad_18[0x10];
}; // Size: 0x28
#pragma pack(pop)
