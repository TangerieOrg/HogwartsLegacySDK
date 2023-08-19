#pragma once
#include <cstdint>
#include "UBTService.hpp"
class UCreatureCombatData;
#pragma pack(push, 1)
class UBTService_Creature_ActiveCombatData : public UBTService {
public:
    UCreatureCombatData* CombatData; // 0x70
    bool bMarkActive; // 0x78
    bool bExecutingAttack; // 0x79
    char pad_7a[0x6];
    static UBTService_Creature_ActiveCombatData* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
