#pragma once
#include <cstdint>
#include "FName_GameLogicVarBool.hpp"
#include "UFXAutoTriggerScalar.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerBoolPlayerRequirementOnOff : public UFXAutoTriggerScalar {
public:
    FName_GameLogicVarBool PlayerRequirement; // 0x28
    static UFXAutoTriggerBoolPlayerRequirementOnOff* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
