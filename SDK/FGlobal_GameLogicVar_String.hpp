#pragma once
#include <cstdint>
#include "FGlobal_GameLogicElement.hpp"
#pragma pack(push, 1)
struct FGlobal_GameLogicVar_String : public FGlobal_GameLogicElement {
    FString InitialValue; // 0x20
}; // Size: 0x30
#pragma pack(pop)
