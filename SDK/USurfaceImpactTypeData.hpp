#pragma once
#include <cstdint>
#include "UDataAsset.hpp"
class UWeatherRemapBase;
#pragma pack(push, 1)
class USurfaceImpactTypeData : public UDataAsset {
public:
    TArray<UWeatherRemapBase*> WeatherRemap; // 0x30
    char pad_40[0x50];
    static USurfaceImpactTypeData* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
