#pragma once
#include <cstdint>
#include "FManualMoonSetup.hpp"
#include "UEphemerisSubroutine.hpp"
#pragma pack(push, 1)
class UEphemerisSubroutineForceMoonPhase : public UEphemerisSubroutine {
public:
    FManualMoonSetup Moon; // 0x28
    bool bEnabled; // 0x40
    char pad_41[0x7];
    static UEphemerisSubroutineForceMoonPhase* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
