#pragma once
#include <cstdint>
class UClass;
#pragma pack(push, 1)
struct FBPComponentClassOverride {
    FName ComponentName; // 0x0
    UClass* ComponentClass; // 0x8
}; // Size: 0x10
#pragma pack(pop)
