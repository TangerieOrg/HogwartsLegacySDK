#pragma once
#include <cstdint>
#include "FName_GameLogicVarBool.hpp"
#include "UWorldFXRulePlayerGameLogic.hpp"
#pragma pack(push, 1)
class UWorldFXRulePlayerVariableBool : public UWorldFXRulePlayerGameLogic {
public:
    FName_GameLogicVarBool PlayerVariable; // 0x28
    static UWorldFXRulePlayerVariableBool* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
