#pragma once
#include <cstdint>
#include "FTopographicObserver.hpp"
#include "UDataAsset.hpp"
class UCurveFloat;
class UDataTable;
class UStarCatalog;
#pragma pack(push, 1)
class UEphemerisBasis : public UDataAsset {
public:
    FTopographicObserver TopographicObserver; // 0x30
    char pad_44[0x4];
    UCurveFloat* SunAltitudeNightDayCurve; // 0x48
    UCurveFloat* NightSkyStrengthCurve; // 0x50
    UCurveFloat* SunIllusionCurve; // 0x58
    UCurveFloat* MoonIllusionCurve; // 0x60
    UDataTable* CelestialPointsOfInterest; // 0x68
    UStarCatalog* StarCatalog; // 0x70
    bool bSunIllusionCurve; // 0x78
    bool bMoonIllusionCurve; // 0x79
    char pad_7a[0x6];
    static UEphemerisBasis* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
