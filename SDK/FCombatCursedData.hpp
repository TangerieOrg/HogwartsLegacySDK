#pragma once
#include <cstdint>
class UMultiFX2_Base;
#pragma pack(push, 1)
struct FCombatCursedData {
    TArray<UMultiFX2_Base*> ActivateFX2; // 0x0
    TArray<UMultiFX2_Base*> FlairFX2; // 0x10
}; // Size: 0x20
#pragma pack(pop)
