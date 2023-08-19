#pragma once
#include <cstdint>
class UClass;
#pragma pack(push, 1)
struct FDamageEvent {
    char pad_0[0x8];
    UClass* DamageTypeClass; // 0x8
}; // Size: 0x10
#pragma pack(pop)
