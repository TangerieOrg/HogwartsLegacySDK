#pragma once
#include <cstdint>
#include "UAblAbilityTaskScratchPad.hpp"
#pragma pack(push, 1)
class UAblDamageEventTaskScratchPad : public UAblAbilityTaskScratchPad {
public:
    TArray<float> DamageValues; // 0x28
    static UAblDamageEventTaskScratchPad* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
