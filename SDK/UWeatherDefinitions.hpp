#pragma once
#include <cstdint>
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UWeatherDefinitions : public UDataAsset {
public:
    static UWeatherDefinitions* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
