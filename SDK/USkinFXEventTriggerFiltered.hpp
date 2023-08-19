#pragma once
#include <cstdint>
#include "USkinFXEventTrigger.hpp"
#pragma pack(push, 1)
class USkinFXEventTriggerFiltered : public USkinFXEventTrigger {
public:
    int32_t Events; // 0x28
    char pad_2c[0x4];
    static USkinFXEventTriggerFiltered* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
