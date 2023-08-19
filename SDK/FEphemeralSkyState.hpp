#pragma once
#include <cstdint>
#include "FDateTime.hpp"
#include "FEphemeralCelestialSphereState.hpp"
#include "FEphemeralMoonState.hpp"
#include "FEphemeralPlanetState.hpp"
#include "FEphemeralSunState.hpp"
#include "FSolarNormalizedTime.hpp"
#include "FTopographicDirection.hpp"
class UEphemerisBasis;
#pragma pack(push, 1)
struct FEphemeralSkyState {
    UEphemerisBasis* Basis; // 0x0
    FDateTime DateTime; // 0x8
    FEphemeralSunState Sun; // 0x10
    FTopographicDirection Sunlight; // 0x2c
    FTopographicDirection SunDisk; // 0x40
    char pad_54[0x4];
    FDateTime OverrideSunDateTime; // 0x58
    FSolarNormalizedTime NormalizedTime; // 0x60
    FEphemeralMoonState Moon; // 0x64
    FTopographicDirection MoonLight; // 0xc4
    FEphemeralPlanetState Venus; // 0xd8
    FEphemeralPlanetState Mars; // 0xf4
    FEphemeralPlanetState Jupiter; // 0x110
    FEphemeralPlanetState Saturn; // 0x12c
    char pad_148[0x8];
    FEphemeralCelestialSphereState CelestialSphere; // 0x150
    float NightDayNegOneToOne; // 0x170
    float NightDayLerp; // 0x174
    float NightLerp; // 0x178
    float DayLerp; // 0x17c
    float NightSkyStrength; // 0x180
    bool bTimeLerped; // 0x184
    bool bNormalizedTimeValid; // 0x185
    bool bSunValid; // 0x186
    bool bMoonValid; // 0x187
    bool bPlanetsValid; // 0x188
    bool bCelestialSphereValid; // 0x189
    bool bComputed; // 0x18a
    bool bUsingSecondaryDirectionalLight; // 0x18b
    char pad_18c[0x4];
}; // Size: 0x190
#pragma pack(pop)
