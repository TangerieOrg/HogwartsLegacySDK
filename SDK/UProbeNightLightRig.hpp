#pragma once
#include <cstdint>
#include "EProbeNightLightMoonDirection.hpp"
#include "FDayNightLightRigOverride.hpp"
#include "FManualMoonSetup.hpp"
#include "FRotator.hpp"
#include "UDataAsset.hpp"
class ULightSettingsModCurve;
#pragma pack(push, 1)
class UProbeNightLightRig : public UDataAsset {
public:
    EProbeNightLightMoonDirection DirectionMode; // 0x30
    char pad_31[0x3];
    FRotator FixedDirection; // 0x34
    FManualMoonSetup MoonSetup; // 0x40
    FDayNightLightRigOverride ProbeNight; // 0x58
    TArray<ULightSettingsModCurve*> AltitudeMods; // 0x348
    TArray<ULightSettingsModCurve*> SunAltitudeMods; // 0x358
    TArray<ULightSettingsModCurve*> SunTimeMods; // 0x368
    bool bUseMoonSetup; // 0x378
    bool bUseLightRig; // 0x379
    char pad_37a[0x6];
    static UProbeNightLightRig* StaticClass();
}; // Size: 0x380
#pragma pack(pop)
