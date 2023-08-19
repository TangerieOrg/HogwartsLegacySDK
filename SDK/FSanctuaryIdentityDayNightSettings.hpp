#pragma once
#include <cstdint>
class UTimeSource;
class UEphemerisSubroutine;
#pragma pack(push, 1)
struct FSanctuaryIdentityDayNightSettings {
    TArray<UTimeSource*> TimeSources; // 0x0
    TArray<UEphemerisSubroutine*> EphemerisProgram; // 0x10
}; // Size: 0x20
#pragma pack(pop)
