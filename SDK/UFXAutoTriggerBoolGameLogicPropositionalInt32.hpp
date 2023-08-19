#pragma once
#include <cstdint>
#include "FName_GameLogicPropInt32.hpp"
#include "UFXAutoTriggerBool.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerBoolGameLogicPropositionalInt32 : public UFXAutoTriggerBool {
public:
    FName_GameLogicPropInt32 Propositional; // 0x28
    static UFXAutoTriggerBoolGameLogicPropositionalInt32* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
