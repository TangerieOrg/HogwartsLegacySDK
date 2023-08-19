#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FStar {
    FVector Direction; // 0x0
    FVector Color; // 0xc
    float LinearMagnitude; // 0x18
    float MagnitudeBrightness; // 0x1c
    uint8_t ConstellationID; // 0x20
    uint8_t ExtraID; // 0x21
    char pad_22[0x2];
}; // Size: 0x24
#pragma pack(pop)
