#pragma once
#include <cstdint>
#include "UEphemerisSubroutineGamifyTimeCurveBase.hpp"
#pragma pack(push, 1)
class UEphemerisSubroutineGamifyTimeDayNightRatio : public UEphemerisSubroutineGamifyTimeCurveBase {
public:
    float DayToNightRatio; // 0xb0
    char pad_b4[0x4];
    static UEphemerisSubroutineGamifyTimeDayNightRatio* StaticClass();
}; // Size: 0xb8
#pragma pack(pop)
