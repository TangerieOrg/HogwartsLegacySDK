#pragma once
#include <cstdint>
#include "UAblAbilityTaskScratchPad.hpp"
#pragma pack(push, 1)
class UablInputContextTaskScratchPad : public UAblAbilityTaskScratchPad {
public:
    bool bAllowModifyContexts; // 0x28
    char pad_29[0x7];
    static UablInputContextTaskScratchPad* StaticClass();
    void LeafNodeSwitched();
}; // Size: 0x30
#pragma pack(pop)
