#pragma once
#include <cstdint>
#include "UDataAsset.hpp"
class ULightSettingsModCurve;
#pragma pack(push, 1)
class UDayNightExpHeightFogAdjustments : public UDataAsset {
public:
    TArray<ULightSettingsModCurve*> AltitudeMods; // 0x30
    TArray<ULightSettingsModCurve*> NormalizedTimeMods; // 0x40
    static UDayNightExpHeightFogAdjustments* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
