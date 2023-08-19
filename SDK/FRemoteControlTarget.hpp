#pragma once
#include <cstdint>
#include "FSoftObjectPath.hpp"
class UClass;
#pragma pack(push, 1)
struct FRemoteControlTarget {
    UClass* Class; // 0x0
    char pad_8[0xa0];
    FName Alias; // 0xa8
    TArray<FSoftObjectPath> Bindings; // 0xb0
    char pad_c0[0x8];
}; // Size: 0xc8
#pragma pack(pop)
