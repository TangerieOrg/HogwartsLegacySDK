#pragma once
#include <cstdint>
#include "UAblAbilityTaskScratchPad.hpp"
#pragma pack(push, 1)
class UAblNpcPopupScratchpad : public UAblAbilityTaskScratchPad {
public:
    char pad_28[0x38];
    static UAblNpcPopupScratchpad* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
