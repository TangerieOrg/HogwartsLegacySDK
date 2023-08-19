#pragma once
#include <cstdint>
#include "FDayNightLightRigResults.hpp"
#include "FEphemeralSkyState.hpp"
#include "FEphemerisComputer.hpp"
#include "FTimeController.hpp"
#include "FTimeDateSourceStack.hpp"
#include "UActorComponent.hpp"
class UEphemerisBasis;
class UEphemerisSubroutine;
class UDayNightLightRig;
class UObject;
class ADayNightSky;
class UGeocentricOrbitsComponent;
struct FCelestialPointOfInterest;
struct FSolarNormalizedTime;
#pragma pack(push, 1)
class UDayNightMasterComponent : public UActorComponent {
public:
    UEphemerisBasis* ForceWorldBasis; // 0xc8
    FTimeDateSourceStack TimeSourceStack; // 0xd0
    FTimeController TimeController; // 0xe0
    TArray<UEphemerisSubroutine*> EphemerisProgram; // 0x190
    FEphemerisComputer EphemerisComputer; // 0x1a0
    UDayNightLightRig* DayNightLightRig; // 0x2e8
    FEphemeralSkyState SkyState; // 0x2f0
    FDayNightLightRigResults DayNightLightRigResults; // 0x480
    ADayNightSky* SkyActorOverride; // 0xd28
    UGeocentricOrbitsComponent* DebugOrbits; // 0xd30
    float LastNormalizedTime; // 0xd38
    char pad_d3c[0x4];
    static UDayNightMasterComponent* StaticClass();
    static bool GetPointOfInterest(UObject* WorldContextObject, FName Name, FCelestialPointOfInterest& poi);
    void GetNightZeroToOne(UObject* WorldContextObject, float& DayNightValue);
    void GetNightZeroDayOne(UObject* WorldContextObject, float& DayNightValue);
    void GetNightNegOneDayOne(UObject* WorldContextObject, float& DayNightValue);
    void GetDayZeroToOne(UObject* WorldContextObject, float& DayNightValue);
    static void GetDayNightMaster(UObject* WorldContextObject, UDayNightMasterComponent*& DayNightMaster);
    static void DayNightGetNormalizedTime(UObject* WorldContextObject, FSolarNormalizedTime& CurrentTime, bool& Valid);
    static void DayNightGetNightZeroToOne(UObject* WorldContextObject, float& DayNightValue);
    static void DayNightGetNightZeroDayOne(UObject* WorldContextObject, float& DayNightValue);
    static void DayNightGetNightNegOneDayOne(UObject* WorldContextObject, float& DayNightValue);
    static void DayNightGetDayZeroToOne(UObject* WorldContextObject, float& DayNightValue);
}; // Size: 0xd40
#pragma pack(pop)
