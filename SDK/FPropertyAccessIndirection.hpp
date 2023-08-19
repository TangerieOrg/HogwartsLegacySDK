#pragma once
#include <cstdint>
#include "EPropertyAccessIndirectionType.hpp"
#include "EPropertyAccessObjectType.hpp"
class UFunction;
#pragma pack(push, 1)
struct FPropertyAccessIndirection {
    char pad_0[0x20];
    UFunction* Function; // 0x20
    int32_t ReturnBufferSize; // 0x28
    int32_t ReturnBufferAlignment; // 0x2c
    int32_t ArrayIndex; // 0x30
    uint32_t Offset; // 0x34
    EPropertyAccessObjectType ObjectType; // 0x38
    EPropertyAccessIndirectionType Type; // 0x39
    char pad_3a[0x6];
}; // Size: 0x40
#pragma pack(pop)
