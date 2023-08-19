#pragma once
#include <cstdint>
#include "FGlobal_GameLogicElement.hpp"
#pragma pack(push, 1)
struct FGlobal_GameLogicVar_Int32 : public FGlobal_GameLogicElement {
    int32_t InitialValue; // 0x20
    char pad_24[0x4];
}; // Size: 0x28
#pragma pack(pop)
