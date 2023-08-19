#pragma once
#include <cstdint>
#include "UAblCustomEventListenerScratchpad.hpp"
#pragma pack(push, 1)
class UAblCustomEventListenerStartEndScratchpad : public UAblCustomEventListenerScratchpad {
public:
    char pad_30[0x8];
    static UAblCustomEventListenerStartEndScratchpad* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
