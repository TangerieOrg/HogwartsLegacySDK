#pragma once
#include <cstdint>
#include "UAblAbilityTaskScratchPad.hpp"
#pragma pack(push, 1)
class UAblPlaySoundTaskScratchPad : public UAblAbilityTaskScratchPad {
public:
    TArray<void*> AttachedSounds; // 0x28
    static UAblPlaySoundTaskScratchPad* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
