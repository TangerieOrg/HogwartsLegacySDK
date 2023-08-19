#pragma once
#include <cstdint>
#include "FDayNightEventSystemLastState.hpp"
#include "FDayNightEventsCurrentState.hpp"
#pragma pack(push, 1)
struct FDayNightEventSystem {
    char pad_0[0x50];
    TArray<FDayNightEventSystemLastState> LastStates; // 0x50
    char pad_60[0x50];
    FDayNightEventSystemLastState GlobalLastState; // 0xb0
    FDayNightEventsCurrentState GlobalCurrentState; // 0xc8
    char pad_f8[0xb8];
}; // Size: 0x1b0
#pragma pack(pop)
