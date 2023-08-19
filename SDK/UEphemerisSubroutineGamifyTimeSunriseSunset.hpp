#pragma once
#include <cstdint>
#include "FTimeInput.hpp"
#include "UEphemerisSubroutineGamifyTimeCurveBase.hpp"
#pragma pack(push, 1)
class UEphemerisSubroutineGamifyTimeSunriseSunset : public UEphemerisSubroutineGamifyTimeCurveBase {
public:
    FTimeInput SunRise; // 0xb0
    FTimeInput SunSet; // 0xbc
    static UEphemerisSubroutineGamifyTimeSunriseSunset* StaticClass();
}; // Size: 0xc8
#pragma pack(pop)
