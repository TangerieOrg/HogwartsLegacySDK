#pragma once
#include <cstdint>
#include "FGlobal_GameLogicElement.hpp"
#pragma pack(push, 1)
struct FGlobal_GameLogicSentence : public FGlobal_GameLogicElement {
    TArray<FName> LogicElements; // 0x20
}; // Size: 0x30
#pragma pack(pop)
