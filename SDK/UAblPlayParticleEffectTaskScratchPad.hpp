#pragma once
#include <cstdint>
#include "UAblAbilityTaskScratchPad.hpp"
#pragma pack(push, 1)
class UAblPlayParticleEffectTaskScratchPad : public UAblAbilityTaskScratchPad {
public:
    TArray<void*> SpawnedEffects; // 0x28
    static UAblPlayParticleEffectTaskScratchPad* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
