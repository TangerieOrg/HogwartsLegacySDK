#pragma once
#include <cstdint>
#include "EUtilityArithmeticOperation.hpp"
#include "UQualifierConsideration.hpp"
#pragma pack(push, 1)
class USelfActorCreatureCombatStage : public UQualifierConsideration {
public:
    EUtilityArithmeticOperation Operation; // 0x28
    char pad_29[0x3];
    int32_t StageIndex; // 0x2c
    static USelfActorCreatureCombatStage* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
