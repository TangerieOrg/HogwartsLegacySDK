#pragma once
#include <cstdint>
#include "FName_GameLogicPropInt32.hpp"
#include "UFXAutoTriggerScalar.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerScalarGameLogicPropositionalInt32 : public UFXAutoTriggerScalar {
public:
    FName_GameLogicPropInt32 Propositional; // 0x28
    static UFXAutoTriggerScalarGameLogicPropositionalInt32* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
