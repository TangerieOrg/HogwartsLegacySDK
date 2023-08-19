#pragma once
#include <cstdint>
#include "FName_GameLogicExpression.hpp"
#include "UWorldFXRulePlayerGameLogic.hpp"
#pragma pack(push, 1)
class UWorldFXRulePlayerExpression : public UWorldFXRulePlayerGameLogic {
public:
    FName_GameLogicExpression PlayerExpression; // 0x28
    static UWorldFXRulePlayerExpression* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
