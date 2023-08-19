#pragma once
#include <cstdint>
#include "FName_GameLogicVarBool.hpp"
#include "UFXAutoTriggerBool.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerBoolPlayerRequirement : public UFXAutoTriggerBool {
public:
    FName_GameLogicVarBool PlayerRequirement; // 0x28
    static UFXAutoTriggerBoolPlayerRequirement* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
