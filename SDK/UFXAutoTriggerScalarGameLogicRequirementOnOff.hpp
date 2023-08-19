#pragma once
#include <cstdint>
#include "FName_GameLogicVarBool.hpp"
#include "UFXAutoTriggerScalar.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerScalarGameLogicRequirementOnOff : public UFXAutoTriggerScalar {
public:
    FName_GameLogicVarBool Requirement; // 0x28
    static UFXAutoTriggerScalarGameLogicRequirementOnOff* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
