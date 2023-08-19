#pragma once
#include <cstdint>
class UObject;
class UClass;
#pragma pack(push, 1)
struct FDebugDisplayProperty {
    UObject* Obj; // 0x0
    UClass* WithinClass; // 0x8
    char pad_10[0x10];
}; // Size: 0x20
#pragma pack(pop)
