#pragma once
#include <cstdint>
class UMultiFX2_Base;
class UGameplayPropertyMod;
#pragma pack(push, 1)
struct FImperiusData {
    TArray<UMultiFX2_Base*> FX2; // 0x0
    UGameplayPropertyMod* Mod; // 0x10
}; // Size: 0x18
#pragma pack(pop)
