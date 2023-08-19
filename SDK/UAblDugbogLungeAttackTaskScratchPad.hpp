#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UAblAbilityTaskScratchPad.hpp"
#pragma pack(push, 1)
class UAblDugbogLungeAttackTaskScratchPad : public UAblAbilityTaskScratchPad {
public:
    bool bIsDone; // 0x28
    char pad_29[0x3];
    FVector AwayVector; // 0x2c
    static UAblDugbogLungeAttackTaskScratchPad* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
