#pragma once
#include <cstdint>
#include "EMonthsOfTheYear.hpp"
#include "FDateTime.hpp"
#pragma pack(push, 1)
struct FEventDateTime : public FDateTime {
    int32_t Year; // 0x8
    EMonthsOfTheYear Month; // 0xc
    char pad_d[0x3];
    int32_t Day; // 0x10
    int32_t Hour; // 0x14
    int32_t Minute; // 0x18
    int32_t Second; // 0x1c
    char pad_20[0x4];
    float DeltaMonths; // 0x24
    float DeltaDays; // 0x28
    float DeltaHours; // 0x2c
    float DeltaMinutes; // 0x30
    float DeltaSeconds; // 0x34
    uint8_t DaysMask; // 0x38
    char pad_39[0x7];
}; // Size: 0x40
#pragma pack(pop)
