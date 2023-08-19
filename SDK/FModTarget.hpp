#pragma once
#include <cstdint>
class UClass;
#pragma pack(push, 1)
struct FModTarget {
    bool bQueryBlueprints; // 0x0
    char pad_1[0x7];
    UClass* Class; // 0x8
    FString PathToProperty; // 0x10
}; // Size: 0x20
#pragma pack(pop)
