#pragma once
#include <cstdint>
#include "FGlobal_GameLogicPropositional.hpp"
#pragma pack(push, 1)
struct FGlobal_GameLogicPropositional_Enum : public FGlobal_GameLogicPropositional {
    FString EnumType; // 0x30
    TArray<FString> Values; // 0x40
}; // Size: 0x50
#pragma pack(pop)
