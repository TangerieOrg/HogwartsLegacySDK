#pragma once
#include <cstdint>
#include "FWeatherPreload.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UWeatherPreloads : public UDataAsset {
public:
    FWeatherPreload Preloads; // 0x30
    static UWeatherPreloads* StaticClass();
    void RebuildPreloads();
    void ClearPreloads();
}; // Size: 0x40
#pragma pack(pop)
