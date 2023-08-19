#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UAblAbilityTaskScratchPad.hpp"
#pragma pack(push, 1)
class UAblBallisticBounceBackTaskScratchPad : public UAblAbilityTaskScratchPad {
public:
    FVector VectorAwayFromAttacked; // 0x28
    char pad_34[0x4];
    static UAblBallisticBounceBackTaskScratchPad* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
