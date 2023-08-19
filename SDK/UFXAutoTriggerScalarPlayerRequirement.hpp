#pragma once
#include <cstdint>
#include "FName_GameLogicVarFloat.hpp"
#include "UFXAutoTriggerScalar.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerScalarPlayerRequirement : public UFXAutoTriggerScalar {
public:
    FName_GameLogicVarFloat PlayerRequirement; // 0x28
    static UFXAutoTriggerScalarPlayerRequirement* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
