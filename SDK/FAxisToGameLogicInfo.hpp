#pragma once
#include <cstdint>
#include "FInputToGameLogicInfo.hpp"
#include "FName_GameLogicVarFloat.hpp"
#pragma pack(push, 1)
struct FAxisToGameLogicInfo : public FInputToGameLogicInfo {
    FName_GameLogicVarFloat FloatVarName; // 0xc
    float EnterValue; // 0x14
    float ExitValue; // 0x18
}; // Size: 0x1c
#pragma pack(pop)
