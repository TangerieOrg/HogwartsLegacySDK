#pragma once
#include <cstdint>
#include "EMoonPhaseName.hpp"
#include "FDateTime.hpp"
#include "FDayNightEventsCurrentAltitude.hpp"
#include "FTimespan.hpp"
#pragma pack(push, 1)
struct FDayNightEventsCurrentState {
    float NormalizedTime; // 0x0
    char pad_4[0x4];
    FDateTime GameDateTime; // 0x8
    FTimespan DeltaTime; // 0x10
    FDayNightEventsCurrentAltitude Sun; // 0x18
    FDayNightEventsCurrentAltitude Moon; // 0x20
    EMoonPhaseName MoonPhase; // 0x28
    bool bValid; // 0x29
    char pad_2a[0x6];
}; // Size: 0x30
#pragma pack(pop)
