#pragma once
#include <cstdint>
#include "EMovementMode.hpp"
#include "UAblAbilityTaskScratchPad.hpp"
#pragma pack(push, 1)
class UAblMovementModeTaskScratchPad : public UAblAbilityTaskScratchPad {
public:
    EMovementMode OriginalMovementMode; // 0x28
    char pad_29[0x7];
    static UAblMovementModeTaskScratchPad* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
