#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FGeocentricOrbitsShow {
    bool bSunPath; // 0x0
    bool bShowSunExtra; // 0x1
    bool bMoonPath; // 0x2
    bool bShowMoonPhase; // 0x3
    bool bVenusPath; // 0x4
    bool bMarsPath; // 0x5
    bool bJupiterPath; // 0x6
    bool bSaturnPath; // 0x7
}; // Size: 0x8
#pragma pack(pop)
