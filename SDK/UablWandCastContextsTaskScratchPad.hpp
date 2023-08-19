#pragma once
#include <cstdint>
#include "EWandCastType\Type.hpp"
#include "UAblAbilityTaskScratchPad.hpp"
#pragma pack(push, 1)
class UablWandCastContextsTaskScratchPad : public UAblAbilityTaskScratchPad {
public:
    EWandCastType::Type WandCastType; // 0x28
    char pad_29[0x57];
    float ElapsedTime; // 0x80
    char pad_84[0x4];
    static UablWandCastContextsTaskScratchPad* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
