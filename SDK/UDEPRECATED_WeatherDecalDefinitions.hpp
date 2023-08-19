#pragma once
#include <cstdint>
#include "UDataAsset.hpp"
class UWeatherDecal;
#pragma pack(push, 1)
class UDEPRECATED_WeatherDecalDefinitions : public UDataAsset {
public:
    TArray<UWeatherDecal*> Decals; // 0x30
    static UDEPRECATED_WeatherDecalDefinitions* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
