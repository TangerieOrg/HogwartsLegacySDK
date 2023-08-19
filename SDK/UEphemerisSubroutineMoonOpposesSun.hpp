#pragma once
#include <cstdint>
#include "UEphemerisSubroutine.hpp"
#pragma pack(push, 1)
class UEphemerisSubroutineMoonOpposesSun : public UEphemerisSubroutine {
public:
    float OffsetDegrees; // 0x28
    bool bEnabled; // 0x2c
    char pad_2d[0x3];
    static UEphemerisSubroutineMoonOpposesSun* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
