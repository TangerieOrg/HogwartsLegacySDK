#pragma once
#include <cstdint>
#include "UEphemerisSubroutine.hpp"
#pragma pack(push, 1)
class UEphemerisSubroutineNoNewMoon : public UEphemerisSubroutine {
public:
    float MinimalPhasePercent; // 0x28
    bool bUpdateVisualPhaseOnly; // 0x2c
    bool bEnabled; // 0x2d
    char pad_2e[0x2];
    static UEphemerisSubroutineNoNewMoon* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
