#pragma once
#include <cstdint>
#include "FGlobal_GameLogicElement.hpp"
#pragma pack(push, 1)
struct FGlobal_GameLogicVar_Bool : public FGlobal_GameLogicElement {
    bool bInitialValue; // 0x20
    char pad_21[0x7];
}; // Size: 0x28
#pragma pack(pop)
