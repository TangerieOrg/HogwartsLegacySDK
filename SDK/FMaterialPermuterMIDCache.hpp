#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FMaterialPermuterMIDCache {
    char pad_0[0x50];
    bool bEnable; // 0x50
    char pad_51[0x3];
    float TTLSeconds; // 0x54
}; // Size: 0x58
#pragma pack(pop)
