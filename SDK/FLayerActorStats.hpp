#pragma once
#include <cstdint>
class UClass;
#pragma pack(push, 1)
struct FLayerActorStats {
    UClass* Type; // 0x0
    int32_t Total; // 0x8
    char pad_c[0x4];
}; // Size: 0x10
#pragma pack(pop)
