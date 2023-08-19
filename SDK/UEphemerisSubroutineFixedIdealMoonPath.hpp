#pragma once
#include <cstdint>
#include "EMoonPathMode.hpp"
#include "UEphemerisSubroutine.hpp"
class UFixedIdealMoonPathData;
#pragma pack(push, 1)
class UEphemerisSubroutineFixedIdealMoonPath : public UEphemerisSubroutine {
public:
    UFixedIdealMoonPathData* MoonPath; // 0x28
    EMoonPathMode AzimuthMode; // 0x30
    char pad_31[0x3];
    float AzimuthOffsetDegrees; // 0x34
    bool bEnabled; // 0x38
    char pad_39[0x7];
    static UEphemerisSubroutineFixedIdealMoonPath* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
