#pragma once
#include <cstdint>
#include "FDateTime.hpp"
#pragma pack(push, 1)
struct FTimeEvent {
    int32_t DayMask; // 0x0
    float Hour; // 0x4
    float Minute; // 0x8
    float Second; // 0xc
    float DeltaTime; // 0x10
    float Time24; // 0x14
    FDateTime SimulatedTime; // 0x18
    FDateTime EventTime; // 0x20
    char pad_28[0x8];
}; // Size: 0x30
#pragma pack(pop)
