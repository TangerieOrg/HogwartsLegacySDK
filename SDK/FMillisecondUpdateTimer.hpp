#pragma once
#include <cstdint>
#include "FDateTime.hpp"
#pragma pack(push, 1)
struct FMillisecondUpdateTimer {
    FDateTime NextUpdate; // 0x0
    float UpdateRateMS; // 0x8
    bool bEnabled; // 0xc
    char pad_d[0x3];
}; // Size: 0x10
#pragma pack(pop)
