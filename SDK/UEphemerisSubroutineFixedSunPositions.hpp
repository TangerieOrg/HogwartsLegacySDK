#pragma once
#include <cstdint>
#include "UEphemerisSubroutine.hpp"
class UFixedSunPositions;
#pragma pack(push, 1)
class UEphemerisSubroutineFixedSunPositions : public UEphemerisSubroutine {
public:
    UFixedSunPositions* FixedPositions; // 0x28
    bool bEnabled; // 0x30
    char pad_31[0x7];
    static UEphemerisSubroutineFixedSunPositions* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
