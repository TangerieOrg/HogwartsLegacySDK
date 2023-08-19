#pragma once
#include <cstdint>
#include "FName_GameLogicPropFloat.hpp"
#include "UFXAutoTriggerScalar.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerScalarGameLogicPropositional : public UFXAutoTriggerScalar {
public:
    FName_GameLogicPropFloat Propositional; // 0x28
    static UFXAutoTriggerScalarGameLogicPropositional* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
