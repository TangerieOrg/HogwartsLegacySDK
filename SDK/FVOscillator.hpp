#pragma once
#include <cstdint>
#include "FFOscillator.hpp"
#pragma pack(push, 1)
struct FVOscillator {
    FFOscillator X; // 0x0
    FFOscillator Y; // 0xc
    FFOscillator Z; // 0x18
}; // Size: 0x24
#pragma pack(pop)
