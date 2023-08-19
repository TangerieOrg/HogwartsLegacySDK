#pragma once
#include <cstdint>
#include "FName_GameLogicVarBool.hpp"
#include "UFXAutoTriggerBool.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerBoolGameLogicRequirement : public UFXAutoTriggerBool {
public:
    FName_GameLogicVarBool Requirement; // 0x28
    static UFXAutoTriggerBoolGameLogicRequirement* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
