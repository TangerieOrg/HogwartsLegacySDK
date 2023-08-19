#pragma once
#include <cstdint>
#include "UEphemerisSubroutineTweakDirection.hpp"
#pragma pack(push, 1)
class UEphemerisSubroutineTweakSunPosition : public UEphemerisSubroutineTweakDirection {
public:
    bool bFullSun; // 0x38
    bool bSunDisk; // 0x39
    bool bSunLight; // 0x3a
    char pad_3b[0x5];
    static UEphemerisSubroutineTweakSunPosition* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
