#pragma once
#include <cstdint>
#include "ENPC_GameContext.hpp"
#include "FGameplayTagContainer.hpp"
#pragma pack(push, 1)
struct FEnemy_TurnInPlaceUberData {
    ENPC_GameContext GameContext; // 0x0
    bool bSupported; // 0x1
    char pad_2[0x6];
    FGameplayTagContainer AATags; // 0x8
}; // Size: 0x28
#pragma pack(pop)
