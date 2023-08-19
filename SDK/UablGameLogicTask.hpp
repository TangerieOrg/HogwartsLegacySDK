#pragma once
#include <cstdint>
#include "FName_GameLogicVarBool.hpp"
#include "FName_GameLogicVarInt32.hpp"
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UablGameLogicTask : public UAblAbilityTask {
public:
    FName_GameLogicVarBool BoolVar; // 0x70
    FName_GameLogicVarInt32 Int32Var; // 0x78
    static UablGameLogicTask* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
