#pragma once
#include <cstdint>
#include "FFOscillator.hpp"
#pragma pack(push, 1)
struct FROscillator {
    FFOscillator Pitch; // 0x0
    FFOscillator Yaw; // 0xc
    FFOscillator Roll; // 0x18
}; // Size: 0x24
#pragma pack(pop)
