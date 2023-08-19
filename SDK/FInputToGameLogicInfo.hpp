#pragma once
#include <cstdint>
#include "FName_GameLogicVarBool.hpp"
#pragma pack(push, 1)
struct FInputToGameLogicInfo {
    FName_GameLogicVarBool BoolVarName; // 0x0
    bool bExecuteWhenPaused; // 0x8
    char pad_9[0x3];
}; // Size: 0xc
#pragma pack(pop)
