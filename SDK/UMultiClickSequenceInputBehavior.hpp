#pragma once
#include <cstdint>
#include "UAnyButtonInputBehavior.hpp"
#pragma pack(push, 1)
class UMultiClickSequenceInputBehavior : public UAnyButtonInputBehavior {
public:
    char pad_80[0xb0];
    static UMultiClickSequenceInputBehavior* StaticClass();
}; // Size: 0x130
#pragma pack(pop)
