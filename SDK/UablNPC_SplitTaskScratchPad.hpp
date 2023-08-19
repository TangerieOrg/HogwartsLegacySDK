#pragma once
#include <cstdint>
#include "UAblBranchTaskScratchPad.hpp"
#pragma pack(push, 1)
class UablNPC_SplitTaskScratchPad : public UAblBranchTaskScratchPad {
public:
    bool bDone; // 0x50
    char pad_51[0x7];
    static UablNPC_SplitTaskScratchPad* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
