#pragma once
#include <cstdint>
#include "FDayNightLightRigSetup.hpp"
#include "UDataAsset.hpp"
class ULightSettingsModCurve;
#pragma pack(push, 1)
class UDayLightRig : public UDataAsset {
public:
    FDayNightLightRigSetup Sun; // 0x30
    TArray<ULightSettingsModCurve*> AltitudeMods; // 0x2e8
    TArray<ULightSettingsModCurve*> TimeMods; // 0x2f8
    static UDayLightRig* StaticClass();
}; // Size: 0x308
#pragma pack(pop)
