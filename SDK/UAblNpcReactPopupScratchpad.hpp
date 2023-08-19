#pragma once
#include <cstdint>
#include "UAblNpcPopupScratchpad.hpp"
class UAblReactionData;
#pragma pack(push, 1)
class UAblNpcReactPopupScratchpad : public UAblNpcPopupScratchpad {
public:
    UAblReactionData* ReactionData; // 0x60
    char pad_68[0x8];
    static UAblNpcReactPopupScratchpad* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
