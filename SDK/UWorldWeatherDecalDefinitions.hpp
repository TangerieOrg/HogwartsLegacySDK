#pragma once
#include <cstdint>
#include "UDataAsset.hpp"
class UWorldWeatherDecal;
#pragma pack(push, 1)
class UWorldWeatherDecalDefinitions : public UDataAsset {
public:
    TArray<UWorldWeatherDecal*> Decals; // 0x30
    static UWorldWeatherDecalDefinitions* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
