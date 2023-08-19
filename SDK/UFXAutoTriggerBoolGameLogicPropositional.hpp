#pragma once
#include <cstdint>
#include "FName_GameLogicPropFloat.hpp"
#include "UFXAutoTriggerBool.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerBoolGameLogicPropositional : public UFXAutoTriggerBool {
public:
    FName_GameLogicPropFloat Propositional; // 0x28
    static UFXAutoTriggerBoolGameLogicPropositional* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
