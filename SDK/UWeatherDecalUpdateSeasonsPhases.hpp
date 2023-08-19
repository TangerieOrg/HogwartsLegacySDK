#pragma once
#include <cstdint>
#include "UWeatherDecalUpdate.hpp"
class UWeatherDecalSettings;
#pragma pack(push, 1)
class UWeatherDecalUpdateSeasonsPhases : public UWeatherDecalUpdate {
public:
    TArray<UWeatherDecalSettings*> FallPhases; // 0x28
    TArray<UWeatherDecalSettings*> WinterPhases; // 0x38
    TArray<UWeatherDecalSettings*> SpringPhases; // 0x48
    TArray<UWeatherDecalSettings*> SummerPhases; // 0x58
    bool bUseSeasonOverride; // 0x68
    char pad_69[0x7];
    static UWeatherDecalUpdateSeasonsPhases* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
