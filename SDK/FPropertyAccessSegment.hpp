#pragma once
#include <cstdint>
class UStruct;
class UFunction;
#pragma pack(push, 1)
struct FPropertyAccessSegment {
    FName Name; // 0x0
    UStruct* Struct; // 0x8
    char pad_10[0x20];
    UFunction* Function; // 0x30
    int32_t ArrayIndex; // 0x38
    uint16_t flags; // 0x3c
    char pad_3e[0x2];
}; // Size: 0x40
#pragma pack(pop)
