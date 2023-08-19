#pragma once
#include <cstdint>
#include "UAblPlayObjectArchitectVfxScratchpad.hpp"
#pragma pack(push, 1)
class UAblNpcReactPlayObjectArchitectVfxScratchpad : public UAblPlayObjectArchitectVfxScratchpad {
public:
    char pad_48[0x10];
    static UAblNpcReactPlayObjectArchitectVfxScratchpad* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
