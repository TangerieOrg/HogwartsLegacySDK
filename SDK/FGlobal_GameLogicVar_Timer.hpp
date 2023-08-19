#pragma once
#include <cstdint>
#include "FGlobal_GameLogicElement.hpp"
#pragma pack(push, 1)
struct FGlobal_GameLogicVar_Timer : public FGlobal_GameLogicElement {
    float InitialValue; // 0x20
    bool bInitiallyPaused; // 0x24
    char pad_25[0x3];
}; // Size: 0x28
#pragma pack(pop)
