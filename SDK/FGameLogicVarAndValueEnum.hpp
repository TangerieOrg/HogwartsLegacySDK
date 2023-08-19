#pragma once
#include <cstdint>
#include "FName_GameLogicElement.hpp"
#pragma pack(push, 1)
struct FGameLogicVarAndValueEnum : public FName_GameLogicElement {
    FString EnumType; // 0x8
    FString EnumValue; // 0x18
}; // Size: 0x28
#pragma pack(pop)
