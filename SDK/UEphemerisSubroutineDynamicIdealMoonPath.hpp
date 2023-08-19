#pragma once
#include <cstdint>
#include "EMoonPathMode.hpp"
#include "FMoonPathSettings.hpp"
#include "UEphemerisSubroutine.hpp"
#pragma pack(push, 1)
class UEphemerisSubroutineDynamicIdealMoonPath : public UEphemerisSubroutine {
public:
    EMoonPathMode AzimuthMode; // 0x28
    char pad_29[0x3];
    float AzimuthOffsetDegrees; // 0x2c
    FMoonPathSettings PathSettings; // 0x30
    bool bEnabled; // 0x3c
    char pad_3d[0x3];
    static UEphemerisSubroutineDynamicIdealMoonPath* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
