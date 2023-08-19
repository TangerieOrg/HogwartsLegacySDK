#pragma once
#include <cstdint>
#include "UAblAbilityTaskScratchPad.hpp"
class AActor;
#pragma pack(push, 1)
class UAblTransformIntoNoDeathScratchpad : public UAblAbilityTaskScratchPad {
public:
    AActor* SpawnedCreature; // 0x28
    static UAblTransformIntoNoDeathScratchpad* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
