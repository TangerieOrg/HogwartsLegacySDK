#pragma once
#include <cstdint>
#include "FVector2D.hpp"
#include "UCreatureCombatData.hpp"
#pragma pack(push, 1)
class UCreatureCombatRepositionData : public UCreatureCombatData {
public:
    FVector2D RepositionDistanceRange; // 0x38
    static UCreatureCombatRepositionData* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
