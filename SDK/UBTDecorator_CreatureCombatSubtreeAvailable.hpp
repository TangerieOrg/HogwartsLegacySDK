#pragma once
#include <cstdint>
#include "UBTDecorator.hpp"
class UCreatureCombatData;
#pragma pack(push, 1)
class UBTDecorator_CreatureCombatSubtreeAvailable : public UBTDecorator {
public:
    UCreatureCombatData* CombatData; // 0x68
    static UBTDecorator_CreatureCombatSubtreeAvailable* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
