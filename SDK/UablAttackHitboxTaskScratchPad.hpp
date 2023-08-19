#pragma once
#include <cstdint>
#include "UAblAbilityTaskScratchPad.hpp"
class AMunitionType_Hitbox;
#pragma pack(push, 1)
class UablAttackHitboxTaskScratchPad : public UAblAbilityTaskScratchPad {
public:
    AMunitionType_Hitbox* MunitionInstance; // 0x28
    static UablAttackHitboxTaskScratchPad* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
