#pragma once
#include <cstdint>
#include "FGlobal_GameLogicPropositional.hpp"
#pragma pack(push, 1)
struct FGlobal_GameLogicPropositional_String : public FGlobal_GameLogicPropositional {
    TArray<FString> Values; // 0x30
}; // Size: 0x40
#pragma pack(pop)
