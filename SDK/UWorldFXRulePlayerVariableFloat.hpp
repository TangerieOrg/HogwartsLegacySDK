#pragma once
#include <cstdint>
#include "FName_GameLogicVarFloat.hpp"
#include "UWorldFXRulePlayerGameLogic.hpp"
#pragma pack(push, 1)
class UWorldFXRulePlayerVariableFloat : public UWorldFXRulePlayerGameLogic {
public:
    FName_GameLogicVarFloat PlayerVariable; // 0x28
    float minThreshold; // 0x30
    float maxThreshold; // 0x34
    static UWorldFXRulePlayerVariableFloat* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
