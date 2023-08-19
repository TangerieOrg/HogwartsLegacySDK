#pragma once
#include <cstdint>
#include "UAblTaskConditionScratchpad.hpp"
#pragma pack(push, 1)
class UAblTaskConditionScratchpad_HermesMessage : public UAblTaskConditionScratchpad {
public:
    char pad_30[0x10];
    static UAblTaskConditionScratchpad_HermesMessage* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
