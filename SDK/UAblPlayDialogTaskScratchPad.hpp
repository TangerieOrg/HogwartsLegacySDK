#pragma once
#include <cstdint>
#include "UAblAbilityTaskScratchPad.hpp"
#pragma pack(push, 1)
class UAblPlayDialogTaskScratchPad : public UAblAbilityTaskScratchPad {
public:
    TArray<void*> AttachedDialogs; // 0x28
    int32_t DialogEventId; // 0x38
    char pad_3c[0x4];
    static UAblPlayDialogTaskScratchPad* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
