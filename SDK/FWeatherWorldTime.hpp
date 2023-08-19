#pragma once
#include <cstdint>
#include "FDateTime.hpp"
#pragma pack(push, 1)
struct FWeatherWorldTime {
    char pad_0[0x8];
    FDateTime DateTime; // 0x8
    float DeltaTime; // 0x10
    float Rate; // 0x14
    bool bDeltaTimeValid; // 0x18
    bool bRateValid; // 0x19
    char pad_1a[0x6];
}; // Size: 0x20
#pragma pack(pop)
