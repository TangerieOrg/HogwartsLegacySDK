#pragma once
#include <cstdint>
#include "FGlobal_GameLogicElement.hpp"
#pragma pack(push, 1)
struct FGlobal_GameLogicVar_Float : public FGlobal_GameLogicElement {
    float InitialValue; // 0x20
    char pad_24[0x4];
}; // Size: 0x28
#pragma pack(pop)
