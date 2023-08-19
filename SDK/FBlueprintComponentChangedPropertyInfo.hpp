#pragma once
#include <cstdint>
class UStruct;
#pragma pack(push, 1)
struct FBlueprintComponentChangedPropertyInfo {
    FName PropertyName; // 0x0
    int32_t ArrayIndex; // 0x8
    char pad_c[0x4];
    UStruct* PropertyScope; // 0x10
}; // Size: 0x18
#pragma pack(pop)
