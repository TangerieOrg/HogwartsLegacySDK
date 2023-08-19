#pragma once
#include <cstdint>
#include "FGlobal_GameLogicElement.hpp"
#pragma pack(push, 1)
struct FGlobal_GameLogicVar_Enum : public FGlobal_GameLogicElement {
    FString EnumType; // 0x20
    FString EnumValue; // 0x30
}; // Size: 0x40
#pragma pack(pop)
