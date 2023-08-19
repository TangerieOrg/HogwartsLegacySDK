#pragma once
#include <cstdint>
#include "UEphemerisSubroutine.hpp"
#pragma pack(push, 1)
class UEphemerisSubroutineAstronomical : public UEphemerisSubroutine {
public:
    float MoonPeriodDays; // 0x28
    bool bOverride_MoonPeriodDays; // 0x2c
    char pad_2d[0x3];
    static UEphemerisSubroutineAstronomical* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
