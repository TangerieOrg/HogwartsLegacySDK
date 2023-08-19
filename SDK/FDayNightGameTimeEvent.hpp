#pragma once
#include <cstdint>
#include "FTimeInput.hpp"
#pragma pack(push, 1)
struct FDayNightGameTimeEvent {
    FTimeInput GameTime; // 0x0
    bool bAllowFireOnBeginPlay; // 0xc
    bool bAllowFireOnDiscontinuity; // 0xd
    char pad_e[0x2];
}; // Size: 0x10
#pragma pack(pop)
