#pragma once
#include <cstdint>
class UCreatureCombatData;
#pragma pack(push, 1)
struct FCreatureCombatDataWrapper {
    UCreatureCombatData* CombatData; // 0x0
    char pad_8[0x20];
}; // Size: 0x28
#pragma pack(pop)
