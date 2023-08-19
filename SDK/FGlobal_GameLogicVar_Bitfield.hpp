#pragma once
#include <cstdint>
#include "FGlobal_GameLogicElement.hpp"
#pragma pack(push, 1)
struct FGlobal_GameLogicVar_Bitfield : public FGlobal_GameLogicElement {
    FString BitfieldType; // 0x20
    FString BitfieldValue; // 0x30
}; // Size: 0x40
#pragma pack(pop)
