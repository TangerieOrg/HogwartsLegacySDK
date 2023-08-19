#pragma once
#include <cstdint>
#include "UAblAbilityTaskScratchPad.hpp"
class UablExecuteTaskSubScratchPad;
#pragma pack(push, 1)
class UablExecuteTaskScratchPad : public UAblAbilityTaskScratchPad {
public:
    UablExecuteTaskSubScratchPad* SubTaskScratchPad; // 0x28
    static UablExecuteTaskScratchPad* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
