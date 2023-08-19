#pragma once
#include <cstdint>
class UMultiFX2_Base;
#pragma pack(push, 1)
struct FHealingFX {
    float HealingThreshold; // 0x0
    char pad_4[0x4];
    TArray<UMultiFX2_Base*> FX2; // 0x8
}; // Size: 0x18
#pragma pack(pop)
