#pragma once
#include <cstdint>
#include "UWeatherDecal.hpp"
#pragma pack(push, 1)
class UWorldWeatherDecal : public UWeatherDecal {
public:
    static UWorldWeatherDecal* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
