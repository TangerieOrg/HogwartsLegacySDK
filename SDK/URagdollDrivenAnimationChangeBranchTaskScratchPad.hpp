#pragma once
#include <cstdint>
#include "UAblBranchTaskScratchPad.hpp"
#pragma pack(push, 1)
class URagdollDrivenAnimationChangeBranchTaskScratchPad : public UAblBranchTaskScratchPad {
public:
    char pad_50[0x8];
    static URagdollDrivenAnimationChangeBranchTaskScratchPad* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
