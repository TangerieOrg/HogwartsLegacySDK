#pragma once
#include <cstdint>
#include "UAblAbilityTaskScratchPad.hpp"
#pragma pack(push, 1)
class UablNiagaraPlayEffectTaskScratchPad : public UAblAbilityTaskScratchPad {
public:
    float ElapsedTime; // 0x28
    char pad_2c[0xc];
    static UablNiagaraPlayEffectTaskScratchPad* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
