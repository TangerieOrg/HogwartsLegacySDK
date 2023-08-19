#pragma once
#include <cstdint>
#include "UWeatherDecal.hpp"
#pragma pack(push, 1)
class UStormWeatherDecal : public UWeatherDecal {
public:
    static UStormWeatherDecal* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
