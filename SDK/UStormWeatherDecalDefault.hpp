#pragma once
#include <cstdint>
#include "FWeatherDecalSetup.hpp"
#include "FWeatherStormSurfaceParams.hpp"
#include "UStormWeatherDecal.hpp"
class UClass;
class UWeatherDecalSettings;
class UWeatherDecalUpdate;
#pragma pack(push, 1)
class UStormWeatherDecalDefault : public UStormWeatherDecal {
public:
    FWeatherDecalSetup Setup; // 0x28
    UClass* WeatherAnimationClass; // 0x48
    UClass* WeatherCoverageClass; // 0x50
    FWeatherStormSurfaceParams SurfaceParameters; // 0x58
    TArray<UWeatherDecalSettings*> ExtraSettings; // 0xc8
    TArray<UWeatherDecalUpdate*> Updates; // 0xd8
    static UStormWeatherDecalDefault* StaticClass();
}; // Size: 0xe8
#pragma pack(pop)
