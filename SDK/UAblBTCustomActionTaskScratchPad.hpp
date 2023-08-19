#pragma once
#include <cstdint>
#include "FBTCustomActionTaskEntry.hpp"
#include "UAblAbilityTaskScratchPad.hpp"
#pragma pack(push, 1)
class UAblBTCustomActionTaskScratchPad : public UAblAbilityTaskScratchPad {
public:
    TArray<FBTCustomActionTaskEntry> InProgressMessage; // 0x28
    static UAblBTCustomActionTaskScratchPad* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
