#pragma once
#include <cstdint>
#include "FDayNightLightRigOverride.hpp"
#include "UDataAsset.hpp"
class ULightSettingsLerpControl;
class ULightSettingsModCurve;
#pragma pack(push, 1)
class UNightLightRig : public UDataAsset {
public:
    FDayNightLightRigOverride NewMoon; // 0x30
    FDayNightLightRigOverride FullMoon; // 0x320
    TArray<ULightSettingsLerpControl*> PhaseLerp; // 0x610
    TArray<ULightSettingsModCurve*> AltitudeMods; // 0x620
    TArray<ULightSettingsModCurve*> SunAltitudeMods; // 0x630
    TArray<ULightSettingsModCurve*> SunTimeMods; // 0x640
    static UNightLightRig* StaticClass();
}; // Size: 0x650
#pragma pack(pop)
