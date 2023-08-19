#pragma once
#include <cstdint>
#include "FName_GameLogicBoolResult.hpp"
#include "UWorldFXRulePlayerGameLogic.hpp"
#pragma pack(push, 1)
class UWorldFXRulePlayerResult : public UWorldFXRulePlayerGameLogic {
public:
    FName_GameLogicBoolResult PlayerResult; // 0x28
    static UWorldFXRulePlayerResult* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
