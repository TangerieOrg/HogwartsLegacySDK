#pragma once
#include <cstdint>
#include "FName_GameLogicVarFloat.hpp"
#include "UFXAutoTriggerScalar.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerScalarGameLogicRequirement : public UFXAutoTriggerScalar {
public:
    FName_GameLogicVarFloat Requirement; // 0x28
    static UFXAutoTriggerScalarGameLogicRequirement* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
