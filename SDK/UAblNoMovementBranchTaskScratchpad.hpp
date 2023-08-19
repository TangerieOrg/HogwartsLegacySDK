#pragma once
#include <cstdint>
#include "UAblBranchTaskScratchPad.hpp"
#pragma pack(push, 1)
class UAblNoMovementBranchTaskScratchpad : public UAblBranchTaskScratchPad {
public:
    char pad_50[0x10];
    static UAblNoMovementBranchTaskScratchpad* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
