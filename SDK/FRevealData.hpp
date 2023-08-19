#pragma once
#include <cstdint>
class UMultiFX2_Base;
#pragma pack(push, 1)
struct FRevealData {
    TArray<UMultiFX2_Base*> FX2; // 0x0
    TArray<UMultiFX2_Base*> GlobalFX2; // 0x10
    char pad_20[0x8];
}; // Size: 0x28
#pragma pack(pop)
