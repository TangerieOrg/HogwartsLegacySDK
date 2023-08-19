#pragma once
#include <cstdint>
#include "FGlobal_GameLogicPropositional.hpp"
#pragma pack(push, 1)
struct FGlobal_GameLogicPropositional_Bitfield : public FGlobal_GameLogicPropositional {
    FString BitfieldType; // 0x30
    TArray<FString> Values; // 0x40
}; // Size: 0x50
#pragma pack(pop)
