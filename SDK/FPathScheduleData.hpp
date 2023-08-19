#pragma once
#include <cstdint>
#include "FTypeWeight.hpp"
#pragma pack(push, 1)
struct FPathScheduleData {
    int32_t StartTime; // 0x0
    uint8_t DaysMask; // 0x4
    char pad_5[0x3];
    int32_t SpawnDensity; // 0x8
    uint8_t HouseAndGender; // 0xc
    char pad_d[0x3];
    uint32_t HoboType; // 0x10
    char pad_14[0x4];
    TArray<FTypeWeight> Weights; // 0x18
    char pad_28[0x8];
}; // Size: 0x30
#pragma pack(pop)
